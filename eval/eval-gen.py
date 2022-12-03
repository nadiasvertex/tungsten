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


PARM_KIND_MAP = {
    ParmKind.MEM: "m",
    ParmKind.REG: "r",
    ParmKind.CONST: "c",
    None: "n"
}


class ParmSlot(Enum):
    SRC1 = 0
    SRC2 = 1
    DST = 2
    VLEN = 3


PARM_SLOT_NAME_MAP = {
    ParmSlot.SRC1: "src1",
    ParmSlot.SRC2: "src2",
    ParmSlot.DST: "dst",
    ParmSlot.VLEN: "vlen",
}


class Slot:
    def __init__(self, slot: ParmSlot, kind: ParmKind = None):
        self.slot = slot
        self.kind = kind

    def name(self):
        return PARM_SLOT_NAME_MAP[self.slot]

    def present(self):
        return self.kind is not None

    def as_register_prototype(self) -> str:
        return f"const register_name& {self.name()}"

    def as_constant_prototype(self) -> str:
        return f"const T& {self.name()}_value"

    def as_value_name(self):
        return f"{self.name()}_value"

    def as_register_name(self):
        return self.name()

    def as_selector_name(self):
        match self.kind:
            case ParmKind.CONST:
                return self.as_value_name()
            case _:
                return self.as_register_name()

    def as_input_parameter_name(self):
        match self.kind:
            case ParmKind.CONST:
                return f"const T& {self.as_selector_name()}"
            case _:
                return f"const register_name& {self.as_selector_name()}"

    def read_register(self):
        return f"m.read_register<T>({self.name()})"

    def read_memory(self):
        return f"m.read_memory<T>(m, {self.name()})"

    def read(self):
        match self.kind:
            case ParmKind.CONST:
                return self.as_selector_name()
            case ParmKind.REG:
                return self.read_register()
            case ParmKind.MEM:
                return self.read_memory()

    def write_register(self, src):
        return f"m.write_register<T>({self.name()}, {src})"

    def write_memory(self, src):
        return f"m.write_memory<T>({self.name()}, {src})"

    def write(self, src):
        match self.kind:
            case ParmKind.CONST:
                raise ValueError("Cannot write to constant value.")
            case ParmKind.REG:
                return self.write_register(src)
            case ParmKind.MEM:
                return self.write_memory(src)

    def declare_value(self):
        return f"const T {self.name()}"

    def signature(self):
        return PARM_KIND_MAP[self.kind]


class OpcodeCat(Enum):
    UNOP = 0
    BINOP = 1
    VECOP = 2
    BRCOP = 3


class Opcode:
    __next_op_code = 0

    def __init__(self, op_class: str, data_type: str, src1_kind: ParmKind = None, src2_kind: ParmKind = None,
                 dst_kind: ParmKind = None, vlen_kind: ParmKind = None, op_template=None):
        self.op_class = op_class
        self.data_type = data_type
        self.code = Opcode.__next_op_code
        self.src1 = Slot(ParmSlot.SRC1, src1_kind)
        self.src2 = Slot(ParmSlot.SRC2, src2_kind)
        self.dst = Slot(ParmSlot.DST, dst_kind)
        self.vlen = Slot(ParmSlot.VLEN, vlen_kind)
        self.full_name = f"{op_class}_{data_type}_{self.signature()}"
        self.op_template = op_template
        Opcode.__next_op_code += 1

    def category(self) -> OpcodeCat:
        match (self.src1.present(), self.src2.present(), self.dst.present(), self.vlen.present()):
            case (True, True, True, True):
                return OpcodeCat.VECOP
            case (True, True, True, False):
                return OpcodeCat.BINOP
            case (True, False, True, False):
                return OpcodeCat.UNOP
            case (True, True, False, False):
                return OpcodeCat.BRCOP

    def signature(self) -> str:
        s1 = self.src1.signature()
        s2 = self.src2.signature()
        d = self.dst.signature()
        vl = self.vlen.signature()
        return f"{s1}{s2}{d}{vl}"

    def read_vecop(self) -> str:
        parms = ", ".join([parm.as_selector_name() for parm in (self.src1, self.src2, self.dst, self.vlen)])
        return f"read_binop(code, pc, {parms})"

    def read_binop(self) -> str:
        parms = ", ".join([parm.as_selector_name() for parm in (self.src1, self.src2, self.dst)])
        return f"read_binop(code, pc, {parms})"

    def read_brcop(self) -> str:
        parms = ", ".join([parm.as_selector_name() for parm in (self.src1, self.src2)])
        return f"read_brcnop(code, pc, {parms})"

    def read_unop(self) -> str:
        return f"read_unop(code, pc, {self.dst.as_selector_name()})"

    def valid_params(self):
        return [parm for parm in (self.src1, self.src2, self.dst, self.vlen) if parm.present()]

    def prototype(self) -> str:
        params = ", ".join(["tungsten::machine &m", ] + [parm.as_input_parameter_name() for parm in
                                                         self.valid_params()])
        return f"template <typename T>\nvoid {self.op_class}_{self.signature()}({params})"

    def exec(self) -> str:
        src = self.op_template.format(
            src1=self.src1.read() if self.src1.present() else None,
            src2=self.src2.read() if self.src2.present() else None,
            vlen=self.vlen.read() if self.vlen.present() else None,
        )
        return self.dst.write(src)


