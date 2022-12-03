from enum import Enum
from pathlib import Path

SCALAR_TYPE_NAMES = ("u8", "s8", "u16", "s16", "u32", "s32", "u64", "s64", "f32", "f64")

INTEGER_TYPE_NAMES = ("u8", "s8", "u16", "s16", "u32", "s32", "u64", "s64")

BINARY_OPS = [("add", "+"), ("sub", "-"), ("mul", "*"), ("div", "/")]
BINARY_INTEGER_OPS = [("shl", "<<"), ("shr", ">>"), ("binary_and", "&"),
                      ("binary_or", "|"), ("binary_xor", "^")]
RELATIONAL_OPS = [("lt", "<"), ("gt", ">"), ("lte", "<="), ("gte", ">="), ("eq", "=="), ("ne", "!=")]

TYPE_MAP = {
    "u8": "std::uint8_t",
    "s8": "std::int8_t",
    "u16": "std::uint16_t",
    "s16": "std::int16_t",
    "u32": "std::uint32_t",
    "s32": "std::int32_t",
    "u64": "std::uint64_t",
    "s64": "std::int64_t",
    "f32": "float",
    "f64": "double",
}

TEST_RESULTS = {

}


class ParmKind(Enum):
    MEM = 0
    CONST = 1
    REG = 2


class Opcode:
    __next_op_code = 0

    def __init__(self, op_class: str, data_type: str, src1_kind: ParmKind = None, src2_kind: ParmKind = None,
                 dst_kind: ParmKind = None):
        self.op_class = op_class
        self.data_type = data_type
        self.code = Opcode.__next_op_code
        self.src1_kind = src1_kind
        self.src2_kind = src2_kind
        self.dst_kind = dst_kind
        self.full_name = f"{op_class}_{data_type}_{self.parm_triplet()}"
        Opcode.__next_op_code += 1

    def parm_triplet(self):
        match (self.src1_kind, self.src2_kind, self.dst_kind):
            case (ParmKind.MEM, ParmKind.MEM, ParmKind.MEM):
                return "mmm"
            case (ParmKind.MEM, ParmKind.CONST, ParmKind.MEM):
                return "mcm"
            case (ParmKind.CONST, ParmKind.CONST, ParmKind.MEM):
                return "ccm"
            case (ParmKind.REG, ParmKind.REG, ParmKind.REG):
                return "rrr"
            case (ParmKind.REG, ParmKind.CONST, ParmKind.REG):
                return "rcr"
            case (None, None, ParmKind.MEM):
                return "nnm"
            case (None, None, ParmKind.REG):
                return "nnr"

    def reg_names(self):
        match (self.src1_kind, self.src2_kind, self.dst_kind):
            case (ParmKind.MEM, ParmKind.MEM, ParmKind.MEM):
                return "src1", "src2", "dst"
            case (ParmKind.MEM, ParmKind.CONST, ParmKind.MEM):
                return "src1", "src2_value", "dst"
            case (ParmKind.REG, ParmKind.REG, ParmKind.REG):
                return "src1", "src2", "dst"
            case (ParmKind.REG, ParmKind.CONST, ParmKind.REG):
                return "src1", "src2_value", "dst"
            case (None, None, ParmKind.MEM):
                return "", "", "dst"
            case (None, None, ParmKind.REG):
                return "", "", "dst"

    def local_values(self):
        match (self.src1_kind, self.src2_kind, self.dst_kind):
            case (ParmKind.MEM, ParmKind.CONST, ParmKind.MEM):
                return [(TYPE_MAP[self.data_type], "src2_value")]
            case (ParmKind.REG, ParmKind.CONST, ParmKind.REG):
                return [(TYPE_MAP[self.data_type], "src2_value")]
            case _:
                return []

    def read_binop(self):
        src1, src2, dst = self.reg_names()
        return f"read_binop(code, pc, {src1}, {src2}, {dst})"

    def read_unop(self):
        _, _, dst = self.reg_names()
        return f"read_unop(code, pc, {dst})"


src_dir = Path(__file__).parent
test_dir = src_dir.parent / "tests"
binops_file = src_dir / "binops.h"
unops_file = src_dir / "unops.h"
opcodes_file = src_dir / "opcodes.h"
binops_serdes_file = src_dir / "serdes.h"
dispatch_file = src_dir / "dispatch.h"
dispatch_test_file = test_dir / "test_dispatch.cpp"

PARM_MAP = {
    "mmm": "tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst",
    "mcm": "tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst",
    "rrr": "tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst",
    "rcr": "tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst",
    "nnm": "tungsten::machine &m, const register_name& dst",
    "nnr": "tungsten::machine &m, const register_name& dst",
}

