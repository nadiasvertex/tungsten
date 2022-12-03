#include "eval/opcodes.h"
#include "eval/serdes.h"
#include "eval/binops.h"
#include "eval/unops.h"
#include <cstdint>
#include <catch2/catch_test_macros.hpp>
TEST_CASE("shl_u8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_u8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(src2.name(), 2);
	tungsten::vm::shl_rrrn<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_u8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(dst.name(), 2);
	tungsten::vm::shl_rcrn<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_u8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_s8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_s8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(src2.name(), 2);
	tungsten::vm::shl_rrrn<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_s8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(dst.name(), 2);
	tungsten::vm::shl_rcrn<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_s8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_u16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_u16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(src2.name(), 2);
	tungsten::vm::shl_rrrn<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_u16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(dst.name(), 2);
	tungsten::vm::shl_rcrn<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_u16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_s16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_s16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(src2.name(), 2);
	tungsten::vm::shl_rrrn<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_s16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(dst.name(), 2);
	tungsten::vm::shl_rcrn<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_s16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_u32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_u32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(src2.name(), 2);
	tungsten::vm::shl_rrrn<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_u32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(dst.name(), 2);
	tungsten::vm::shl_rcrn<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_u32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_s32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_s32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(src2.name(), 2);
	tungsten::vm::shl_rrrn<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_s32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(dst.name(), 2);
	tungsten::vm::shl_rcrn<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_s32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_u64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_u64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(src2.name(), 2);
	tungsten::vm::shl_rrrn<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_u64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(dst.name(), 2);
	tungsten::vm::shl_rcrn<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_u64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_s64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_s64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(src2.name(), 2);
	tungsten::vm::shl_rrrn<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_s64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(dst.name(), 2);
	tungsten::vm::shl_rcrn<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shl_s64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_u8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_u8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(src2.name(), 2);
	tungsten::vm::shr_rrrn<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_u8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(dst.name(), 2);
	tungsten::vm::shr_rcrn<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_u8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_s8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_s8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(src2.name(), 2);
	tungsten::vm::shr_rrrn<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_s8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(dst.name(), 2);
	tungsten::vm::shr_rcrn<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_s8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_u16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_u16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(src2.name(), 2);
	tungsten::vm::shr_rrrn<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_u16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(dst.name(), 2);
	tungsten::vm::shr_rcrn<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_u16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_s16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_s16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(src2.name(), 2);
	tungsten::vm::shr_rrrn<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_s16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(dst.name(), 2);
	tungsten::vm::shr_rcrn<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_s16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_u32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_u32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(src2.name(), 2);
	tungsten::vm::shr_rrrn<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_u32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(dst.name(), 2);
	tungsten::vm::shr_rcrn<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_u32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_s32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_s32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(src2.name(), 2);
	tungsten::vm::shr_rrrn<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_s32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(dst.name(), 2);
	tungsten::vm::shr_rcrn<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_s32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_u64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_u64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(src2.name(), 2);
	tungsten::vm::shr_rrrn<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_u64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(dst.name(), 2);
	tungsten::vm::shr_rcrn<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_u64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_s64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_s64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(src2.name(), 2);
	tungsten::vm::shr_rrrn<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_s64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(dst.name(), 2);
	tungsten::vm::shr_rcrn<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("shr_s64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_u8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_u8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(src2.name(), 2);
	tungsten::vm::binary_and_rrrn<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
}
TEST_CASE("binary_and_u8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_u8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(dst.name(), 2);
	tungsten::vm::binary_and_rcrn<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
}
TEST_CASE("binary_and_u8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_u8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_s8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_s8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(src2.name(), 2);
	tungsten::vm::binary_and_rrrn<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
}
TEST_CASE("binary_and_s8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_s8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(dst.name(), 2);
	tungsten::vm::binary_and_rcrn<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
}
TEST_CASE("binary_and_s8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_s8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_u16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_u16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(src2.name(), 2);
	tungsten::vm::binary_and_rrrn<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
}
TEST_CASE("binary_and_u16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_u16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(dst.name(), 2);
	tungsten::vm::binary_and_rcrn<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
}
TEST_CASE("binary_and_u16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_u16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_s16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_s16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(src2.name(), 2);
	tungsten::vm::binary_and_rrrn<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
}
TEST_CASE("binary_and_s16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_s16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(dst.name(), 2);
	tungsten::vm::binary_and_rcrn<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
}
TEST_CASE("binary_and_s16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_s16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_u32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_u32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(src2.name(), 2);
	tungsten::vm::binary_and_rrrn<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
}
TEST_CASE("binary_and_u32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_u32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(dst.name(), 2);
	tungsten::vm::binary_and_rcrn<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
}
TEST_CASE("binary_and_u32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_u32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_s32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_s32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(src2.name(), 2);
	tungsten::vm::binary_and_rrrn<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
}
TEST_CASE("binary_and_s32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_s32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(dst.name(), 2);
	tungsten::vm::binary_and_rcrn<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
}
TEST_CASE("binary_and_s32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_s32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_u64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_u64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(src2.name(), 2);
	tungsten::vm::binary_and_rrrn<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
}
TEST_CASE("binary_and_u64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_u64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(dst.name(), 2);
	tungsten::vm::binary_and_rcrn<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
}
TEST_CASE("binary_and_u64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_u64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_s64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_s64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(src2.name(), 2);
	tungsten::vm::binary_and_rrrn<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
}
TEST_CASE("binary_and_s64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_s64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(dst.name(), 2);
	tungsten::vm::binary_and_rcrn<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
}
TEST_CASE("binary_and_s64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_and_s64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_u8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_u8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(src2.name(), 2);
	tungsten::vm::binary_or_rrrn<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_u8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(dst.name(), 2);
	tungsten::vm::binary_or_rcrn<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_u8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_s8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_s8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(src2.name(), 2);
	tungsten::vm::binary_or_rrrn<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_s8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(dst.name(), 2);
	tungsten::vm::binary_or_rcrn<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_s8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_u16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_u16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(src2.name(), 2);
	tungsten::vm::binary_or_rrrn<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_u16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(dst.name(), 2);
	tungsten::vm::binary_or_rcrn<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_u16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_s16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_s16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(src2.name(), 2);
	tungsten::vm::binary_or_rrrn<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_s16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(dst.name(), 2);
	tungsten::vm::binary_or_rcrn<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_s16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_u32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_u32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(src2.name(), 2);
	tungsten::vm::binary_or_rrrn<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_u32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(dst.name(), 2);
	tungsten::vm::binary_or_rcrn<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_u32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_s32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_s32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(src2.name(), 2);
	tungsten::vm::binary_or_rrrn<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_s32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(dst.name(), 2);
	tungsten::vm::binary_or_rcrn<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_s32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_u64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_u64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(src2.name(), 2);
	tungsten::vm::binary_or_rrrn<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_u64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(dst.name(), 2);
	tungsten::vm::binary_or_rcrn<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_u64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_s64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_s64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(src2.name(), 2);
	tungsten::vm::binary_or_rrrn<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_s64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(dst.name(), 2);
	tungsten::vm::binary_or_rcrn<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_or_s64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_u8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_u8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(src2.name(), 2);
	tungsten::vm::binary_xor_rrrn<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_u8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(dst.name(), 2);
	tungsten::vm::binary_xor_rcrn<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_u8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_s8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_s8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(src2.name(), 2);
	tungsten::vm::binary_xor_rrrn<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_s8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(dst.name(), 2);
	tungsten::vm::binary_xor_rcrn<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_s8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_u16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_u16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(src2.name(), 2);
	tungsten::vm::binary_xor_rrrn<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_u16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(dst.name(), 2);
	tungsten::vm::binary_xor_rcrn<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_u16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_s16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_s16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(src2.name(), 2);
	tungsten::vm::binary_xor_rrrn<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_s16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(dst.name(), 2);
	tungsten::vm::binary_xor_rcrn<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_s16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_u32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_u32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(src2.name(), 2);
	tungsten::vm::binary_xor_rrrn<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_u32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(dst.name(), 2);
	tungsten::vm::binary_xor_rcrn<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_u32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_s32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_s32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(src2.name(), 2);
	tungsten::vm::binary_xor_rrrn<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_s32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(dst.name(), 2);
	tungsten::vm::binary_xor_rcrn<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_s32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_u64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_u64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(src2.name(), 2);
	tungsten::vm::binary_xor_rrrn<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_u64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(dst.name(), 2);
	tungsten::vm::binary_xor_rcrn<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_u64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_s64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_s64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(src2.name(), 2);
	tungsten::vm::binary_xor_rrrn<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_s64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(dst.name(), 2);
	tungsten::vm::binary_xor_rcrn<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("binary_xor_s64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_u8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_u8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(src2.name(), 2);
	tungsten::vm::add_rrrn<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_u8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(dst.name(), 2);
	tungsten::vm::add_rcrn<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_u8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_s8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_s8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(src2.name(), 2);
	tungsten::vm::add_rrrn<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_s8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(dst.name(), 2);
	tungsten::vm::add_rcrn<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_s8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_u16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_u16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(src2.name(), 2);
	tungsten::vm::add_rrrn<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_u16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(dst.name(), 2);
	tungsten::vm::add_rcrn<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_u16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_s16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_s16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(src2.name(), 2);
	tungsten::vm::add_rrrn<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_s16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(dst.name(), 2);
	tungsten::vm::add_rcrn<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_s16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_u32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_u32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(src2.name(), 2);
	tungsten::vm::add_rrrn<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_u32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(dst.name(), 2);
	tungsten::vm::add_rcrn<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_u32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_s32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_s32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(src2.name(), 2);
	tungsten::vm::add_rrrn<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_s32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(dst.name(), 2);
	tungsten::vm::add_rcrn<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_s32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_u64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_u64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(src2.name(), 2);
	tungsten::vm::add_rrrn<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_u64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(dst.name(), 2);
	tungsten::vm::add_rcrn<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_u64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_s64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_s64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(src2.name(), 2);
	tungsten::vm::add_rrrn<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_s64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(dst.name(), 2);
	tungsten::vm::add_rcrn<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_s64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_f32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_f32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<float>(src1.name(), 8);
	m.write_register<float>(src2.name(), 2);
	tungsten::vm::add_rrrn<float>(m, src1.name(), src2.name(), dst.name());
	float result = m.read_register<float>(dst.name());
	float expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_f32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_f32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<float>(src1.name(), 8);
	m.write_register<float>(dst.name(), 2);
	tungsten::vm::add_rcrn<float>(m, src1.name(), 2, dst.name());
	float result = m.read_register<float>(dst.name());
	float expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_f32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_f32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_f64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_f64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<double>(src1.name(), 8);
	m.write_register<double>(src2.name(), 2);
	tungsten::vm::add_rrrn<double>(m, src1.name(), src2.name(), dst.name());
	double result = m.read_register<double>(dst.name());
	double expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_f64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_f64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<double>(src1.name(), 8);
	m.write_register<double>(dst.name(), 2);
	tungsten::vm::add_rcrn<double>(m, src1.name(), 2, dst.name());
	double result = m.read_register<double>(dst.name());
	double expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_f64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("add_f64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_u8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_u8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(src2.name(), 2);
	tungsten::vm::sub_rrrn<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_u8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_u8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(dst.name(), 2);
	tungsten::vm::sub_rcrn<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_u8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_u8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_s8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_s8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(src2.name(), 2);
	tungsten::vm::sub_rrrn<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_s8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(dst.name(), 2);
	tungsten::vm::sub_rcrn<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_s8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_u16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_u16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(src2.name(), 2);
	tungsten::vm::sub_rrrn<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_u16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_u16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(dst.name(), 2);
	tungsten::vm::sub_rcrn<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_u16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_u16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_s16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_s16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(src2.name(), 2);
	tungsten::vm::sub_rrrn<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_s16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(dst.name(), 2);
	tungsten::vm::sub_rcrn<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_s16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_u32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_u32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(src2.name(), 2);
	tungsten::vm::sub_rrrn<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_u32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_u32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(dst.name(), 2);
	tungsten::vm::sub_rcrn<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_u32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_u32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_s32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_s32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(src2.name(), 2);
	tungsten::vm::sub_rrrn<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_s32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(dst.name(), 2);
	tungsten::vm::sub_rcrn<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_s32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_u64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_u64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(src2.name(), 2);
	tungsten::vm::sub_rrrn<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_u64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_u64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(dst.name(), 2);
	tungsten::vm::sub_rcrn<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_u64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_u64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_s64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_s64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(src2.name(), 2);
	tungsten::vm::sub_rrrn<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_s64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(dst.name(), 2);
	tungsten::vm::sub_rcrn<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_s64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_f32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_f32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<float>(src1.name(), 8);
	m.write_register<float>(src2.name(), 2);
	tungsten::vm::sub_rrrn<float>(m, src1.name(), src2.name(), dst.name());
	float result = m.read_register<float>(dst.name());
	float expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_f32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_f32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<float>(src1.name(), 8);
	m.write_register<float>(dst.name(), 2);
	tungsten::vm::sub_rcrn<float>(m, src1.name(), 2, dst.name());
	float result = m.read_register<float>(dst.name());
	float expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_f32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_f32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_f64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_f64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<double>(src1.name(), 8);
	m.write_register<double>(src2.name(), 2);
	tungsten::vm::sub_rrrn<double>(m, src1.name(), src2.name(), dst.name());
	double result = m.read_register<double>(dst.name());
	double expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_f64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_f64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<double>(src1.name(), 8);
	m.write_register<double>(dst.name(), 2);
	tungsten::vm::sub_rcrn<double>(m, src1.name(), 2, dst.name());
	double result = m.read_register<double>(dst.name());
	double expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_f64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("sub_f64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_u8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_u8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(src2.name(), 2);
	tungsten::vm::mul_rrrn<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_u8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_u8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(dst.name(), 2);
	tungsten::vm::mul_rcrn<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_u8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_u8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_s8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_s8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(src2.name(), 2);
	tungsten::vm::mul_rrrn<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_s8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(dst.name(), 2);
	tungsten::vm::mul_rcrn<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_s8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_u16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_u16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(src2.name(), 2);
	tungsten::vm::mul_rrrn<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_u16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_u16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(dst.name(), 2);
	tungsten::vm::mul_rcrn<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_u16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_u16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_s16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_s16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(src2.name(), 2);
	tungsten::vm::mul_rrrn<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_s16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(dst.name(), 2);
	tungsten::vm::mul_rcrn<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_s16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_u32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_u32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(src2.name(), 2);
	tungsten::vm::mul_rrrn<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_u32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_u32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(dst.name(), 2);
	tungsten::vm::mul_rcrn<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_u32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_u32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_s32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_s32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(src2.name(), 2);
	tungsten::vm::mul_rrrn<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_s32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(dst.name(), 2);
	tungsten::vm::mul_rcrn<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_s32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_u64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_u64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(src2.name(), 2);
	tungsten::vm::mul_rrrn<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_u64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_u64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(dst.name(), 2);
	tungsten::vm::mul_rcrn<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_u64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_u64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_s64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_s64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(src2.name(), 2);
	tungsten::vm::mul_rrrn<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_s64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(dst.name(), 2);
	tungsten::vm::mul_rcrn<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_s64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_f32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_f32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<float>(src1.name(), 8);
	m.write_register<float>(src2.name(), 2);
	tungsten::vm::mul_rrrn<float>(m, src1.name(), src2.name(), dst.name());
	float result = m.read_register<float>(dst.name());
	float expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_f32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_f32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<float>(src1.name(), 8);
	m.write_register<float>(dst.name(), 2);
	tungsten::vm::mul_rcrn<float>(m, src1.name(), 2, dst.name());
	float result = m.read_register<float>(dst.name());
	float expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_f32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_f32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_f64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_f64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<double>(src1.name(), 8);
	m.write_register<double>(src2.name(), 2);
	tungsten::vm::mul_rrrn<double>(m, src1.name(), src2.name(), dst.name());
	double result = m.read_register<double>(dst.name());
	double expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_f64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_f64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<double>(src1.name(), 8);
	m.write_register<double>(dst.name(), 2);
	tungsten::vm::mul_rcrn<double>(m, src1.name(), 2, dst.name());
	double result = m.read_register<double>(dst.name());
	double expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_f64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("mul_f64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_u8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_u8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(src2.name(), 2);
	tungsten::vm::div_rrrn<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_u8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_u8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(dst.name(), 2);
	tungsten::vm::div_rcrn<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_u8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_u8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_s8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_s8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(src2.name(), 2);
	tungsten::vm::div_rrrn<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_s8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(dst.name(), 2);
	tungsten::vm::div_rcrn<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_s8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_u16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_u16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(src2.name(), 2);
	tungsten::vm::div_rrrn<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_u16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_u16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(dst.name(), 2);
	tungsten::vm::div_rcrn<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_u16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_u16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_s16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_s16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(src2.name(), 2);
	tungsten::vm::div_rrrn<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_s16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(dst.name(), 2);
	tungsten::vm::div_rcrn<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_s16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_u32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_u32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(src2.name(), 2);
	tungsten::vm::div_rrrn<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_u32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_u32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(dst.name(), 2);
	tungsten::vm::div_rcrn<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_u32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_u32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_s32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_s32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(src2.name(), 2);
	tungsten::vm::div_rrrn<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_s32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(dst.name(), 2);
	tungsten::vm::div_rcrn<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_s32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_u64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_u64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(src2.name(), 2);
	tungsten::vm::div_rrrn<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_u64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_u64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(dst.name(), 2);
	tungsten::vm::div_rcrn<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_u64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_u64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_s64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_s64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(src2.name(), 2);
	tungsten::vm::div_rrrn<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_s64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(dst.name(), 2);
	tungsten::vm::div_rcrn<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_s64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_f32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_f32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<float>(src1.name(), 8);
	m.write_register<float>(src2.name(), 2);
	tungsten::vm::div_rrrn<float>(m, src1.name(), src2.name(), dst.name());
	float result = m.read_register<float>(dst.name());
	float expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_f32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_f32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<float>(src1.name(), 8);
	m.write_register<float>(dst.name(), 2);
	tungsten::vm::div_rcrn<float>(m, src1.name(), 2, dst.name());
	float result = m.read_register<float>(dst.name());
	float expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_f32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_f32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_f64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_f64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<double>(src1.name(), 8);
	m.write_register<double>(src2.name(), 2);
	tungsten::vm::div_rrrn<double>(m, src1.name(), src2.name(), dst.name());
	double result = m.read_register<double>(dst.name());
	double expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_f64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_f64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<double>(src1.name(), 8);
	m.write_register<double>(dst.name(), 2);
	tungsten::vm::div_rcrn<double>(m, src1.name(), 2, dst.name());
	double result = m.read_register<double>(dst.name());
	double expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_f64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("div_f64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_u8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_u8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(src2.name(), 2);
	tungsten::vm::lt_rrrn<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
}
TEST_CASE("lt_u8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_u8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(dst.name(), 2);
	tungsten::vm::lt_rcrn<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
}
TEST_CASE("lt_u8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_u8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_s8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_s8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(src2.name(), 2);
	tungsten::vm::lt_rrrn<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
}
TEST_CASE("lt_s8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_s8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(dst.name(), 2);
	tungsten::vm::lt_rcrn<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
}
TEST_CASE("lt_s8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_s8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_u16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_u16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(src2.name(), 2);
	tungsten::vm::lt_rrrn<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
}
TEST_CASE("lt_u16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_u16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(dst.name(), 2);
	tungsten::vm::lt_rcrn<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
}
TEST_CASE("lt_u16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_u16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_s16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_s16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(src2.name(), 2);
	tungsten::vm::lt_rrrn<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
}
TEST_CASE("lt_s16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_s16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(dst.name(), 2);
	tungsten::vm::lt_rcrn<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
}
TEST_CASE("lt_s16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_s16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_u32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_u32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(src2.name(), 2);
	tungsten::vm::lt_rrrn<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
}
TEST_CASE("lt_u32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_u32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(dst.name(), 2);
	tungsten::vm::lt_rcrn<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
}
TEST_CASE("lt_u32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_u32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_s32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_s32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(src2.name(), 2);
	tungsten::vm::lt_rrrn<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
}
TEST_CASE("lt_s32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_s32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(dst.name(), 2);
	tungsten::vm::lt_rcrn<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
}
TEST_CASE("lt_s32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_s32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_u64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_u64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(src2.name(), 2);
	tungsten::vm::lt_rrrn<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
}
TEST_CASE("lt_u64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_u64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(dst.name(), 2);
	tungsten::vm::lt_rcrn<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
}
TEST_CASE("lt_u64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_u64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_s64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_s64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(src2.name(), 2);
	tungsten::vm::lt_rrrn<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
}
TEST_CASE("lt_s64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_s64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(dst.name(), 2);
	tungsten::vm::lt_rcrn<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
}
TEST_CASE("lt_s64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_s64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_f32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_f32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<float>(src1.name(), 8);
	m.write_register<float>(src2.name(), 2);
	tungsten::vm::lt_rrrn<float>(m, src1.name(), src2.name(), dst.name());
	float result = m.read_register<float>(dst.name());
}
TEST_CASE("lt_f32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_f32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<float>(src1.name(), 8);
	m.write_register<float>(dst.name(), 2);
	tungsten::vm::lt_rcrn<float>(m, src1.name(), 2, dst.name());
	float result = m.read_register<float>(dst.name());
}
TEST_CASE("lt_f32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_f32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_f64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_f64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<double>(src1.name(), 8);
	m.write_register<double>(src2.name(), 2);
	tungsten::vm::lt_rrrn<double>(m, src1.name(), src2.name(), dst.name());
	double result = m.read_register<double>(dst.name());
}
TEST_CASE("lt_f64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_f64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<double>(src1.name(), 8);
	m.write_register<double>(dst.name(), 2);
	tungsten::vm::lt_rcrn<double>(m, src1.name(), 2, dst.name());
	double result = m.read_register<double>(dst.name());
}
TEST_CASE("lt_f64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lt_f64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_u8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_u8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(src2.name(), 2);
	tungsten::vm::gt_rrrn<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_u8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_u8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(dst.name(), 2);
	tungsten::vm::gt_rcrn<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_u8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_u8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_s8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_s8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(src2.name(), 2);
	tungsten::vm::gt_rrrn<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_s8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(dst.name(), 2);
	tungsten::vm::gt_rcrn<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_s8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_u16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_u16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(src2.name(), 2);
	tungsten::vm::gt_rrrn<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_u16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_u16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(dst.name(), 2);
	tungsten::vm::gt_rcrn<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_u16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_u16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_s16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_s16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(src2.name(), 2);
	tungsten::vm::gt_rrrn<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_s16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(dst.name(), 2);
	tungsten::vm::gt_rcrn<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_s16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_u32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_u32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(src2.name(), 2);
	tungsten::vm::gt_rrrn<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_u32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_u32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(dst.name(), 2);
	tungsten::vm::gt_rcrn<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_u32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_u32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_s32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_s32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(src2.name(), 2);
	tungsten::vm::gt_rrrn<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_s32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(dst.name(), 2);
	tungsten::vm::gt_rcrn<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_s32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_u64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_u64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(src2.name(), 2);
	tungsten::vm::gt_rrrn<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_u64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_u64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(dst.name(), 2);
	tungsten::vm::gt_rcrn<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_u64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_u64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_s64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_s64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(src2.name(), 2);
	tungsten::vm::gt_rrrn<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_s64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(dst.name(), 2);
	tungsten::vm::gt_rcrn<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_s64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_f32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_f32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<float>(src1.name(), 8);
	m.write_register<float>(src2.name(), 2);
	tungsten::vm::gt_rrrn<float>(m, src1.name(), src2.name(), dst.name());
	float result = m.read_register<float>(dst.name());
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_f32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_f32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<float>(src1.name(), 8);
	m.write_register<float>(dst.name(), 2);
	tungsten::vm::gt_rcrn<float>(m, src1.name(), 2, dst.name());
	float result = m.read_register<float>(dst.name());
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_f32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_f32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_f64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_f64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<double>(src1.name(), 8);
	m.write_register<double>(src2.name(), 2);
	tungsten::vm::gt_rrrn<double>(m, src1.name(), src2.name(), dst.name());
	double result = m.read_register<double>(dst.name());
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_f64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_f64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<double>(src1.name(), 8);
	m.write_register<double>(dst.name(), 2);
	tungsten::vm::gt_rcrn<double>(m, src1.name(), 2, dst.name());
	double result = m.read_register<double>(dst.name());
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_f64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gt_f64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_u8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_u8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(src2.name(), 2);
	tungsten::vm::lte_rrrn<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
}
TEST_CASE("lte_u8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_u8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(dst.name(), 2);
	tungsten::vm::lte_rcrn<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
}
TEST_CASE("lte_u8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_u8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_s8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_s8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(src2.name(), 2);
	tungsten::vm::lte_rrrn<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
}
TEST_CASE("lte_s8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_s8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(dst.name(), 2);
	tungsten::vm::lte_rcrn<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
}
TEST_CASE("lte_s8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_s8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_u16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_u16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(src2.name(), 2);
	tungsten::vm::lte_rrrn<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
}
TEST_CASE("lte_u16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_u16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(dst.name(), 2);
	tungsten::vm::lte_rcrn<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
}
TEST_CASE("lte_u16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_u16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_s16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_s16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(src2.name(), 2);
	tungsten::vm::lte_rrrn<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
}
TEST_CASE("lte_s16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_s16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(dst.name(), 2);
	tungsten::vm::lte_rcrn<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
}
TEST_CASE("lte_s16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_s16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_u32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_u32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(src2.name(), 2);
	tungsten::vm::lte_rrrn<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
}
TEST_CASE("lte_u32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_u32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(dst.name(), 2);
	tungsten::vm::lte_rcrn<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
}
TEST_CASE("lte_u32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_u32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_s32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_s32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(src2.name(), 2);
	tungsten::vm::lte_rrrn<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
}
TEST_CASE("lte_s32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_s32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(dst.name(), 2);
	tungsten::vm::lte_rcrn<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
}
TEST_CASE("lte_s32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_s32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_u64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_u64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(src2.name(), 2);
	tungsten::vm::lte_rrrn<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
}
TEST_CASE("lte_u64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_u64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(dst.name(), 2);
	tungsten::vm::lte_rcrn<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
}
TEST_CASE("lte_u64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_u64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_s64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_s64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(src2.name(), 2);
	tungsten::vm::lte_rrrn<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
}
TEST_CASE("lte_s64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_s64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(dst.name(), 2);
	tungsten::vm::lte_rcrn<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
}
TEST_CASE("lte_s64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_s64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_f32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_f32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<float>(src1.name(), 8);
	m.write_register<float>(src2.name(), 2);
	tungsten::vm::lte_rrrn<float>(m, src1.name(), src2.name(), dst.name());
	float result = m.read_register<float>(dst.name());
}
TEST_CASE("lte_f32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_f32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<float>(src1.name(), 8);
	m.write_register<float>(dst.name(), 2);
	tungsten::vm::lte_rcrn<float>(m, src1.name(), 2, dst.name());
	float result = m.read_register<float>(dst.name());
}
TEST_CASE("lte_f32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_f32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_f64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_f64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<double>(src1.name(), 8);
	m.write_register<double>(src2.name(), 2);
	tungsten::vm::lte_rrrn<double>(m, src1.name(), src2.name(), dst.name());
	double result = m.read_register<double>(dst.name());
}
TEST_CASE("lte_f64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_f64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<double>(src1.name(), 8);
	m.write_register<double>(dst.name(), 2);
	tungsten::vm::lte_rcrn<double>(m, src1.name(), 2, dst.name());
	double result = m.read_register<double>(dst.name());
}
TEST_CASE("lte_f64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("lte_f64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_u8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_u8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(src2.name(), 2);
	tungsten::vm::gte_rrrn<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_u8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_u8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(dst.name(), 2);
	tungsten::vm::gte_rcrn<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_u8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_u8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_s8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_s8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(src2.name(), 2);
	tungsten::vm::gte_rrrn<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_s8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(dst.name(), 2);
	tungsten::vm::gte_rcrn<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_s8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_u16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_u16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(src2.name(), 2);
	tungsten::vm::gte_rrrn<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_u16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_u16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(dst.name(), 2);
	tungsten::vm::gte_rcrn<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_u16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_u16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_s16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_s16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(src2.name(), 2);
	tungsten::vm::gte_rrrn<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_s16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(dst.name(), 2);
	tungsten::vm::gte_rcrn<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_s16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_u32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_u32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(src2.name(), 2);
	tungsten::vm::gte_rrrn<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_u32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_u32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(dst.name(), 2);
	tungsten::vm::gte_rcrn<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_u32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_u32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_s32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_s32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(src2.name(), 2);
	tungsten::vm::gte_rrrn<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_s32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(dst.name(), 2);
	tungsten::vm::gte_rcrn<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_s32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_u64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_u64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(src2.name(), 2);
	tungsten::vm::gte_rrrn<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_u64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_u64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(dst.name(), 2);
	tungsten::vm::gte_rcrn<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_u64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_u64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_s64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_s64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(src2.name(), 2);
	tungsten::vm::gte_rrrn<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_s64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(dst.name(), 2);
	tungsten::vm::gte_rcrn<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_s64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_f32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_f32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<float>(src1.name(), 8);
	m.write_register<float>(src2.name(), 2);
	tungsten::vm::gte_rrrn<float>(m, src1.name(), src2.name(), dst.name());
	float result = m.read_register<float>(dst.name());
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_f32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_f32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<float>(src1.name(), 8);
	m.write_register<float>(dst.name(), 2);
	tungsten::vm::gte_rcrn<float>(m, src1.name(), 2, dst.name());
	float result = m.read_register<float>(dst.name());
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_f32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_f32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_f64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_f64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<double>(src1.name(), 8);
	m.write_register<double>(src2.name(), 2);
	tungsten::vm::gte_rrrn<double>(m, src1.name(), src2.name(), dst.name());
	double result = m.read_register<double>(dst.name());
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_f64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_f64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<double>(src1.name(), 8);
	m.write_register<double>(dst.name(), 2);
	tungsten::vm::gte_rcrn<double>(m, src1.name(), 2, dst.name());
	double result = m.read_register<double>(dst.name());
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_f64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("gte_f64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_u8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_u8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(src2.name(), 2);
	tungsten::vm::eq_rrrn<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
}
TEST_CASE("eq_u8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_u8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(dst.name(), 2);
	tungsten::vm::eq_rcrn<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
}
TEST_CASE("eq_u8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_u8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_s8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_s8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(src2.name(), 2);
	tungsten::vm::eq_rrrn<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
}
TEST_CASE("eq_s8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_s8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(dst.name(), 2);
	tungsten::vm::eq_rcrn<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
}
TEST_CASE("eq_s8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_s8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_u16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_u16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(src2.name(), 2);
	tungsten::vm::eq_rrrn<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
}
TEST_CASE("eq_u16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_u16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(dst.name(), 2);
	tungsten::vm::eq_rcrn<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
}
TEST_CASE("eq_u16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_u16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_s16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_s16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(src2.name(), 2);
	tungsten::vm::eq_rrrn<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
}
TEST_CASE("eq_s16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_s16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(dst.name(), 2);
	tungsten::vm::eq_rcrn<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
}
TEST_CASE("eq_s16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_s16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_u32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_u32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(src2.name(), 2);
	tungsten::vm::eq_rrrn<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
}
TEST_CASE("eq_u32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_u32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(dst.name(), 2);
	tungsten::vm::eq_rcrn<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
}
TEST_CASE("eq_u32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_u32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_s32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_s32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(src2.name(), 2);
	tungsten::vm::eq_rrrn<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
}
TEST_CASE("eq_s32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_s32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(dst.name(), 2);
	tungsten::vm::eq_rcrn<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
}
TEST_CASE("eq_s32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_s32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_u64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_u64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(src2.name(), 2);
	tungsten::vm::eq_rrrn<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
}
TEST_CASE("eq_u64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_u64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(dst.name(), 2);
	tungsten::vm::eq_rcrn<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
}
TEST_CASE("eq_u64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_u64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_s64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_s64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(src2.name(), 2);
	tungsten::vm::eq_rrrn<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
}
TEST_CASE("eq_s64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_s64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(dst.name(), 2);
	tungsten::vm::eq_rcrn<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
}
TEST_CASE("eq_s64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_s64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_f32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_f32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<float>(src1.name(), 8);
	m.write_register<float>(src2.name(), 2);
	tungsten::vm::eq_rrrn<float>(m, src1.name(), src2.name(), dst.name());
	float result = m.read_register<float>(dst.name());
}
TEST_CASE("eq_f32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_f32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<float>(src1.name(), 8);
	m.write_register<float>(dst.name(), 2);
	tungsten::vm::eq_rcrn<float>(m, src1.name(), 2, dst.name());
	float result = m.read_register<float>(dst.name());
}
TEST_CASE("eq_f32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_f32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_f64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_f64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<double>(src1.name(), 8);
	m.write_register<double>(src2.name(), 2);
	tungsten::vm::eq_rrrn<double>(m, src1.name(), src2.name(), dst.name());
	double result = m.read_register<double>(dst.name());
}
TEST_CASE("eq_f64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_f64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<double>(src1.name(), 8);
	m.write_register<double>(dst.name(), 2);
	tungsten::vm::eq_rcrn<double>(m, src1.name(), 2, dst.name());
	double result = m.read_register<double>(dst.name());
}
TEST_CASE("eq_f64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("eq_f64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_u8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_u8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(src2.name(), 2);
	tungsten::vm::ne_rrrn<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_u8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_u8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(dst.name(), 2);
	tungsten::vm::ne_rcrn<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_u8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_u8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_s8_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_s8_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(src2.name(), 2);
	tungsten::vm::ne_rrrn<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s8_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_s8_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(dst.name(), 2);
	tungsten::vm::ne_rcrn<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s8_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_s8_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_u16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_u16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(src2.name(), 2);
	tungsten::vm::ne_rrrn<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_u16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_u16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(dst.name(), 2);
	tungsten::vm::ne_rcrn<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_u16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_u16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_s16_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_s16_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(src2.name(), 2);
	tungsten::vm::ne_rrrn<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s16_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_s16_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(dst.name(), 2);
	tungsten::vm::ne_rcrn<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s16_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_s16_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_u32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_u32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(src2.name(), 2);
	tungsten::vm::ne_rrrn<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_u32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_u32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(dst.name(), 2);
	tungsten::vm::ne_rcrn<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_u32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_u32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_s32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_s32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(src2.name(), 2);
	tungsten::vm::ne_rrrn<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_s32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(dst.name(), 2);
	tungsten::vm::ne_rcrn<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_s32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_u64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_u64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(src2.name(), 2);
	tungsten::vm::ne_rrrn<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_u64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_u64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(dst.name(), 2);
	tungsten::vm::ne_rcrn<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_u64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_u64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_s64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_s64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(src2.name(), 2);
	tungsten::vm::ne_rrrn<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_s64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(dst.name(), 2);
	tungsten::vm::ne_rcrn<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_s64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_f32_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_f32_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<float>(src1.name(), 8);
	m.write_register<float>(src2.name(), 2);
	tungsten::vm::ne_rrrn<float>(m, src1.name(), src2.name(), dst.name());
	float result = m.read_register<float>(dst.name());
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_f32_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_f32_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<float>(src1.name(), 8);
	m.write_register<float>(dst.name(), 2);
	tungsten::vm::ne_rcrn<float>(m, src1.name(), 2, dst.name());
	float result = m.read_register<float>(dst.name());
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_f32_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_f32_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_f64_rrmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_f64_rrrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<double>(src1.name(), 8);
	m.write_register<double>(src2.name(), 2);
	tungsten::vm::ne_rrrn<double>(m, src1.name(), src2.name(), dst.name());
	double result = m.read_register<double>(dst.name());
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_f64_rcmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_f64_rcrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<double>(src1.name(), 8);
	m.write_register<double>(dst.name(), 2);
	tungsten::vm::ne_rcrn<double>(m, src1.name(), 2, dst.name());
	double result = m.read_register<double>(dst.name());
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_f64_crmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("ne_f64_crrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("alloc_u8_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::size_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,dst.name()) = 10;
	tungsten::vm::alloc_nnmn<std::uint8_t>(m, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
}
TEST_CASE("zero_u8_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,dst.name()) = 10;
	tungsten::vm::zero_nnmn<std::uint8_t>(m, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
}
TEST_CASE("inc_u8_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,dst.name()) = 10;
	tungsten::vm::inc_nnmn<std::uint8_t>(m, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_u8_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,dst.name()) = 10;
	tungsten::vm::dec_nnmn<std::uint8_t>(m, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("not_u8_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,dst.name()) = 10;
	tungsten::vm::not_nnmn<std::uint8_t>(m, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
}
TEST_CASE("alloc_u8_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	m.write_register<std::uint8_t>(dst.name(), 10);
	tungsten::vm::alloc_nnrn<std::uint8_t>(m, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
}
TEST_CASE("zero_u8_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	m.write_register<std::uint8_t>(dst.name(), 10);
	tungsten::vm::zero_nnrn<std::uint8_t>(m, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
}
TEST_CASE("inc_u8_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	m.write_register<std::uint8_t>(dst.name(), 10);
	tungsten::vm::inc_nnrn<std::uint8_t>(m, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_u8_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	m.write_register<std::uint8_t>(dst.name(), 10);
	tungsten::vm::dec_nnrn<std::uint8_t>(m, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("not_u8_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	m.write_register<std::uint8_t>(dst.name(), 10);
	tungsten::vm::not_nnrn<std::uint8_t>(m, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
}
TEST_CASE("alloc_s8_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::size_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,dst.name()) = 10;
	tungsten::vm::alloc_nnmn<std::int8_t>(m, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
}
TEST_CASE("zero_s8_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,dst.name()) = 10;
	tungsten::vm::zero_nnmn<std::int8_t>(m, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
}
TEST_CASE("inc_s8_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,dst.name()) = 10;
	tungsten::vm::inc_nnmn<std::int8_t>(m, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_s8_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,dst.name()) = 10;
	tungsten::vm::dec_nnmn<std::int8_t>(m, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("not_s8_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,dst.name()) = 10;
	tungsten::vm::not_nnmn<std::int8_t>(m, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
}
TEST_CASE("alloc_s8_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	m.write_register<std::int8_t>(dst.name(), 10);
	tungsten::vm::alloc_nnrn<std::int8_t>(m, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
}
TEST_CASE("zero_s8_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	m.write_register<std::int8_t>(dst.name(), 10);
	tungsten::vm::zero_nnrn<std::int8_t>(m, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
}
TEST_CASE("inc_s8_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	m.write_register<std::int8_t>(dst.name(), 10);
	tungsten::vm::inc_nnrn<std::int8_t>(m, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_s8_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	m.write_register<std::int8_t>(dst.name(), 10);
	tungsten::vm::dec_nnrn<std::int8_t>(m, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("not_s8_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	m.write_register<std::int8_t>(dst.name(), 10);
	tungsten::vm::not_nnrn<std::int8_t>(m, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
}
TEST_CASE("alloc_u16_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::size_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,dst.name()) = 10;
	tungsten::vm::alloc_nnmn<std::uint16_t>(m, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
}
TEST_CASE("zero_u16_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,dst.name()) = 10;
	tungsten::vm::zero_nnmn<std::uint16_t>(m, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
}
TEST_CASE("inc_u16_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,dst.name()) = 10;
	tungsten::vm::inc_nnmn<std::uint16_t>(m, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_u16_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,dst.name()) = 10;
	tungsten::vm::dec_nnmn<std::uint16_t>(m, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("not_u16_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,dst.name()) = 10;
	tungsten::vm::not_nnmn<std::uint16_t>(m, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
}
TEST_CASE("alloc_u16_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	m.write_register<std::uint16_t>(dst.name(), 10);
	tungsten::vm::alloc_nnrn<std::uint16_t>(m, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
}
TEST_CASE("zero_u16_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	m.write_register<std::uint16_t>(dst.name(), 10);
	tungsten::vm::zero_nnrn<std::uint16_t>(m, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
}
TEST_CASE("inc_u16_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	m.write_register<std::uint16_t>(dst.name(), 10);
	tungsten::vm::inc_nnrn<std::uint16_t>(m, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_u16_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	m.write_register<std::uint16_t>(dst.name(), 10);
	tungsten::vm::dec_nnrn<std::uint16_t>(m, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("not_u16_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	m.write_register<std::uint16_t>(dst.name(), 10);
	tungsten::vm::not_nnrn<std::uint16_t>(m, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
}
TEST_CASE("alloc_s16_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::size_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,dst.name()) = 10;
	tungsten::vm::alloc_nnmn<std::int16_t>(m, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
}
TEST_CASE("zero_s16_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,dst.name()) = 10;
	tungsten::vm::zero_nnmn<std::int16_t>(m, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
}
TEST_CASE("inc_s16_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,dst.name()) = 10;
	tungsten::vm::inc_nnmn<std::int16_t>(m, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_s16_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,dst.name()) = 10;
	tungsten::vm::dec_nnmn<std::int16_t>(m, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("not_s16_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,dst.name()) = 10;
	tungsten::vm::not_nnmn<std::int16_t>(m, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
}
TEST_CASE("alloc_s16_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	m.write_register<std::int16_t>(dst.name(), 10);
	tungsten::vm::alloc_nnrn<std::int16_t>(m, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
}
TEST_CASE("zero_s16_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	m.write_register<std::int16_t>(dst.name(), 10);
	tungsten::vm::zero_nnrn<std::int16_t>(m, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
}
TEST_CASE("inc_s16_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	m.write_register<std::int16_t>(dst.name(), 10);
	tungsten::vm::inc_nnrn<std::int16_t>(m, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_s16_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	m.write_register<std::int16_t>(dst.name(), 10);
	tungsten::vm::dec_nnrn<std::int16_t>(m, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("not_s16_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	m.write_register<std::int16_t>(dst.name(), 10);
	tungsten::vm::not_nnrn<std::int16_t>(m, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
}
TEST_CASE("alloc_u32_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::size_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,dst.name()) = 10;
	tungsten::vm::alloc_nnmn<std::uint32_t>(m, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
}
TEST_CASE("zero_u32_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,dst.name()) = 10;
	tungsten::vm::zero_nnmn<std::uint32_t>(m, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
}
TEST_CASE("inc_u32_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,dst.name()) = 10;
	tungsten::vm::inc_nnmn<std::uint32_t>(m, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_u32_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,dst.name()) = 10;
	tungsten::vm::dec_nnmn<std::uint32_t>(m, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("not_u32_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,dst.name()) = 10;
	tungsten::vm::not_nnmn<std::uint32_t>(m, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
}
TEST_CASE("alloc_u32_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	m.write_register<std::uint32_t>(dst.name(), 10);
	tungsten::vm::alloc_nnrn<std::uint32_t>(m, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
}
TEST_CASE("zero_u32_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	m.write_register<std::uint32_t>(dst.name(), 10);
	tungsten::vm::zero_nnrn<std::uint32_t>(m, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
}
TEST_CASE("inc_u32_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	m.write_register<std::uint32_t>(dst.name(), 10);
	tungsten::vm::inc_nnrn<std::uint32_t>(m, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_u32_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	m.write_register<std::uint32_t>(dst.name(), 10);
	tungsten::vm::dec_nnrn<std::uint32_t>(m, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("not_u32_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	m.write_register<std::uint32_t>(dst.name(), 10);
	tungsten::vm::not_nnrn<std::uint32_t>(m, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
}
TEST_CASE("alloc_s32_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::size_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,dst.name()) = 10;
	tungsten::vm::alloc_nnmn<std::int32_t>(m, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
}
TEST_CASE("zero_s32_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,dst.name()) = 10;
	tungsten::vm::zero_nnmn<std::int32_t>(m, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
}
TEST_CASE("inc_s32_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,dst.name()) = 10;
	tungsten::vm::inc_nnmn<std::int32_t>(m, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_s32_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,dst.name()) = 10;
	tungsten::vm::dec_nnmn<std::int32_t>(m, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("not_s32_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,dst.name()) = 10;
	tungsten::vm::not_nnmn<std::int32_t>(m, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
}
TEST_CASE("alloc_s32_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	m.write_register<std::int32_t>(dst.name(), 10);
	tungsten::vm::alloc_nnrn<std::int32_t>(m, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
}
TEST_CASE("zero_s32_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	m.write_register<std::int32_t>(dst.name(), 10);
	tungsten::vm::zero_nnrn<std::int32_t>(m, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
}
TEST_CASE("inc_s32_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	m.write_register<std::int32_t>(dst.name(), 10);
	tungsten::vm::inc_nnrn<std::int32_t>(m, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_s32_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	m.write_register<std::int32_t>(dst.name(), 10);
	tungsten::vm::dec_nnrn<std::int32_t>(m, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("not_s32_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	m.write_register<std::int32_t>(dst.name(), 10);
	tungsten::vm::not_nnrn<std::int32_t>(m, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
}
TEST_CASE("alloc_u64_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::size_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,dst.name()) = 10;
	tungsten::vm::alloc_nnmn<std::uint64_t>(m, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
}
TEST_CASE("zero_u64_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,dst.name()) = 10;
	tungsten::vm::zero_nnmn<std::uint64_t>(m, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
}
TEST_CASE("inc_u64_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,dst.name()) = 10;
	tungsten::vm::inc_nnmn<std::uint64_t>(m, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_u64_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,dst.name()) = 10;
	tungsten::vm::dec_nnmn<std::uint64_t>(m, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("not_u64_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,dst.name()) = 10;
	tungsten::vm::not_nnmn<std::uint64_t>(m, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
}
TEST_CASE("alloc_u64_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	m.write_register<std::uint64_t>(dst.name(), 10);
	tungsten::vm::alloc_nnrn<std::uint64_t>(m, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
}
TEST_CASE("zero_u64_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	m.write_register<std::uint64_t>(dst.name(), 10);
	tungsten::vm::zero_nnrn<std::uint64_t>(m, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
}
TEST_CASE("inc_u64_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	m.write_register<std::uint64_t>(dst.name(), 10);
	tungsten::vm::inc_nnrn<std::uint64_t>(m, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_u64_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	m.write_register<std::uint64_t>(dst.name(), 10);
	tungsten::vm::dec_nnrn<std::uint64_t>(m, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("not_u64_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	m.write_register<std::uint64_t>(dst.name(), 10);
	tungsten::vm::not_nnrn<std::uint64_t>(m, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
}
TEST_CASE("alloc_s64_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::size_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,dst.name()) = 10;
	tungsten::vm::alloc_nnmn<std::int64_t>(m, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
}
TEST_CASE("zero_s64_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,dst.name()) = 10;
	tungsten::vm::zero_nnmn<std::int64_t>(m, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
}
TEST_CASE("inc_s64_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,dst.name()) = 10;
	tungsten::vm::inc_nnmn<std::int64_t>(m, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_s64_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,dst.name()) = 10;
	tungsten::vm::dec_nnmn<std::int64_t>(m, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("not_s64_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,dst.name()) = 10;
	tungsten::vm::not_nnmn<std::int64_t>(m, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
}
TEST_CASE("alloc_s64_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	m.write_register<std::int64_t>(dst.name(), 10);
	tungsten::vm::alloc_nnrn<std::int64_t>(m, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
}
TEST_CASE("zero_s64_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	m.write_register<std::int64_t>(dst.name(), 10);
	tungsten::vm::zero_nnrn<std::int64_t>(m, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
}
TEST_CASE("inc_s64_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	m.write_register<std::int64_t>(dst.name(), 10);
	tungsten::vm::inc_nnrn<std::int64_t>(m, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_s64_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	m.write_register<std::int64_t>(dst.name(), 10);
	tungsten::vm::dec_nnrn<std::int64_t>(m, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("not_s64_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	m.write_register<std::int64_t>(dst.name(), 10);
	tungsten::vm::not_nnrn<std::int64_t>(m, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
}
TEST_CASE("alloc_f32_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::size_t>(m,dst.name());
	*tungsten::memory_address<float>(m,dst.name()) = 10;
	tungsten::vm::alloc_nnmn<float>(m, dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
}
TEST_CASE("zero_f32_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,dst.name()) = 10;
	tungsten::vm::zero_nnmn<float>(m, dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
}
TEST_CASE("inc_f32_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,dst.name()) = 10;
	tungsten::vm::inc_nnmn<float>(m, dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
	float expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_f32_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,dst.name()) = 10;
	tungsten::vm::dec_nnmn<float>(m, dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
	float expected = 9;
	CHECK(result == expected);
}
TEST_CASE("not_f32_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,dst.name()) = 10;
	tungsten::vm::not_nnmn<float>(m, dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
}
TEST_CASE("alloc_f32_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	m.write_register<float>(dst.name(), 10);
	tungsten::vm::alloc_nnrn<float>(m, dst.name());
	float result = m.read_register<float>(dst.name());
}
TEST_CASE("zero_f32_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	m.write_register<float>(dst.name(), 10);
	tungsten::vm::zero_nnrn<float>(m, dst.name());
	float result = m.read_register<float>(dst.name());
}
TEST_CASE("inc_f32_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	m.write_register<float>(dst.name(), 10);
	tungsten::vm::inc_nnrn<float>(m, dst.name());
	float result = m.read_register<float>(dst.name());
	float expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_f32_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	m.write_register<float>(dst.name(), 10);
	tungsten::vm::dec_nnrn<float>(m, dst.name());
	float result = m.read_register<float>(dst.name());
	float expected = 9;
	CHECK(result == expected);
}
TEST_CASE("not_f32_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	m.write_register<float>(dst.name(), 10);
	tungsten::vm::not_nnrn<float>(m, dst.name());
	float result = m.read_register<float>(dst.name());
}
TEST_CASE("alloc_f64_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::size_t>(m,dst.name());
	*tungsten::memory_address<double>(m,dst.name()) = 10;
	tungsten::vm::alloc_nnmn<double>(m, dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
}
TEST_CASE("zero_f64_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,dst.name()) = 10;
	tungsten::vm::zero_nnmn<double>(m, dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
}
TEST_CASE("inc_f64_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,dst.name()) = 10;
	tungsten::vm::inc_nnmn<double>(m, dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
	double expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_f64_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,dst.name()) = 10;
	tungsten::vm::dec_nnmn<double>(m, dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
	double expected = 9;
	CHECK(result == expected);
}
TEST_CASE("not_f64_nnmn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,dst.name()) = 10;
	tungsten::vm::not_nnmn<double>(m, dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
}
TEST_CASE("alloc_f64_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	m.write_register<double>(dst.name(), 10);
	tungsten::vm::alloc_nnrn<double>(m, dst.name());
	double result = m.read_register<double>(dst.name());
}
TEST_CASE("zero_f64_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	m.write_register<double>(dst.name(), 10);
	tungsten::vm::zero_nnrn<double>(m, dst.name());
	double result = m.read_register<double>(dst.name());
}
TEST_CASE("inc_f64_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	m.write_register<double>(dst.name(), 10);
	tungsten::vm::inc_nnrn<double>(m, dst.name());
	double result = m.read_register<double>(dst.name());
	double expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_f64_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	m.write_register<double>(dst.name(), 10);
	tungsten::vm::dec_nnrn<double>(m, dst.name());
	double result = m.read_register<double>(dst.name());
	double expected = 9;
	CHECK(result == expected);
}
TEST_CASE("not_f64_nnrn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	m.write_register<double>(dst.name(), 10);
	tungsten::vm::not_nnrn<double>(m, dst.name());
	double result = m.read_register<double>(dst.name());
}
TEST_CASE("br_u8_mnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u8_mmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u8_mmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u8_mrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u8_mrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("br_u8_rnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u8_rmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u8_rmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u8_rrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u8_rrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("br_u8_cnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u8_cmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u8_cmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u8_crnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u8_crnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("br_s8_mnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s8_mmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s8_mmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s8_mrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s8_mrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("br_s8_rnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s8_rmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s8_rmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s8_rrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s8_rrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("br_s8_cnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s8_cmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s8_cmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s8_crnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s8_crnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("br_u16_mnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u16_mmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u16_mmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u16_mrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u16_mrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("br_u16_rnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u16_rmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u16_rmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u16_rrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u16_rrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("br_u16_cnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u16_cmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u16_cmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u16_crnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u16_crnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("br_s16_mnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s16_mmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s16_mmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s16_mrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s16_mrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("br_s16_rnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s16_rmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s16_rmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s16_rrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s16_rrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("br_s16_cnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s16_cmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s16_cmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s16_crnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s16_crnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("br_u32_mnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u32_mmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u32_mmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u32_mrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u32_mrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("br_u32_rnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u32_rmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u32_rmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u32_rrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u32_rrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("br_u32_cnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u32_cmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u32_cmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u32_crnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u32_crnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("br_s32_mnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s32_mmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s32_mmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s32_mrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s32_mrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("br_s32_rnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s32_rmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s32_rmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s32_rrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s32_rrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("br_s32_cnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s32_cmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s32_cmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s32_crnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s32_crnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("br_u64_mnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u64_mmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u64_mmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u64_mrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u64_mrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("br_u64_rnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u64_rmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u64_rmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u64_rrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u64_rrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("br_u64_cnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u64_cmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u64_cmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_u64_crnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_u64_crnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("br_s64_mnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s64_mmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s64_mmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s64_mrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s64_mrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("br_s64_rnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s64_rmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s64_rmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s64_rrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s64_rrnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("br_s64_cnnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s64_cmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s64_cmnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brz_s64_crnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
TEST_CASE("brn_s64_crnn", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
}