src_dir = Path(__file__).parent
test_dir = src_dir.parent / "tests"
binops_file = src_dir / "binops.h"
unops_file = src_dir / "unops.h"
opcodes_file = src_dir / "opcodes.h"
binops_serdes_file = src_dir / "serdes.h"
dispatch_file = src_dir / "dispatch.h"
dispatch_test_file = test_dir / "test_dispatch.cpp"


def make_test_result(op):
    r = eval(f"8 {op} 2")
    if type(r) == bool:
        return 1 if r else 0
    return r


def generate_opcodes():
    opcode_defs = []
    for (name, op) in BINARY_INTEGER_OPS:
        for dt in INTEGER_TYPE_NAMES:
            for src1 in (ParmKind.REG, ParmKind.CONST):
                for src2 in (ParmKind.REG, ParmKind.CONST):
                    # Don't generate instructions for computing constant values,
                    # since that can be done at compile time instead of runtime.
                    if src1 == ParmKind.CONST and src2 == ParmKind.CONST:
                        continue

                    for dst in (ParmKind.MEM, ParmKind.REG):
                        opcode_defs.append(Opcode(op_class=name, data_type=dt,
                                                  src1_kind=src1, src2_kind=src2, dst_kind=dst,
                                                  op_template=f"({{src1}} {op} {{src2}})"))
                        TEST_RESULTS[opcode_defs[-1].full_name] = make_test_result(op)

    for (name, op) in BINARY_OPS + RELATIONAL_OPS:
        for dt in SCALAR_TYPE_NAMES:
            for src1 in (ParmKind.REG, ParmKind.CONST):
                for src2 in (ParmKind.REG, ParmKind.CONST):
                    # Don't generate instructions for computing constant values,
                    # since that can be done at compile time instead of runtime.
                    if src1 == ParmKind.CONST and src2 == ParmKind.CONST:
                        continue
                    for dst in (ParmKind.MEM, ParmKind.REG):
                        opcode_defs.append(Opcode(op_class=name, data_type=dt,
                                                  src1_kind=src1, src2_kind=src2, dst_kind=dst,
                                                  op_template=f"({{src1}} {op} {{src2}})"))
                        TEST_RESULTS[opcode_defs[-1].full_name] = make_test_result(op)

    for dt in SCALAR_TYPE_NAMES:
        for kind in (ParmKind.MEM, ParmKind.REG):
            opcode_defs.append(Opcode(op_class="alloc", data_type=dt, dst_kind=kind))
            opcode_defs.append(Opcode(op_class="zero", data_type=dt, dst_kind=kind))
            opcode_defs.append(Opcode(op_class="inc", data_type=dt, dst_kind=kind))
            opcode_defs.append(Opcode(op_class="dec", data_type=dt, dst_kind=kind))
            opcode_defs.append(Opcode(op_class="not", data_type=dt, dst_kind=kind))
            TEST_RESULTS[opcode_defs[-1].full_name] = 0
            TEST_RESULTS[opcode_defs[-2].full_name] = 9
            TEST_RESULTS[opcode_defs[-3].full_name] = 11
            TEST_RESULTS[opcode_defs[-4].full_name] = 0

    for dt in INTEGER_TYPE_NAMES:
        for src1 in (ParmKind.MEM, ParmKind.REG, ParmKind.CONST):
            opcode_defs.append(Opcode(op_class="br", data_type=dt, src1_kind=src1))
            for src2 in (ParmKind.MEM, ParmKind.REG):
                opcode_defs.append(Opcode(op_class="brz", data_type=dt, src1_kind=src1, src2_kind=src2))
                opcode_defs.append(Opcode(op_class="brn", data_type=dt, src1_kind=src1, src2_kind=src2))

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