LOAD_MAP = {
    "mmm": """\
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
""",
    "mcm": """\
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
""",
    "rrr": """\
    const T src1_value = m.read_register<T>(src1);
    const T src2_value = m.read_register<T>(src2);
""",
    "rcr": """\
   const T src1_value = m.read_register<T>(src1);
""",
    "ccm": """\
   T *dst_value = memory_address<T>(m, dst);
""",
    "nnm": """\
    T *dst_value = memory_address<T>(m, dst);
"""
}

EXEC_MAP = {
    "mmm": "*dst_value = *src1_value %s *src2_value;",
    "mcm": "*dst_value = *src1_value %s src2_value;",
    "rrr": "m.write_register<T>(dst, src1_value %s src2_value);",
    "rcr": "m.write_register<T>(dst, src1_value %s src2_value);",
}


def make_test_result(op):
    r = eval(f"8 {op} 2")
    if type(r) == bool:
        return 1 if r else 0
    return r


def generate_opcodes():
    opcode_defs = []
    for (name, op) in BINARY_INTEGER_OPS:
        for dt in INTEGER_TYPE_NAMES:
            for kind in (ParmKind.MEM, ParmKind.REG):
                opcode_defs.append(Opcode(op_class=name, data_type=dt,
                                          src1_kind=kind, src2_kind=kind, dst_kind=kind))
                opcode_defs.append(Opcode(op_class=name, data_type=dt,
                                          src1_kind=kind, src2_kind=ParmKind.CONST, dst_kind=kind))
                TEST_RESULTS[opcode_defs[-1].full_name] = make_test_result(op)
                TEST_RESULTS[opcode_defs[-2].full_name] = make_test_result(op)
    for (name, op) in BINARY_OPS + RELATIONAL_OPS:
        for dt in SCALAR_TYPE_NAMES:
            opcode_defs.append(Opcode(op_class=name, data_type=dt,
                                      src1_kind=ParmKind.MEM, src2_kind=ParmKind.MEM, dst_kind=ParmKind.MEM))
            opcode_defs.append(Opcode(op_class=name, data_type=dt,
                                      src1_kind=ParmKind.MEM, src2_kind=ParmKind.CONST, dst_kind=ParmKind.MEM))
            TEST_RESULTS[opcode_defs[-1].full_name] = make_test_result(op)
            TEST_RESULTS[opcode_defs[-2].full_name] = make_test_result(op)

    for dt in SCALAR_TYPE_NAMES:
        for kind in (ParmKind.MEM, ParmKind.REG):
            opcode_defs.append(Opcode(op_class="alloc", data_type=dt, dst_kind=kind))
            opcode_defs.append(Opcode(op_class="zero", data_type=dt, dst_kind=kind))
            opcode_defs.append(Opcode(op_class="inc", data_type=dt, dst_kind=kind))
            opcode_defs.append(Opcode(op_class="dec", data_type=dt, dst_kind=kind))
            TEST_RESULTS[opcode_defs[-1].full_name] = 9
            TEST_RESULTS[opcode_defs[-2].full_name] = 11
            TEST_RESULTS[opcode_defs[-3].full_name] = 0
    return opcode_defs


def write_test_header(out, headers):
    for h in headers:
        out.write(f'#include {h}\n')


def write_source_header(out, headers):
    if out.name.endswith("."):
        out.write("#pragma once\n")
    for h in headers:
        out.write(f'#include {h}\n')
    out.write('\nnamespace tungsten::vm {\n')


def write_source_footer(out):
    out.write("}\n")


def write_binary_operations():
    with binops_file.open("w") as out:
        write_source_header(out, ['"eval/vm.h"'])
        for (name, op) in BINARY_OPS + BINARY_INTEGER_OPS + RELATIONAL_OPS:
            for address_mode in ("mmm", "mcm", "rrr", "rcr"):
                params = PARM_MAP[address_mode]
                out.write(f"template <typename T>\nvoid {name}_{address_mode}({params}) {{\n")
                out.write(LOAD_MAP[address_mode])
                out.write(EXEC_MAP[address_mode] % op)
                out.write("}\n")
        write_source_footer(out)


def write_opcode_constants(opcode_defs):
    with opcodes_file.open("w") as opcodes:
        write_source_header(opcodes, ['<cstdint>'])
        opcodes.write("using opcode_type = std::uint16_t;\n")

        for opcode in opcode_defs:
            opcodes.write(f"const opcode_type {opcode.full_name} = {opcode.code};\n")
        write_source_footer(opcodes)


