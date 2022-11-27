#include "eval/opcodes.h"
#include "eval/serdes.h"
#include "eval/binops.h"
#include "eval/unops.h"
#include <cstdint>
#include <catch2/catch_test_macros.hpp>
TEST_CASE("shl_u8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	auto src2 = m.allocate<std::uint8_t>();
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	m.write<std::uint8_t>(src2, 2);
	tungsten::vm::shl_rrr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	std::uint8_t src2 = 2;
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	tungsten::vm::shl_rcr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	auto src2 = m.allocate<std::int8_t>();
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	m.write<std::int8_t>(src2, 2);
	tungsten::vm::shl_rrr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	std::int8_t src2 = 2;
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	tungsten::vm::shl_rcr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	auto src2 = m.allocate<std::uint16_t>();
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	m.write<std::uint16_t>(src2, 2);
	tungsten::vm::shl_rrr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	std::uint16_t src2 = 2;
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	tungsten::vm::shl_rcr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	auto src2 = m.allocate<std::int16_t>();
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	m.write<std::int16_t>(src2, 2);
	tungsten::vm::shl_rrr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	std::int16_t src2 = 2;
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	tungsten::vm::shl_rcr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	auto src2 = m.allocate<std::uint32_t>();
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	m.write<std::uint32_t>(src2, 2);
	tungsten::vm::shl_rrr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	std::uint32_t src2 = 2;
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	tungsten::vm::shl_rcr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	auto src2 = m.allocate<std::int32_t>();
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	m.write<std::int32_t>(src2, 2);
	tungsten::vm::shl_rrr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	std::int32_t src2 = 2;
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	tungsten::vm::shl_rcr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	auto src2 = m.allocate<std::uint64_t>();
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	m.write<std::uint64_t>(src2, 2);
	tungsten::vm::shl_rrr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	std::uint64_t src2 = 2;
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	tungsten::vm::shl_rcr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	auto src2 = m.allocate<std::int64_t>();
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	m.write<std::int64_t>(src2, 2);
	tungsten::vm::shl_rrr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	std::int64_t src2 = 2;
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	tungsten::vm::shl_rcr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shr_u8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	auto src2 = m.allocate<std::uint8_t>();
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	m.write<std::uint8_t>(src2, 2);
	tungsten::vm::shr_rrr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	std::uint8_t src2 = 2;
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	tungsten::vm::shr_rcr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	auto src2 = m.allocate<std::int8_t>();
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	m.write<std::int8_t>(src2, 2);
	tungsten::vm::shr_rrr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	std::int8_t src2 = 2;
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	tungsten::vm::shr_rcr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	auto src2 = m.allocate<std::uint16_t>();
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	m.write<std::uint16_t>(src2, 2);
	tungsten::vm::shr_rrr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	std::uint16_t src2 = 2;
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	tungsten::vm::shr_rcr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	auto src2 = m.allocate<std::int16_t>();
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	m.write<std::int16_t>(src2, 2);
	tungsten::vm::shr_rrr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	std::int16_t src2 = 2;
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	tungsten::vm::shr_rcr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	auto src2 = m.allocate<std::uint32_t>();
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	m.write<std::uint32_t>(src2, 2);
	tungsten::vm::shr_rrr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	std::uint32_t src2 = 2;
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	tungsten::vm::shr_rcr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	auto src2 = m.allocate<std::int32_t>();
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	m.write<std::int32_t>(src2, 2);
	tungsten::vm::shr_rrr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	std::int32_t src2 = 2;
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	tungsten::vm::shr_rcr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	auto src2 = m.allocate<std::uint64_t>();
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	m.write<std::uint64_t>(src2, 2);
	tungsten::vm::shr_rrr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	std::uint64_t src2 = 2;
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	tungsten::vm::shr_rcr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	auto src2 = m.allocate<std::int64_t>();
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	m.write<std::int64_t>(src2, 2);
	tungsten::vm::shr_rrr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	std::int64_t src2 = 2;
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	tungsten::vm::shr_rcr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("binary_and_u8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	auto src2 = m.allocate<std::uint8_t>();
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	m.write<std::uint8_t>(src2, 2);
	tungsten::vm::binary_and_rrr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
}
TEST_CASE("binary_and_u8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	std::uint8_t src2 = 2;
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	tungsten::vm::binary_and_rcr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
}
TEST_CASE("binary_and_s8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	auto src2 = m.allocate<std::int8_t>();
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	m.write<std::int8_t>(src2, 2);
	tungsten::vm::binary_and_rrr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
}
TEST_CASE("binary_and_s8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	std::int8_t src2 = 2;
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	tungsten::vm::binary_and_rcr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
}
TEST_CASE("binary_and_u16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	auto src2 = m.allocate<std::uint16_t>();
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	m.write<std::uint16_t>(src2, 2);
	tungsten::vm::binary_and_rrr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
}
TEST_CASE("binary_and_u16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	std::uint16_t src2 = 2;
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	tungsten::vm::binary_and_rcr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
}
TEST_CASE("binary_and_s16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	auto src2 = m.allocate<std::int16_t>();
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	m.write<std::int16_t>(src2, 2);
	tungsten::vm::binary_and_rrr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
}
TEST_CASE("binary_and_s16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	std::int16_t src2 = 2;
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	tungsten::vm::binary_and_rcr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
}
TEST_CASE("binary_and_u32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	auto src2 = m.allocate<std::uint32_t>();
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	m.write<std::uint32_t>(src2, 2);
	tungsten::vm::binary_and_rrr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
}
TEST_CASE("binary_and_u32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	std::uint32_t src2 = 2;
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	tungsten::vm::binary_and_rcr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
}
TEST_CASE("binary_and_s32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	auto src2 = m.allocate<std::int32_t>();
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	m.write<std::int32_t>(src2, 2);
	tungsten::vm::binary_and_rrr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
}
TEST_CASE("binary_and_s32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	std::int32_t src2 = 2;
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	tungsten::vm::binary_and_rcr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
}
TEST_CASE("binary_and_u64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	auto src2 = m.allocate<std::uint64_t>();
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	m.write<std::uint64_t>(src2, 2);
	tungsten::vm::binary_and_rrr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
}
TEST_CASE("binary_and_u64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	std::uint64_t src2 = 2;
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	tungsten::vm::binary_and_rcr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
}
TEST_CASE("binary_and_s64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	auto src2 = m.allocate<std::int64_t>();
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	m.write<std::int64_t>(src2, 2);
	tungsten::vm::binary_and_rrr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
}
TEST_CASE("binary_and_s64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	std::int64_t src2 = 2;
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	tungsten::vm::binary_and_rcr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
}
TEST_CASE("binary_or_u8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	auto src2 = m.allocate<std::uint8_t>();
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	m.write<std::uint8_t>(src2, 2);
	tungsten::vm::binary_or_rrr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	std::uint8_t src2 = 2;
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	tungsten::vm::binary_or_rcr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	auto src2 = m.allocate<std::int8_t>();
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	m.write<std::int8_t>(src2, 2);
	tungsten::vm::binary_or_rrr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	std::int8_t src2 = 2;
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	tungsten::vm::binary_or_rcr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	auto src2 = m.allocate<std::uint16_t>();
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	m.write<std::uint16_t>(src2, 2);
	tungsten::vm::binary_or_rrr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	std::uint16_t src2 = 2;
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	tungsten::vm::binary_or_rcr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	auto src2 = m.allocate<std::int16_t>();
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	m.write<std::int16_t>(src2, 2);
	tungsten::vm::binary_or_rrr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	std::int16_t src2 = 2;
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	tungsten::vm::binary_or_rcr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	auto src2 = m.allocate<std::uint32_t>();
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	m.write<std::uint32_t>(src2, 2);
	tungsten::vm::binary_or_rrr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	std::uint32_t src2 = 2;
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	tungsten::vm::binary_or_rcr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	auto src2 = m.allocate<std::int32_t>();
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	m.write<std::int32_t>(src2, 2);
	tungsten::vm::binary_or_rrr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	std::int32_t src2 = 2;
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	tungsten::vm::binary_or_rcr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	auto src2 = m.allocate<std::uint64_t>();
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	m.write<std::uint64_t>(src2, 2);
	tungsten::vm::binary_or_rrr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	std::uint64_t src2 = 2;
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	tungsten::vm::binary_or_rcr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	auto src2 = m.allocate<std::int64_t>();
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	m.write<std::int64_t>(src2, 2);
	tungsten::vm::binary_or_rrr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	std::int64_t src2 = 2;
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	tungsten::vm::binary_or_rcr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	auto src2 = m.allocate<std::uint8_t>();
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	m.write<std::uint8_t>(src2, 2);
	tungsten::vm::binary_xor_rrr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	std::uint8_t src2 = 2;
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	tungsten::vm::binary_xor_rcr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	auto src2 = m.allocate<std::int8_t>();
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	m.write<std::int8_t>(src2, 2);
	tungsten::vm::binary_xor_rrr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	std::int8_t src2 = 2;
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	tungsten::vm::binary_xor_rcr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	auto src2 = m.allocate<std::uint16_t>();
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	m.write<std::uint16_t>(src2, 2);
	tungsten::vm::binary_xor_rrr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	std::uint16_t src2 = 2;
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	tungsten::vm::binary_xor_rcr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	auto src2 = m.allocate<std::int16_t>();
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	m.write<std::int16_t>(src2, 2);
	tungsten::vm::binary_xor_rrr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	std::int16_t src2 = 2;
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	tungsten::vm::binary_xor_rcr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	auto src2 = m.allocate<std::uint32_t>();
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	m.write<std::uint32_t>(src2, 2);
	tungsten::vm::binary_xor_rrr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	std::uint32_t src2 = 2;
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	tungsten::vm::binary_xor_rcr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	auto src2 = m.allocate<std::int32_t>();
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	m.write<std::int32_t>(src2, 2);
	tungsten::vm::binary_xor_rrr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	std::int32_t src2 = 2;
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	tungsten::vm::binary_xor_rcr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	auto src2 = m.allocate<std::uint64_t>();
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	m.write<std::uint64_t>(src2, 2);
	tungsten::vm::binary_xor_rrr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	std::uint64_t src2 = 2;
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	tungsten::vm::binary_xor_rcr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	auto src2 = m.allocate<std::int64_t>();
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	m.write<std::int64_t>(src2, 2);
	tungsten::vm::binary_xor_rrr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	std::int64_t src2 = 2;
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	tungsten::vm::binary_xor_rcr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	auto src2 = m.allocate<std::uint8_t>();
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	m.write<std::uint8_t>(src2, 2);
	tungsten::vm::add_rrr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	std::uint8_t src2 = 2;
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	tungsten::vm::add_rcr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	auto src2 = m.allocate<std::int8_t>();
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	m.write<std::int8_t>(src2, 2);
	tungsten::vm::add_rrr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	std::int8_t src2 = 2;
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	tungsten::vm::add_rcr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	auto src2 = m.allocate<std::uint16_t>();
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	m.write<std::uint16_t>(src2, 2);
	tungsten::vm::add_rrr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	std::uint16_t src2 = 2;
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	tungsten::vm::add_rcr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	auto src2 = m.allocate<std::int16_t>();
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	m.write<std::int16_t>(src2, 2);
	tungsten::vm::add_rrr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	std::int16_t src2 = 2;
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	tungsten::vm::add_rcr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	auto src2 = m.allocate<std::uint32_t>();
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	m.write<std::uint32_t>(src2, 2);
	tungsten::vm::add_rrr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	std::uint32_t src2 = 2;
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	tungsten::vm::add_rcr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	auto src2 = m.allocate<std::int32_t>();
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	m.write<std::int32_t>(src2, 2);
	tungsten::vm::add_rrr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	std::int32_t src2 = 2;
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	tungsten::vm::add_rcr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	auto src2 = m.allocate<std::uint64_t>();
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	m.write<std::uint64_t>(src2, 2);
	tungsten::vm::add_rrr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	std::uint64_t src2 = 2;
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	tungsten::vm::add_rcr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	auto src2 = m.allocate<std::int64_t>();
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	m.write<std::int64_t>(src2, 2);
	tungsten::vm::add_rrr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	std::int64_t src2 = 2;
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	tungsten::vm::add_rcr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_f32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<float>();
	auto src2 = m.allocate<float>();
	auto dst = m.allocate<float>();
	float result;
	m.write<float>(src1, 8);
	m.write<float>(src2, 2);
	tungsten::vm::add_rrr<float>(m, src1, src2, dst);
	m.read<float>(dst, result);
	float expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_f32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<float>();
	float src2 = 2;
	auto dst = m.allocate<float>();
	float result;
	m.write<float>(src1, 8);
	tungsten::vm::add_rcr<float>(m, src1, src2, dst);
	m.read<float>(dst, result);
	float expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_f64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<double>();
	auto src2 = m.allocate<double>();
	auto dst = m.allocate<double>();
	double result;
	m.write<double>(src1, 8);
	m.write<double>(src2, 2);
	tungsten::vm::add_rrr<double>(m, src1, src2, dst);
	m.read<double>(dst, result);
	double expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_f64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<double>();
	double src2 = 2;
	auto dst = m.allocate<double>();
	double result;
	m.write<double>(src1, 8);
	tungsten::vm::add_rcr<double>(m, src1, src2, dst);
	m.read<double>(dst, result);
	double expected = 10;
	CHECK(result == expected);
}
TEST_CASE("sub_u8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	auto src2 = m.allocate<std::uint8_t>();
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	m.write<std::uint8_t>(src2, 2);
	tungsten::vm::sub_rrr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_u8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	std::uint8_t src2 = 2;
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	tungsten::vm::sub_rcr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	auto src2 = m.allocate<std::int8_t>();
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	m.write<std::int8_t>(src2, 2);
	tungsten::vm::sub_rrr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	std::int8_t src2 = 2;
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	tungsten::vm::sub_rcr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_u16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	auto src2 = m.allocate<std::uint16_t>();
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	m.write<std::uint16_t>(src2, 2);
	tungsten::vm::sub_rrr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_u16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	std::uint16_t src2 = 2;
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	tungsten::vm::sub_rcr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	auto src2 = m.allocate<std::int16_t>();
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	m.write<std::int16_t>(src2, 2);
	tungsten::vm::sub_rrr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	std::int16_t src2 = 2;
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	tungsten::vm::sub_rcr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_u32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	auto src2 = m.allocate<std::uint32_t>();
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	m.write<std::uint32_t>(src2, 2);
	tungsten::vm::sub_rrr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_u32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	std::uint32_t src2 = 2;
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	tungsten::vm::sub_rcr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	auto src2 = m.allocate<std::int32_t>();
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	m.write<std::int32_t>(src2, 2);
	tungsten::vm::sub_rrr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	std::int32_t src2 = 2;
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	tungsten::vm::sub_rcr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_u64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	auto src2 = m.allocate<std::uint64_t>();
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	m.write<std::uint64_t>(src2, 2);
	tungsten::vm::sub_rrr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_u64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	std::uint64_t src2 = 2;
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	tungsten::vm::sub_rcr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	auto src2 = m.allocate<std::int64_t>();
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	m.write<std::int64_t>(src2, 2);
	tungsten::vm::sub_rrr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	std::int64_t src2 = 2;
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	tungsten::vm::sub_rcr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_f32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<float>();
	auto src2 = m.allocate<float>();
	auto dst = m.allocate<float>();
	float result;
	m.write<float>(src1, 8);
	m.write<float>(src2, 2);
	tungsten::vm::sub_rrr<float>(m, src1, src2, dst);
	m.read<float>(dst, result);
	float expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_f32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<float>();
	float src2 = 2;
	auto dst = m.allocate<float>();
	float result;
	m.write<float>(src1, 8);
	tungsten::vm::sub_rcr<float>(m, src1, src2, dst);
	m.read<float>(dst, result);
	float expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_f64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<double>();
	auto src2 = m.allocate<double>();
	auto dst = m.allocate<double>();
	double result;
	m.write<double>(src1, 8);
	m.write<double>(src2, 2);
	tungsten::vm::sub_rrr<double>(m, src1, src2, dst);
	m.read<double>(dst, result);
	double expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_f64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<double>();
	double src2 = 2;
	auto dst = m.allocate<double>();
	double result;
	m.write<double>(src1, 8);
	tungsten::vm::sub_rcr<double>(m, src1, src2, dst);
	m.read<double>(dst, result);
	double expected = 6;
	CHECK(result == expected);
}
TEST_CASE("mul_u8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	auto src2 = m.allocate<std::uint8_t>();
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	m.write<std::uint8_t>(src2, 2);
	tungsten::vm::mul_rrr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_u8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	std::uint8_t src2 = 2;
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	tungsten::vm::mul_rcr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	auto src2 = m.allocate<std::int8_t>();
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	m.write<std::int8_t>(src2, 2);
	tungsten::vm::mul_rrr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	std::int8_t src2 = 2;
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	tungsten::vm::mul_rcr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_u16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	auto src2 = m.allocate<std::uint16_t>();
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	m.write<std::uint16_t>(src2, 2);
	tungsten::vm::mul_rrr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_u16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	std::uint16_t src2 = 2;
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	tungsten::vm::mul_rcr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	auto src2 = m.allocate<std::int16_t>();
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	m.write<std::int16_t>(src2, 2);
	tungsten::vm::mul_rrr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	std::int16_t src2 = 2;
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	tungsten::vm::mul_rcr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_u32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	auto src2 = m.allocate<std::uint32_t>();
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	m.write<std::uint32_t>(src2, 2);
	tungsten::vm::mul_rrr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_u32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	std::uint32_t src2 = 2;
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	tungsten::vm::mul_rcr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	auto src2 = m.allocate<std::int32_t>();
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	m.write<std::int32_t>(src2, 2);
	tungsten::vm::mul_rrr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	std::int32_t src2 = 2;
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	tungsten::vm::mul_rcr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_u64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	auto src2 = m.allocate<std::uint64_t>();
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	m.write<std::uint64_t>(src2, 2);
	tungsten::vm::mul_rrr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_u64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	std::uint64_t src2 = 2;
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	tungsten::vm::mul_rcr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	auto src2 = m.allocate<std::int64_t>();
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	m.write<std::int64_t>(src2, 2);
	tungsten::vm::mul_rrr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	std::int64_t src2 = 2;
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	tungsten::vm::mul_rcr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_f32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<float>();
	auto src2 = m.allocate<float>();
	auto dst = m.allocate<float>();
	float result;
	m.write<float>(src1, 8);
	m.write<float>(src2, 2);
	tungsten::vm::mul_rrr<float>(m, src1, src2, dst);
	m.read<float>(dst, result);
	float expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_f32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<float>();
	float src2 = 2;
	auto dst = m.allocate<float>();
	float result;
	m.write<float>(src1, 8);
	tungsten::vm::mul_rcr<float>(m, src1, src2, dst);
	m.read<float>(dst, result);
	float expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_f64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<double>();
	auto src2 = m.allocate<double>();
	auto dst = m.allocate<double>();
	double result;
	m.write<double>(src1, 8);
	m.write<double>(src2, 2);
	tungsten::vm::mul_rrr<double>(m, src1, src2, dst);
	m.read<double>(dst, result);
	double expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_f64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<double>();
	double src2 = 2;
	auto dst = m.allocate<double>();
	double result;
	m.write<double>(src1, 8);
	tungsten::vm::mul_rcr<double>(m, src1, src2, dst);
	m.read<double>(dst, result);
	double expected = 16;
	CHECK(result == expected);
}
TEST_CASE("div_u8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	auto src2 = m.allocate<std::uint8_t>();
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	m.write<std::uint8_t>(src2, 2);
	tungsten::vm::div_rrr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_u8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	std::uint8_t src2 = 2;
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	tungsten::vm::div_rcr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	auto src2 = m.allocate<std::int8_t>();
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	m.write<std::int8_t>(src2, 2);
	tungsten::vm::div_rrr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	std::int8_t src2 = 2;
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	tungsten::vm::div_rcr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_u16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	auto src2 = m.allocate<std::uint16_t>();
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	m.write<std::uint16_t>(src2, 2);
	tungsten::vm::div_rrr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_u16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	std::uint16_t src2 = 2;
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	tungsten::vm::div_rcr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	auto src2 = m.allocate<std::int16_t>();
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	m.write<std::int16_t>(src2, 2);
	tungsten::vm::div_rrr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	std::int16_t src2 = 2;
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	tungsten::vm::div_rcr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_u32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	auto src2 = m.allocate<std::uint32_t>();
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	m.write<std::uint32_t>(src2, 2);
	tungsten::vm::div_rrr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_u32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	std::uint32_t src2 = 2;
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	tungsten::vm::div_rcr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	auto src2 = m.allocate<std::int32_t>();
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	m.write<std::int32_t>(src2, 2);
	tungsten::vm::div_rrr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	std::int32_t src2 = 2;
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	tungsten::vm::div_rcr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_u64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	auto src2 = m.allocate<std::uint64_t>();
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	m.write<std::uint64_t>(src2, 2);
	tungsten::vm::div_rrr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_u64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	std::uint64_t src2 = 2;
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	tungsten::vm::div_rcr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	auto src2 = m.allocate<std::int64_t>();
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	m.write<std::int64_t>(src2, 2);
	tungsten::vm::div_rrr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	std::int64_t src2 = 2;
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	tungsten::vm::div_rcr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_f32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<float>();
	auto src2 = m.allocate<float>();
	auto dst = m.allocate<float>();
	float result;
	m.write<float>(src1, 8);
	m.write<float>(src2, 2);
	tungsten::vm::div_rrr<float>(m, src1, src2, dst);
	m.read<float>(dst, result);
	float expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_f32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<float>();
	float src2 = 2;
	auto dst = m.allocate<float>();
	float result;
	m.write<float>(src1, 8);
	tungsten::vm::div_rcr<float>(m, src1, src2, dst);
	m.read<float>(dst, result);
	float expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_f64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<double>();
	auto src2 = m.allocate<double>();
	auto dst = m.allocate<double>();
	double result;
	m.write<double>(src1, 8);
	m.write<double>(src2, 2);
	tungsten::vm::div_rrr<double>(m, src1, src2, dst);
	m.read<double>(dst, result);
	double expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_f64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<double>();
	double src2 = 2;
	auto dst = m.allocate<double>();
	double result;
	m.write<double>(src1, 8);
	tungsten::vm::div_rcr<double>(m, src1, src2, dst);
	m.read<double>(dst, result);
	double expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("lt_u8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	auto src2 = m.allocate<std::uint8_t>();
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	m.write<std::uint8_t>(src2, 2);
	tungsten::vm::lt_rrr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lt_u8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	std::uint8_t src2 = 2;
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	tungsten::vm::lt_rcr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lt_s8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	auto src2 = m.allocate<std::int8_t>();
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	m.write<std::int8_t>(src2, 2);
	tungsten::vm::lt_rrr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lt_s8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	std::int8_t src2 = 2;
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	tungsten::vm::lt_rcr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lt_u16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	auto src2 = m.allocate<std::uint16_t>();
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	m.write<std::uint16_t>(src2, 2);
	tungsten::vm::lt_rrr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lt_u16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	std::uint16_t src2 = 2;
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	tungsten::vm::lt_rcr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lt_s16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	auto src2 = m.allocate<std::int16_t>();
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	m.write<std::int16_t>(src2, 2);
	tungsten::vm::lt_rrr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lt_s16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	std::int16_t src2 = 2;
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	tungsten::vm::lt_rcr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lt_u32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	auto src2 = m.allocate<std::uint32_t>();
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	m.write<std::uint32_t>(src2, 2);
	tungsten::vm::lt_rrr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lt_u32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	std::uint32_t src2 = 2;
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	tungsten::vm::lt_rcr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lt_s32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	auto src2 = m.allocate<std::int32_t>();
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	m.write<std::int32_t>(src2, 2);
	tungsten::vm::lt_rrr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lt_s32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	std::int32_t src2 = 2;
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	tungsten::vm::lt_rcr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lt_u64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	auto src2 = m.allocate<std::uint64_t>();
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	m.write<std::uint64_t>(src2, 2);
	tungsten::vm::lt_rrr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lt_u64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	std::uint64_t src2 = 2;
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	tungsten::vm::lt_rcr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lt_s64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	auto src2 = m.allocate<std::int64_t>();
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	m.write<std::int64_t>(src2, 2);
	tungsten::vm::lt_rrr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lt_s64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	std::int64_t src2 = 2;
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	tungsten::vm::lt_rcr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lt_f32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<float>();
	auto src2 = m.allocate<float>();
	auto dst = m.allocate<float>();
	float result;
	m.write<float>(src1, 8);
	m.write<float>(src2, 2);
	tungsten::vm::lt_rrr<float>(m, src1, src2, dst);
	m.read<float>(dst, result);
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lt_f32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<float>();
	float src2 = 2;
	auto dst = m.allocate<float>();
	float result;
	m.write<float>(src1, 8);
	tungsten::vm::lt_rcr<float>(m, src1, src2, dst);
	m.read<float>(dst, result);
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lt_f64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<double>();
	auto src2 = m.allocate<double>();
	auto dst = m.allocate<double>();
	double result;
	m.write<double>(src1, 8);
	m.write<double>(src2, 2);
	tungsten::vm::lt_rrr<double>(m, src1, src2, dst);
	m.read<double>(dst, result);
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lt_f64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<double>();
	double src2 = 2;
	auto dst = m.allocate<double>();
	double result;
	m.write<double>(src1, 8);
	tungsten::vm::lt_rcr<double>(m, src1, src2, dst);
	m.read<double>(dst, result);
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_u8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	auto src2 = m.allocate<std::uint8_t>();
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	m.write<std::uint8_t>(src2, 2);
	tungsten::vm::gt_rrr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_u8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	std::uint8_t src2 = 2;
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	tungsten::vm::gt_rcr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	auto src2 = m.allocate<std::int8_t>();
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	m.write<std::int8_t>(src2, 2);
	tungsten::vm::gt_rrr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	std::int8_t src2 = 2;
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	tungsten::vm::gt_rcr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_u16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	auto src2 = m.allocate<std::uint16_t>();
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	m.write<std::uint16_t>(src2, 2);
	tungsten::vm::gt_rrr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_u16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	std::uint16_t src2 = 2;
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	tungsten::vm::gt_rcr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	auto src2 = m.allocate<std::int16_t>();
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	m.write<std::int16_t>(src2, 2);
	tungsten::vm::gt_rrr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	std::int16_t src2 = 2;
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	tungsten::vm::gt_rcr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_u32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	auto src2 = m.allocate<std::uint32_t>();
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	m.write<std::uint32_t>(src2, 2);
	tungsten::vm::gt_rrr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_u32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	std::uint32_t src2 = 2;
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	tungsten::vm::gt_rcr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	auto src2 = m.allocate<std::int32_t>();
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	m.write<std::int32_t>(src2, 2);
	tungsten::vm::gt_rrr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	std::int32_t src2 = 2;
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	tungsten::vm::gt_rcr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_u64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	auto src2 = m.allocate<std::uint64_t>();
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	m.write<std::uint64_t>(src2, 2);
	tungsten::vm::gt_rrr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_u64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	std::uint64_t src2 = 2;
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	tungsten::vm::gt_rcr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	auto src2 = m.allocate<std::int64_t>();
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	m.write<std::int64_t>(src2, 2);
	tungsten::vm::gt_rrr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	std::int64_t src2 = 2;
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	tungsten::vm::gt_rcr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_f32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<float>();
	auto src2 = m.allocate<float>();
	auto dst = m.allocate<float>();
	float result;
	m.write<float>(src1, 8);
	m.write<float>(src2, 2);
	tungsten::vm::gt_rrr<float>(m, src1, src2, dst);
	m.read<float>(dst, result);
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_f32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<float>();
	float src2 = 2;
	auto dst = m.allocate<float>();
	float result;
	m.write<float>(src1, 8);
	tungsten::vm::gt_rcr<float>(m, src1, src2, dst);
	m.read<float>(dst, result);
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_f64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<double>();
	auto src2 = m.allocate<double>();
	auto dst = m.allocate<double>();
	double result;
	m.write<double>(src1, 8);
	m.write<double>(src2, 2);
	tungsten::vm::gt_rrr<double>(m, src1, src2, dst);
	m.read<double>(dst, result);
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_f64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<double>();
	double src2 = 2;
	auto dst = m.allocate<double>();
	double result;
	m.write<double>(src1, 8);
	tungsten::vm::gt_rcr<double>(m, src1, src2, dst);
	m.read<double>(dst, result);
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lte_u8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	auto src2 = m.allocate<std::uint8_t>();
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	m.write<std::uint8_t>(src2, 2);
	tungsten::vm::lte_rrr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lte_u8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	std::uint8_t src2 = 2;
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	tungsten::vm::lte_rcr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lte_s8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	auto src2 = m.allocate<std::int8_t>();
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	m.write<std::int8_t>(src2, 2);
	tungsten::vm::lte_rrr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lte_s8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	std::int8_t src2 = 2;
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	tungsten::vm::lte_rcr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lte_u16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	auto src2 = m.allocate<std::uint16_t>();
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	m.write<std::uint16_t>(src2, 2);
	tungsten::vm::lte_rrr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lte_u16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	std::uint16_t src2 = 2;
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	tungsten::vm::lte_rcr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lte_s16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	auto src2 = m.allocate<std::int16_t>();
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	m.write<std::int16_t>(src2, 2);
	tungsten::vm::lte_rrr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lte_s16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	std::int16_t src2 = 2;
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	tungsten::vm::lte_rcr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lte_u32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	auto src2 = m.allocate<std::uint32_t>();
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	m.write<std::uint32_t>(src2, 2);
	tungsten::vm::lte_rrr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lte_u32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	std::uint32_t src2 = 2;
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	tungsten::vm::lte_rcr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lte_s32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	auto src2 = m.allocate<std::int32_t>();
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	m.write<std::int32_t>(src2, 2);
	tungsten::vm::lte_rrr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lte_s32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	std::int32_t src2 = 2;
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	tungsten::vm::lte_rcr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lte_u64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	auto src2 = m.allocate<std::uint64_t>();
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	m.write<std::uint64_t>(src2, 2);
	tungsten::vm::lte_rrr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lte_u64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	std::uint64_t src2 = 2;
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	tungsten::vm::lte_rcr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lte_s64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	auto src2 = m.allocate<std::int64_t>();
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	m.write<std::int64_t>(src2, 2);
	tungsten::vm::lte_rrr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lte_s64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	std::int64_t src2 = 2;
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	tungsten::vm::lte_rcr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lte_f32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<float>();
	auto src2 = m.allocate<float>();
	auto dst = m.allocate<float>();
	float result;
	m.write<float>(src1, 8);
	m.write<float>(src2, 2);
	tungsten::vm::lte_rrr<float>(m, src1, src2, dst);
	m.read<float>(dst, result);
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lte_f32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<float>();
	float src2 = 2;
	auto dst = m.allocate<float>();
	float result;
	m.write<float>(src1, 8);
	tungsten::vm::lte_rcr<float>(m, src1, src2, dst);
	m.read<float>(dst, result);
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lte_f64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<double>();
	auto src2 = m.allocate<double>();
	auto dst = m.allocate<double>();
	double result;
	m.write<double>(src1, 8);
	m.write<double>(src2, 2);
	tungsten::vm::lte_rrr<double>(m, src1, src2, dst);
	m.read<double>(dst, result);
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lte_f64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<double>();
	double src2 = 2;
	auto dst = m.allocate<double>();
	double result;
	m.write<double>(src1, 8);
	tungsten::vm::lte_rcr<double>(m, src1, src2, dst);
	m.read<double>(dst, result);
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_u8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	auto src2 = m.allocate<std::uint8_t>();
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	m.write<std::uint8_t>(src2, 2);
	tungsten::vm::gte_rrr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_u8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	std::uint8_t src2 = 2;
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	tungsten::vm::gte_rcr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	auto src2 = m.allocate<std::int8_t>();
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	m.write<std::int8_t>(src2, 2);
	tungsten::vm::gte_rrr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	std::int8_t src2 = 2;
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	tungsten::vm::gte_rcr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_u16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	auto src2 = m.allocate<std::uint16_t>();
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	m.write<std::uint16_t>(src2, 2);
	tungsten::vm::gte_rrr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_u16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	std::uint16_t src2 = 2;
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	tungsten::vm::gte_rcr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	auto src2 = m.allocate<std::int16_t>();
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	m.write<std::int16_t>(src2, 2);
	tungsten::vm::gte_rrr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	std::int16_t src2 = 2;
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	tungsten::vm::gte_rcr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_u32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	auto src2 = m.allocate<std::uint32_t>();
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	m.write<std::uint32_t>(src2, 2);
	tungsten::vm::gte_rrr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_u32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	std::uint32_t src2 = 2;
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	tungsten::vm::gte_rcr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	auto src2 = m.allocate<std::int32_t>();
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	m.write<std::int32_t>(src2, 2);
	tungsten::vm::gte_rrr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	std::int32_t src2 = 2;
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	tungsten::vm::gte_rcr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_u64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	auto src2 = m.allocate<std::uint64_t>();
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	m.write<std::uint64_t>(src2, 2);
	tungsten::vm::gte_rrr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_u64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	std::uint64_t src2 = 2;
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	tungsten::vm::gte_rcr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	auto src2 = m.allocate<std::int64_t>();
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	m.write<std::int64_t>(src2, 2);
	tungsten::vm::gte_rrr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	std::int64_t src2 = 2;
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	tungsten::vm::gte_rcr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_f32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<float>();
	auto src2 = m.allocate<float>();
	auto dst = m.allocate<float>();
	float result;
	m.write<float>(src1, 8);
	m.write<float>(src2, 2);
	tungsten::vm::gte_rrr<float>(m, src1, src2, dst);
	m.read<float>(dst, result);
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_f32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<float>();
	float src2 = 2;
	auto dst = m.allocate<float>();
	float result;
	m.write<float>(src1, 8);
	tungsten::vm::gte_rcr<float>(m, src1, src2, dst);
	m.read<float>(dst, result);
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_f64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<double>();
	auto src2 = m.allocate<double>();
	auto dst = m.allocate<double>();
	double result;
	m.write<double>(src1, 8);
	m.write<double>(src2, 2);
	tungsten::vm::gte_rrr<double>(m, src1, src2, dst);
	m.read<double>(dst, result);
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_f64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<double>();
	double src2 = 2;
	auto dst = m.allocate<double>();
	double result;
	m.write<double>(src1, 8);
	tungsten::vm::gte_rcr<double>(m, src1, src2, dst);
	m.read<double>(dst, result);
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("eq_u8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	auto src2 = m.allocate<std::uint8_t>();
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	m.write<std::uint8_t>(src2, 2);
	tungsten::vm::eq_rrr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("eq_u8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	std::uint8_t src2 = 2;
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	tungsten::vm::eq_rcr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("eq_s8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	auto src2 = m.allocate<std::int8_t>();
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	m.write<std::int8_t>(src2, 2);
	tungsten::vm::eq_rrr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("eq_s8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	std::int8_t src2 = 2;
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	tungsten::vm::eq_rcr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("eq_u16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	auto src2 = m.allocate<std::uint16_t>();
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	m.write<std::uint16_t>(src2, 2);
	tungsten::vm::eq_rrr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("eq_u16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	std::uint16_t src2 = 2;
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	tungsten::vm::eq_rcr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("eq_s16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	auto src2 = m.allocate<std::int16_t>();
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	m.write<std::int16_t>(src2, 2);
	tungsten::vm::eq_rrr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("eq_s16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	std::int16_t src2 = 2;
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	tungsten::vm::eq_rcr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("eq_u32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	auto src2 = m.allocate<std::uint32_t>();
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	m.write<std::uint32_t>(src2, 2);
	tungsten::vm::eq_rrr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("eq_u32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	std::uint32_t src2 = 2;
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	tungsten::vm::eq_rcr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("eq_s32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	auto src2 = m.allocate<std::int32_t>();
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	m.write<std::int32_t>(src2, 2);
	tungsten::vm::eq_rrr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("eq_s32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	std::int32_t src2 = 2;
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	tungsten::vm::eq_rcr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("eq_u64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	auto src2 = m.allocate<std::uint64_t>();
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	m.write<std::uint64_t>(src2, 2);
	tungsten::vm::eq_rrr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("eq_u64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	std::uint64_t src2 = 2;
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	tungsten::vm::eq_rcr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("eq_s64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	auto src2 = m.allocate<std::int64_t>();
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	m.write<std::int64_t>(src2, 2);
	tungsten::vm::eq_rrr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("eq_s64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	std::int64_t src2 = 2;
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	tungsten::vm::eq_rcr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("eq_f32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<float>();
	auto src2 = m.allocate<float>();
	auto dst = m.allocate<float>();
	float result;
	m.write<float>(src1, 8);
	m.write<float>(src2, 2);
	tungsten::vm::eq_rrr<float>(m, src1, src2, dst);
	m.read<float>(dst, result);
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("eq_f32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<float>();
	float src2 = 2;
	auto dst = m.allocate<float>();
	float result;
	m.write<float>(src1, 8);
	tungsten::vm::eq_rcr<float>(m, src1, src2, dst);
	m.read<float>(dst, result);
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("eq_f64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<double>();
	auto src2 = m.allocate<double>();
	auto dst = m.allocate<double>();
	double result;
	m.write<double>(src1, 8);
	m.write<double>(src2, 2);
	tungsten::vm::eq_rrr<double>(m, src1, src2, dst);
	m.read<double>(dst, result);
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("eq_f64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<double>();
	double src2 = 2;
	auto dst = m.allocate<double>();
	double result;
	m.write<double>(src1, 8);
	tungsten::vm::eq_rcr<double>(m, src1, src2, dst);
	m.read<double>(dst, result);
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_u8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	auto src2 = m.allocate<std::uint8_t>();
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	m.write<std::uint8_t>(src2, 2);
	tungsten::vm::ne_rrr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_u8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint8_t>();
	std::uint8_t src2 = 2;
	auto dst = m.allocate<std::uint8_t>();
	std::uint8_t result;
	m.write<std::uint8_t>(src1, 8);
	tungsten::vm::ne_rcr<std::uint8_t>(m, src1, src2, dst);
	m.read<std::uint8_t>(dst, result);
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s8_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	auto src2 = m.allocate<std::int8_t>();
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	m.write<std::int8_t>(src2, 2);
	tungsten::vm::ne_rrr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s8_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int8_t>();
	std::int8_t src2 = 2;
	auto dst = m.allocate<std::int8_t>();
	std::int8_t result;
	m.write<std::int8_t>(src1, 8);
	tungsten::vm::ne_rcr<std::int8_t>(m, src1, src2, dst);
	m.read<std::int8_t>(dst, result);
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_u16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	auto src2 = m.allocate<std::uint16_t>();
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	m.write<std::uint16_t>(src2, 2);
	tungsten::vm::ne_rrr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_u16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint16_t>();
	std::uint16_t src2 = 2;
	auto dst = m.allocate<std::uint16_t>();
	std::uint16_t result;
	m.write<std::uint16_t>(src1, 8);
	tungsten::vm::ne_rcr<std::uint16_t>(m, src1, src2, dst);
	m.read<std::uint16_t>(dst, result);
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s16_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	auto src2 = m.allocate<std::int16_t>();
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	m.write<std::int16_t>(src2, 2);
	tungsten::vm::ne_rrr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s16_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int16_t>();
	std::int16_t src2 = 2;
	auto dst = m.allocate<std::int16_t>();
	std::int16_t result;
	m.write<std::int16_t>(src1, 8);
	tungsten::vm::ne_rcr<std::int16_t>(m, src1, src2, dst);
	m.read<std::int16_t>(dst, result);
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_u32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	auto src2 = m.allocate<std::uint32_t>();
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	m.write<std::uint32_t>(src2, 2);
	tungsten::vm::ne_rrr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_u32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint32_t>();
	std::uint32_t src2 = 2;
	auto dst = m.allocate<std::uint32_t>();
	std::uint32_t result;
	m.write<std::uint32_t>(src1, 8);
	tungsten::vm::ne_rcr<std::uint32_t>(m, src1, src2, dst);
	m.read<std::uint32_t>(dst, result);
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	auto src2 = m.allocate<std::int32_t>();
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	m.write<std::int32_t>(src2, 2);
	tungsten::vm::ne_rrr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int32_t>();
	std::int32_t src2 = 2;
	auto dst = m.allocate<std::int32_t>();
	std::int32_t result;
	m.write<std::int32_t>(src1, 8);
	tungsten::vm::ne_rcr<std::int32_t>(m, src1, src2, dst);
	m.read<std::int32_t>(dst, result);
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_u64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	auto src2 = m.allocate<std::uint64_t>();
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	m.write<std::uint64_t>(src2, 2);
	tungsten::vm::ne_rrr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_u64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::uint64_t>();
	std::uint64_t src2 = 2;
	auto dst = m.allocate<std::uint64_t>();
	std::uint64_t result;
	m.write<std::uint64_t>(src1, 8);
	tungsten::vm::ne_rcr<std::uint64_t>(m, src1, src2, dst);
	m.read<std::uint64_t>(dst, result);
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	auto src2 = m.allocate<std::int64_t>();
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	m.write<std::int64_t>(src2, 2);
	tungsten::vm::ne_rrr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<std::int64_t>();
	std::int64_t src2 = 2;
	auto dst = m.allocate<std::int64_t>();
	std::int64_t result;
	m.write<std::int64_t>(src1, 8);
	tungsten::vm::ne_rcr<std::int64_t>(m, src1, src2, dst);
	m.read<std::int64_t>(dst, result);
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_f32_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<float>();
	auto src2 = m.allocate<float>();
	auto dst = m.allocate<float>();
	float result;
	m.write<float>(src1, 8);
	m.write<float>(src2, 2);
	tungsten::vm::ne_rrr<float>(m, src1, src2, dst);
	m.read<float>(dst, result);
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_f32_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<float>();
	float src2 = 2;
	auto dst = m.allocate<float>();
	float result;
	m.write<float>(src1, 8);
	tungsten::vm::ne_rcr<float>(m, src1, src2, dst);
	m.read<float>(dst, result);
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_f64_rrr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<double>();
	auto src2 = m.allocate<double>();
	auto dst = m.allocate<double>();
	double result;
	m.write<double>(src1, 8);
	m.write<double>(src2, 2);
	tungsten::vm::ne_rrr<double>(m, src1, src2, dst);
	m.read<double>(dst, result);
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_f64_rcr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
	auto src1 = m.allocate<double>();
	double src2 = 2;
	auto dst = m.allocate<double>();
	double result;
	m.write<double>(src1, 8);
	tungsten::vm::ne_rcr<double>(m, src1, src2, dst);
	m.read<double>(dst, result);
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("zero_u8_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("inc_u8_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("dec_u8_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("zero_s8_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("inc_s8_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("dec_s8_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("zero_u16_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("inc_u16_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("dec_u16_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("zero_s16_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("inc_s16_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("dec_s16_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("zero_u32_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("inc_u32_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("dec_u32_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("zero_s32_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("inc_s32_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("dec_s32_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("zero_u64_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("inc_u64_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("dec_u64_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("zero_s64_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("inc_s64_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("dec_s64_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("zero_f32_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("inc_f32_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("dec_f32_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("zero_f64_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("inc_f64_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
TEST_CASE("dec_f64_nnr", "[dispatch]") {
	tungsten::machine m;
	std::vector<std::uint8_t> c;
}
