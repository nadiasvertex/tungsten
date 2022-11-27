from enum import Enum
from pathlib import Path

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
    REG = 0
    CONST = 1


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
            case (ParmKind.REG, ParmKind.REG, ParmKind.REG):
                return "rrr"
            case (ParmKind.REG, ParmKind.CONST, ParmKind.REG):
                return "rcr"
            case (ParmKind.CONST, ParmKind.CONST, ParmKind.REG):
                return "ccr"
            case (None, None, ParmKind.REG):
                return "nnr"

    def reg_names(self):
        match (self.src1_kind, self.src2_kind, self.dst_kind):
            case (ParmKind.REG, ParmKind.REG, ParmKind.REG):
                return "src1", "src2", "dst"
            case (ParmKind.REG, ParmKind.CONST, ParmKind.REG):
                return "src1", "src2_value", "dst"
            case (None, None, ParmKind.REG):
                return "", "", "dst"

    def local_values(self):
        match (self.src1_kind, self.src2_kind, self.dst_kind):
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

LOAD_MAP = {
    "rrr": """\
    const T *src1_value = reinterpret_cast<const T*>(m.memory.data() + src1);
    const T *src2_value = reinterpret_cast<const T*>(m.memory.data() + src2);
    T *dst_value = reinterpret_cast<T*>(m.memory.data() + dst);
""",
    "rcr": """\
   const T *src1_value = reinterpret_cast<const T*>(m.memory.data() + src1);
   T *dst_value = reinterpret_cast<T*>(m.memory.data() + dst);
""",
    "ccr": """\
   T *dst_value = reinterpret_cast<T*>(m.memory.data() + dst);
""",
    "nnr": """\
    T *dst_value = reinterpret_cast<T*>(m.memory.data() + dst);
"""
}

EXEC_MAP = {
    "rrr": "*dst_value = *src1_value %s *src2_value;",
    "rcr": "*dst_value = *src1_value %s src2_value;"
}


def make_test_result(op):
    r = eval(f"8 {op} 2")
    if type(r) == bool:
        return 1
    return r


def generate_opcodes():
    opcode_defs = []
    for (name, op) in BINARY_INTEGER_OPS:
        for dt in ("u8", "s8", "u16", "s16", "u32", "s32", "u64", "s64"):
            opcode_defs.append(Opcode(op_class=name, data_type=dt,
                                      src1_kind=ParmKind.REG, src2_kind=ParmKind.REG, dst_kind=ParmKind.REG))
            opcode_defs.append(Opcode(op_class=name, data_type=dt,
                                      src1_kind=ParmKind.REG, src2_kind=ParmKind.CONST, dst_kind=ParmKind.REG))
            TEST_RESULTS[opcode_defs[-1].full_name] = make_test_result(op)
            TEST_RESULTS[opcode_defs[-2].full_name] = make_test_result(op)
    for (name, op) in BINARY_OPS + RELATIONAL_OPS:
        for dt in ("u8", "s8", "u16", "s16", "u32", "s32", "u64", "s64", "f32", "f64"):
            opcode_defs.append(Opcode(op_class=name, data_type=dt,
                                      src1_kind=ParmKind.REG, src2_kind=ParmKind.REG, dst_kind=ParmKind.REG))
            opcode_defs.append(Opcode(op_class=name, data_type=dt,
                                      src1_kind=ParmKind.REG, src2_kind=ParmKind.CONST, dst_kind=ParmKind.REG))
            TEST_RESULTS[opcode_defs[-1].full_name] = make_test_result(op)
            TEST_RESULTS[opcode_defs[-2].full_name] = make_test_result(op)

    for dt in ("u8", "s8", "u16", "s16", "u32", "s32", "u64", "s64", "f32", "f64"):
        opcode_defs.append(Opcode(op_class="zero", data_type=dt, dst_kind=ParmKind.REG))
        opcode_defs.append(Opcode(op_class="inc", data_type=dt, dst_kind=ParmKind.REG))
        opcode_defs.append(Opcode(op_class="dec", data_type=dt, dst_kind=ParmKind.REG))
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
        for (name, op) in BINARY_OPS + BINARY_INTEGER_OPS:
            out.write(
                f"template <typename T>\nvoid {name}_rrr(tungsten::machine &m, std::size_t src1, std::size_t src2, std::size_t dst) {{\n")
            out.write(LOAD_MAP["rrr"])
            out.write(EXEC_MAP["rrr"] % op)
            out.write("}\n")
            out.write(
                f"template <typename T>\nvoid {name}_rcr(tungsten::machine &m, std::size_t src1, T src2_value, std::size_t dst) {{\n")
            out.write(LOAD_MAP["rcr"])
            out.write(EXEC_MAP["rcr"] % op)
            out.write("}\n")

        for (name, op) in RELATIONAL_OPS:
            out.write(
                f"template <typename T>\nvoid {name}_rrr(tungsten::machine &m, std::size_t src1, std::size_t src2, std::size_t dst) {{\n")
            out.write(LOAD_MAP["rrr"])
            out.write(EXEC_MAP["rrr"] % op)
            out.write("}\n")
            out.write(
                f"template <typename T>\nvoid {name}_rcr(tungsten::machine &m, std::size_t src1, T src2_value, std::size_t dst) {{\n")
            out.write(LOAD_MAP["rcr"])
            out.write(EXEC_MAP["rcr"] % op)
            out.write("}\n")
        write_source_footer(out)