def write_dispatcher(opcode_defs):
    with dispatch_file.open("w") as dispatch:
        write_source_header(dispatch, ['"eval/opcodes.h"', '"eval/serdes.h"', '"eval/binops.h"', '"eval/unops.h"'])
        dispatch.write("void dispatch(tungsten::machine &m, const std::vector<uint8_t> &code, std::size_t &pc) {\n")
        dispatch.write("\tauto opcode = code[pc++];")
        dispatch.write("\tstd::uint8_t src1, src2, dst;")
        dispatch.write("\tswitch(opcode) {\n")
        for opcode in opcode_defs:
            cpp_type = TYPE_MAP[opcode.data_type]
            dispatch.write(f"\tcase {opcode.full_name}: {{")
            for (cpp_type, var_name) in opcode.local_values():
                dispatch.write(f"{cpp_type} {var_name};")

            match (opcode.src1_kind, opcode.src2_kind, opcode.dst_kind):
                case (ParmKind.MEM, ParmKind.CONST, ParmKind.MEM) | (ParmKind.REG, ParmKind.CONST, ParmKind.REG):
                    dispatch.write(f"{opcode.read_binop()};\n")
                    dispatch.write(
                        f"{opcode.op_class}_{opcode.parm_triplet()}<{cpp_type}>(m, src1, src2_value, dst);\n")
                case (ParmKind.MEM, ParmKind.MEM, ParmKind.MEM) | (ParmKind.REG, ParmKind.REG, ParmKind.REG):
                    dispatch.write(f"{opcode.read_binop()};\n")
                    dispatch.write(
                        f"{opcode.op_class}_{opcode.parm_triplet()}<{cpp_type}>(m, src1, src2, dst);\n")
                case (None, None, ParmKind.MEM) | (None, None, ParmKind.REG):
                    dispatch.write(f"{opcode.read_unop()};\n")
                    dispatch.write(
                        f"{opcode.op_class}_{opcode.parm_triplet()}<{cpp_type}>(m, dst);\n")

            dispatch.write("} break;\n")
        dispatch.write("\t}\n")
        dispatch.write("}\n}\n")