def write_binary_operations(opcode_defs):
    with binops_file.open("w") as out:
        write_source_header(out, ['"eval/vm.h"'])
        processed_classes = set()
        for opcode in opcode_defs:
            if opcode.category() != OpcodeCat.BINOP or opcode.op_class in processed_classes:
                continue

            processed_classes.add(opcode.op_class)
            proto = opcode.prototype()
            op = opcode.exec()
            out.write(f"{proto} {{\n\t{op};\n}}\n")
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
            #for (cpp_type, var_name) in opcode.local_values():
            #    dispatch.write(f"{cpp_type} {var_name};")

            # match (opcode.src1_kind, opcode.src2_kind, opcode.dst_kind):
            #     case (ParmKind.MEM, ParmKind.CONST, ParmKind.MEM) | (ParmKind.REG, ParmKind.CONST, ParmKind.REG):
            #         dispatch.write(f"{opcode.read_binop()};\n")
            #         dispatch.write(
            #             f"{opcode.op_class}_{opcode.signature()}<{cpp_type}>(m, src1, src2_value, dst);\n")
            #     case (ParmKind.MEM, ParmKind.MEM, ParmKind.MEM) | (ParmKind.REG, ParmKind.REG, ParmKind.REG):
            #         dispatch.write(f"{opcode.read_binop()};\n")
            #         dispatch.write(
            #             f"{opcode.op_class}_{opcode.signature()}<{cpp_type}>(m, src1, src2, dst);\n")
            #     case (None, None, ParmKind.MEM) | (None, None, ParmKind.REG):
            #         dispatch.write(f"{opcode.read_unop()};\n")
            #         dispatch.write(
            #             f"{opcode.op_class}_{opcode.signature()}<{cpp_type}>(m, dst);\n")

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
            match (opcode.src1.kind, opcode.src2.kind, opcode.dst.kind):
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
                        f"\ttungsten::vm::{opcode.op_class}_{opcode.signature()}<{cpp_type}>(m, src1.name(), src2.name(), dst.name());\n")
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
                        f"\ttungsten::vm::{opcode.op_class}_{opcode.signature()}<{cpp_type}>(m, src1.name(), src2.name(), dst.name());\n")
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
                        f"\ttungsten::vm::{opcode.op_class}_{opcode.signature()}<{cpp_type}>(m, src1.name(), 2, dst.name());\n")
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
                        f"\ttungsten::vm::{opcode.op_class}_{opcode.signature()}<{cpp_type}>(m, src1.name(), 2, dst.name());\n")
                    test.write(f"\t{cpp_type} result = m.read_register<{cpp_type}>(dst.name());\n")
                    test_result = TEST_RESULTS.get(opcode.full_name)
                    if test_result:
                        test.write(f"\t{cpp_type} expected = {test_result};\n")
                        test.write("\tCHECK(result == expected);\n")
                case (None, None, ParmKind.MEM):
                    test.write("\tauto dst = ra.allocate();\n")
                    if opcode.op_class == "alloc":
                        test.write(f"\ttungsten::vm::alloc_nnr<std::size_t>(m,dst.name());\n")
                    else:
                        test.write(f"\ttungsten::vm::alloc_nnr<{cpp_type}>(m,dst.name());\n")
                    test.write(f"\t*tungsten::memory_address<{cpp_type}>(m,dst.name()) = 10;\n")
                    test.write(
                        f"\ttungsten::vm::{opcode.op_class}_{opcode.signature()}<{cpp_type}>(m, dst.name());\n")
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
                        f"\ttungsten::vm::{opcode.op_class}_{opcode.signature()}<{cpp_type}>(m, dst.name());\n")
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
    write_binary_operations(opcode_defs)


if __name__ == "__main__":
    main()