def write_unnary_operations():
    with unops_file.open("w") as out:
        write_source_header(out, ['"eval/vm.h"'])
        out.write(
            f"template <typename T>\nvoid zero_nnr(tungsten::machine &m, std::size_t dst) {{\n")
        out.write(LOAD_MAP["nnr"])
        out.write("*dst_value = 0;")
        out.write("}\n")

        out.write(
            f"template <typename T>\nvoid inc_nnr(tungsten::machine &m, std::size_t dst) {{\n")
        out.write(LOAD_MAP["nnr"])
        out.write("(*dst_value)++;")
        out.write("}\n")

        out.write(
            f"template <typename T>\nvoid dec_nnr(tungsten::machine &m, std::size_t dst) {{\n")
        out.write(LOAD_MAP["nnr"])
        out.write("(*dst_value)--;")
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
                case (ParmKind.REG, ParmKind.CONST, ParmKind.REG):
                    dispatch.write(f"{opcode.read_binop()};\n")
                    dispatch.write(
                        f"{opcode.op_class}_{opcode.parm_triplet()}<{cpp_type}>(m, m.registers[src1], src2_value, m.registers[dst]);\n")
                case (ParmKind.REG, ParmKind.REG, ParmKind.REG):
                    dispatch.write(f"{opcode.read_binop()};\n")
                    dispatch.write(
                        f"{opcode.op_class}_{opcode.parm_triplet()}<{cpp_type}>(m, m.registers[src1], m.registers[src2], m.registers[dst]);\n")
                case (None, None, ParmKind.REG):
                    dispatch.write(f"{opcode.read_unop()};\n")
                    dispatch.write(
                        f"{opcode.op_class}_{opcode.parm_triplet()}<{cpp_type}>(m, m.registers[dst]);\n")

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
            test.write("\tstd::vector<std::uint8_t> c;\n")
            match (opcode.src1_kind, opcode.src2_kind, opcode.dst_kind):
                case (ParmKind.REG, ParmKind.REG, ParmKind.REG):
                    test.write(f"\tauto src1 = m.allocate<{cpp_type}>();\n")
                    test.write(f"\tauto src2 = m.allocate<{cpp_type}>();\n")
                    test.write(f"\tauto dst = m.allocate<{cpp_type}>();\n")
                    test.write(f"\t{cpp_type} result;\n")
                    test.write(f"\tm.write<{cpp_type}>(src1, 8);\n")
                    test.write(f"\tm.write<{cpp_type}>(src2, 2);\n")
                    test.write(
                        f"\ttungsten::vm::{opcode.op_class}_{opcode.parm_triplet()}<{cpp_type}>(m, src1, src2, dst);\n")
                    test.write(f"\tm.read<{cpp_type}>(dst, result);\n")
                    test_result = TEST_RESULTS.get(opcode.full_name)
                    if test_result:
                        test.write(f"\t{cpp_type} expected = {test_result};\n")
                        test.write("\tCHECK(result == expected);\n")
                case (ParmKind.REG, ParmKind.CONST, ParmKind.REG):
                    test.write(f"\tauto src1 = m.allocate<{cpp_type}>();\n")
                    test.write(f"\t{cpp_type} src2 = 2;\n")
                    test.write(f"\tauto dst = m.allocate<{cpp_type}>();\n")
                    test.write(f"\t{cpp_type} result;\n")
                    test.write(f"\tm.write<{cpp_type}>(src1, 8);\n")
                    test.write(
                        f"\ttungsten::vm::{opcode.op_class}_{opcode.parm_triplet()}<{cpp_type}>(m, src1, src2, dst);\n")
                    test.write(f"\tm.read<{cpp_type}>(dst, result);\n")
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
    write_unnary_operations()


if __name__ == "__main__":
    main()