def write_dispatcher_tests(opcode_defs):
    with dispatch_test_file.open("w") as test:
        write_test_header(test, ['"eval/opcodes.h"', '"eval/serdes.h"', '"eval/binops.h"', '"eval/unops.h"',
                                 '<cstdint>', '<catch2/catch_test_macros.hpp>'])
        for opcode in opcode_defs:
            cpp_type = TYPE_MAP[opcode.data_type]
            test.write(f'TEST_CASE("{opcode.full_name}", "[dispatch]") {{\n')
            test.write("\ttungsten::machine m;\n")
            test.write("\ttungsten::vm::register_allocator ra;\n")
            test.write("\tstd::vector<std::uint8_t> c;\n")
            match (opcode.src1_kind, opcode.src2_kind, opcode.dst_kind):
                case (ParmKind.MEM, ParmKind.MEM, ParmKind.MEM):
                    test.write("\tauto src1 = ra.allocate();\n")
                    test.write("\tauto src2 = ra.allocate();\n")
                    test.write("\tauto dst = ra.allocate();\n")
                    test.write(f"\ttungsten::vm::alloc_nnr<{cpp_type}>(m,src1.name());\n")
                    test.write(f"\ttungsten::vm::alloc_nnr<{cpp_type}>(m,src2.name());\n")
                    test.write(f"\ttungsten::vm::alloc_nnr<{cpp_type}>(m,dst.name());\n")
                    test.write(f"\t*tungsten::memory_address<{cpp_type}>(m,src1.name()) = 8;\n")
                    test.write(f"\t*tungsten::memory_address<{cpp_type}>(m,src2.name()) = 2;\n")
                    test.write(
                        f"\ttungsten::vm::{opcode.op_class}_{opcode.parm_triplet()}<{cpp_type}>(m, src1.name(), src2.name(), dst.name());\n")
                    test.write(f"\t{cpp_type} result = *tungsten::memory_address<{cpp_type}>(m,dst.name());\n")
                    test_result = TEST_RESULTS.get(opcode.full_name)
                    if test_result:
                        test.write(f"\t{cpp_type} expected = {test_result};\n")
                        test.write("\tCHECK(result == expected);\n")

                case (ParmKind.REG, ParmKind.REG, ParmKind.REG):
                    test.write("\tauto src1 = ra.allocate();\n")
                    test.write("\tauto src2 = ra.allocate();\n")
                    test.write("\tauto dst = ra.allocate();\n")
                    test.write(f"\tm.write_register<{cpp_type}>(src1.name(), 8);\n")
                    test.write(f"\tm.write_register<{cpp_type}>(src2.name(), 2);\n")
                    test.write(
                        f"\ttungsten::vm::{opcode.op_class}_{opcode.parm_triplet()}<{cpp_type}>(m, src1.name(), src2.name(), dst.name());\n")
                    test.write(f"\t{cpp_type} result = m.read_register<{cpp_type}>(dst.name());\n")
                    test_result = TEST_RESULTS.get(opcode.full_name)
                    if test_result:
                        test.write(f"\t{cpp_type} expected = {test_result};\n")
                        test.write("\tCHECK(result == expected);\n")

                case (ParmKind.MEM, ParmKind.CONST, ParmKind.MEM):
                    test.write("\tauto src1 = ra.allocate();\n")
                    test.write("\tauto dst = ra.allocate();\n")
                    test.write(f"\ttungsten::vm::alloc_nnr<{cpp_type}>(m,src1.name());\n")
                    test.write(f"\ttungsten::vm::alloc_nnr<{cpp_type}>(m,dst.name());\n")
                    test.write(f"\t*tungsten::memory_address<{cpp_type}>(m,src1.name()) = 8;\n")
                    test.write(
                        f"\ttungsten::vm::{opcode.op_class}_{opcode.parm_triplet()}<{cpp_type}>(m, src1.name(), 2, dst.name());\n")
                    test.write(f"\t{cpp_type} result = *tungsten::memory_address<{cpp_type}>(m,dst.name());\n")
                    test_result = TEST_RESULTS.get(opcode.full_name)
                    if test_result:
                        test.write(f"\t{cpp_type} expected = {test_result};\n")
                        test.write("\tCHECK(result == expected);\n")
                case (ParmKind.REG, ParmKind.CONST, ParmKind.REG):
                    test.write("\tauto src1 = ra.allocate();\n")
                    test.write("\tauto dst = ra.allocate();\n")
                    test.write(f"\tm.write_register<{cpp_type}>(src1.name(), 8);\n")
                    test.write(f"\tm.write_register<{cpp_type}>(dst.name(), 2);\n")
                    test.write(
                        f"\ttungsten::vm::{opcode.op_class}_{opcode.parm_triplet()}<{cpp_type}>(m, src1.name(), 2, dst.name());\n")
                    test.write(f"\t{cpp_type} result = m.read_register<{cpp_type}>(dst.name());\n")
                    test_result = TEST_RESULTS.get(opcode.full_name)
                    if test_result:
                        test.write(f"\t{cpp_type} expected = {test_result};\n")
                        test.write("\tCHECK(result == expected);\n")
                case (None, None, ParmKind.MEM):
                    test.write("\tauto dst = ra.allocate();\n")
                    test.write(f"\ttungsten::vm::alloc_nnr<{cpp_type}>(m,dst.name());\n")
                    test.write(f"\t*tungsten::memory_address<{cpp_type}>(m,dst.name()) = 10;\n")
                    test.write(
                        f"\ttungsten::vm::{opcode.op_class}_{opcode.parm_triplet()}<{cpp_type}>(m, dst.name());\n")
                    test.write(f"\t{cpp_type} result = *tungsten::memory_address<{cpp_type}>(m,dst.name());\n")
                    test_result = TEST_RESULTS.get(opcode.full_name)
                    if test_result:
                        test.write(f"\t{cpp_type} expected = {test_result};\n")
                        test.write("\tCHECK(result == expected);\n")
                case (None, None, ParmKind.REG):
                    test.write("\tauto dst = ra.allocate();\n")
                    test.write(f"\ttungsten::vm::alloc_nnr<{cpp_type}>(m,dst.name());\n")
                    test.write(f"\tm.write_register<{cpp_type}>(dst.name(), 10);\n")
                    test.write(
                        f"\ttungsten::vm::{opcode.op_class}_{opcode.parm_triplet()}<{cpp_type}>(m, dst.name());\n")
                    test.write(f"\t{cpp_type} result = m.read_register<{cpp_type}>(dst.name());\n")
                    test_result = TEST_RESULTS.get(opcode.full_name)
                    if test_result:
                        test.write(f"\t{cpp_type} expected = {test_result};\n")
                        test.write("\tCHECK(result == expected);\n")

            test.write("}\n")


def main():
    opcode_defs = generate_opcodes()
    write_opcode_constants(opcode_defs)
    write_dispatcher(opcode_defs)
    write_dispatcher_tests(opcode_defs)
    write_binary_operations()


if __name__ == "__main__":
    main()
