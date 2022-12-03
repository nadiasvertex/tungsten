#include "eval/opcodes.h"
#include "eval/serdes.h"
#include "eval/binops.h"
#include "eval/unops.h"
#include <cstdint>
#include <catch2/catch_test_macros.hpp>
TEST_CASE("shl_u8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint8_t>(m,src2.name()) = 2;
	tungsten::vm::shl_mmm<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	tungsten::vm::shl_mcm<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u8_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(src2.name(), 2);
	tungsten::vm::shl_rrr<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u8_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(dst.name(), 2);
	tungsten::vm::shl_rcr<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int8_t>(m,src2.name()) = 2;
	tungsten::vm::shl_mmm<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	tungsten::vm::shl_mcm<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s8_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(src2.name(), 2);
	tungsten::vm::shl_rrr<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s8_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(dst.name(), 2);
	tungsten::vm::shl_rcr<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint16_t>(m,src2.name()) = 2;
	tungsten::vm::shl_mmm<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	tungsten::vm::shl_mcm<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u16_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(src2.name(), 2);
	tungsten::vm::shl_rrr<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u16_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(dst.name(), 2);
	tungsten::vm::shl_rcr<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int16_t>(m,src2.name()) = 2;
	tungsten::vm::shl_mmm<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	tungsten::vm::shl_mcm<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s16_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(src2.name(), 2);
	tungsten::vm::shl_rrr<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s16_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(dst.name(), 2);
	tungsten::vm::shl_rcr<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint32_t>(m,src2.name()) = 2;
	tungsten::vm::shl_mmm<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	tungsten::vm::shl_mcm<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u32_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(src2.name(), 2);
	tungsten::vm::shl_rrr<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u32_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(dst.name(), 2);
	tungsten::vm::shl_rcr<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int32_t>(m,src2.name()) = 2;
	tungsten::vm::shl_mmm<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	tungsten::vm::shl_mcm<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s32_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(src2.name(), 2);
	tungsten::vm::shl_rrr<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s32_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(dst.name(), 2);
	tungsten::vm::shl_rcr<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint64_t>(m,src2.name()) = 2;
	tungsten::vm::shl_mmm<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	tungsten::vm::shl_mcm<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u64_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(src2.name(), 2);
	tungsten::vm::shl_rrr<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_u64_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(dst.name(), 2);
	tungsten::vm::shl_rcr<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int64_t>(m,src2.name()) = 2;
	tungsten::vm::shl_mmm<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	tungsten::vm::shl_mcm<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s64_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(src2.name(), 2);
	tungsten::vm::shl_rrr<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shl_s64_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(dst.name(), 2);
	tungsten::vm::shl_rcr<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 32;
	CHECK(result == expected);
}
TEST_CASE("shr_u8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint8_t>(m,src2.name()) = 2;
	tungsten::vm::shr_mmm<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	tungsten::vm::shr_mcm<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u8_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(src2.name(), 2);
	tungsten::vm::shr_rrr<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u8_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(dst.name(), 2);
	tungsten::vm::shr_rcr<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int8_t>(m,src2.name()) = 2;
	tungsten::vm::shr_mmm<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	tungsten::vm::shr_mcm<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s8_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(src2.name(), 2);
	tungsten::vm::shr_rrr<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s8_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(dst.name(), 2);
	tungsten::vm::shr_rcr<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint16_t>(m,src2.name()) = 2;
	tungsten::vm::shr_mmm<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	tungsten::vm::shr_mcm<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u16_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(src2.name(), 2);
	tungsten::vm::shr_rrr<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u16_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(dst.name(), 2);
	tungsten::vm::shr_rcr<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int16_t>(m,src2.name()) = 2;
	tungsten::vm::shr_mmm<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	tungsten::vm::shr_mcm<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s16_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(src2.name(), 2);
	tungsten::vm::shr_rrr<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s16_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(dst.name(), 2);
	tungsten::vm::shr_rcr<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint32_t>(m,src2.name()) = 2;
	tungsten::vm::shr_mmm<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	tungsten::vm::shr_mcm<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u32_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(src2.name(), 2);
	tungsten::vm::shr_rrr<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u32_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(dst.name(), 2);
	tungsten::vm::shr_rcr<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int32_t>(m,src2.name()) = 2;
	tungsten::vm::shr_mmm<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	tungsten::vm::shr_mcm<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s32_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(src2.name(), 2);
	tungsten::vm::shr_rrr<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s32_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(dst.name(), 2);
	tungsten::vm::shr_rcr<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint64_t>(m,src2.name()) = 2;
	tungsten::vm::shr_mmm<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	tungsten::vm::shr_mcm<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u64_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(src2.name(), 2);
	tungsten::vm::shr_rrr<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_u64_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(dst.name(), 2);
	tungsten::vm::shr_rcr<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int64_t>(m,src2.name()) = 2;
	tungsten::vm::shr_mmm<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	tungsten::vm::shr_mcm<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s64_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(src2.name(), 2);
	tungsten::vm::shr_rrr<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("shr_s64_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(dst.name(), 2);
	tungsten::vm::shr_rcr<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 2;
	CHECK(result == expected);
}
TEST_CASE("binary_and_u8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint8_t>(m,src2.name()) = 2;
	tungsten::vm::binary_and_mmm<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
}
TEST_CASE("binary_and_u8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	tungsten::vm::binary_and_mcm<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
}
TEST_CASE("binary_and_u8_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(src2.name(), 2);
	tungsten::vm::binary_and_rrr<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
}
TEST_CASE("binary_and_u8_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(dst.name(), 2);
	tungsten::vm::binary_and_rcr<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
}
TEST_CASE("binary_and_s8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int8_t>(m,src2.name()) = 2;
	tungsten::vm::binary_and_mmm<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
}
TEST_CASE("binary_and_s8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	tungsten::vm::binary_and_mcm<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
}
TEST_CASE("binary_and_s8_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(src2.name(), 2);
	tungsten::vm::binary_and_rrr<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
}
TEST_CASE("binary_and_s8_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(dst.name(), 2);
	tungsten::vm::binary_and_rcr<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
}
TEST_CASE("binary_and_u16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint16_t>(m,src2.name()) = 2;
	tungsten::vm::binary_and_mmm<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
}
TEST_CASE("binary_and_u16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	tungsten::vm::binary_and_mcm<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
}
TEST_CASE("binary_and_u16_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(src2.name(), 2);
	tungsten::vm::binary_and_rrr<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
}
TEST_CASE("binary_and_u16_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(dst.name(), 2);
	tungsten::vm::binary_and_rcr<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
}
TEST_CASE("binary_and_s16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int16_t>(m,src2.name()) = 2;
	tungsten::vm::binary_and_mmm<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
}
TEST_CASE("binary_and_s16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	tungsten::vm::binary_and_mcm<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
}
TEST_CASE("binary_and_s16_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(src2.name(), 2);
	tungsten::vm::binary_and_rrr<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
}
TEST_CASE("binary_and_s16_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(dst.name(), 2);
	tungsten::vm::binary_and_rcr<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
}
TEST_CASE("binary_and_u32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint32_t>(m,src2.name()) = 2;
	tungsten::vm::binary_and_mmm<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
}
TEST_CASE("binary_and_u32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	tungsten::vm::binary_and_mcm<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
}
TEST_CASE("binary_and_u32_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(src2.name(), 2);
	tungsten::vm::binary_and_rrr<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
}
TEST_CASE("binary_and_u32_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(dst.name(), 2);
	tungsten::vm::binary_and_rcr<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
}
TEST_CASE("binary_and_s32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int32_t>(m,src2.name()) = 2;
	tungsten::vm::binary_and_mmm<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
}
TEST_CASE("binary_and_s32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	tungsten::vm::binary_and_mcm<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
}
TEST_CASE("binary_and_s32_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(src2.name(), 2);
	tungsten::vm::binary_and_rrr<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
}
TEST_CASE("binary_and_s32_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(dst.name(), 2);
	tungsten::vm::binary_and_rcr<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
}
TEST_CASE("binary_and_u64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint64_t>(m,src2.name()) = 2;
	tungsten::vm::binary_and_mmm<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
}
TEST_CASE("binary_and_u64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	tungsten::vm::binary_and_mcm<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
}
TEST_CASE("binary_and_u64_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(src2.name(), 2);
	tungsten::vm::binary_and_rrr<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
}
TEST_CASE("binary_and_u64_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(dst.name(), 2);
	tungsten::vm::binary_and_rcr<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
}
TEST_CASE("binary_and_s64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int64_t>(m,src2.name()) = 2;
	tungsten::vm::binary_and_mmm<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
}
TEST_CASE("binary_and_s64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	tungsten::vm::binary_and_mcm<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
}
TEST_CASE("binary_and_s64_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(src2.name(), 2);
	tungsten::vm::binary_and_rrr<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
}
TEST_CASE("binary_and_s64_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(dst.name(), 2);
	tungsten::vm::binary_and_rcr<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
}
TEST_CASE("binary_or_u8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint8_t>(m,src2.name()) = 2;
	tungsten::vm::binary_or_mmm<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	tungsten::vm::binary_or_mcm<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u8_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(src2.name(), 2);
	tungsten::vm::binary_or_rrr<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u8_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(dst.name(), 2);
	tungsten::vm::binary_or_rcr<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int8_t>(m,src2.name()) = 2;
	tungsten::vm::binary_or_mmm<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	tungsten::vm::binary_or_mcm<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s8_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(src2.name(), 2);
	tungsten::vm::binary_or_rrr<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s8_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(dst.name(), 2);
	tungsten::vm::binary_or_rcr<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint16_t>(m,src2.name()) = 2;
	tungsten::vm::binary_or_mmm<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	tungsten::vm::binary_or_mcm<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u16_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(src2.name(), 2);
	tungsten::vm::binary_or_rrr<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u16_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(dst.name(), 2);
	tungsten::vm::binary_or_rcr<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int16_t>(m,src2.name()) = 2;
	tungsten::vm::binary_or_mmm<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	tungsten::vm::binary_or_mcm<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s16_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(src2.name(), 2);
	tungsten::vm::binary_or_rrr<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s16_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(dst.name(), 2);
	tungsten::vm::binary_or_rcr<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint32_t>(m,src2.name()) = 2;
	tungsten::vm::binary_or_mmm<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	tungsten::vm::binary_or_mcm<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u32_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(src2.name(), 2);
	tungsten::vm::binary_or_rrr<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u32_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(dst.name(), 2);
	tungsten::vm::binary_or_rcr<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int32_t>(m,src2.name()) = 2;
	tungsten::vm::binary_or_mmm<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	tungsten::vm::binary_or_mcm<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s32_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(src2.name(), 2);
	tungsten::vm::binary_or_rrr<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s32_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(dst.name(), 2);
	tungsten::vm::binary_or_rcr<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint64_t>(m,src2.name()) = 2;
	tungsten::vm::binary_or_mmm<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	tungsten::vm::binary_or_mcm<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u64_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(src2.name(), 2);
	tungsten::vm::binary_or_rrr<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_u64_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(dst.name(), 2);
	tungsten::vm::binary_or_rcr<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int64_t>(m,src2.name()) = 2;
	tungsten::vm::binary_or_mmm<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	tungsten::vm::binary_or_mcm<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s64_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(src2.name(), 2);
	tungsten::vm::binary_or_rrr<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_or_s64_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(dst.name(), 2);
	tungsten::vm::binary_or_rcr<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint8_t>(m,src2.name()) = 2;
	tungsten::vm::binary_xor_mmm<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	tungsten::vm::binary_xor_mcm<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u8_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(src2.name(), 2);
	tungsten::vm::binary_xor_rrr<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u8_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint8_t>(src1.name(), 8);
	m.write_register<std::uint8_t>(dst.name(), 2);
	tungsten::vm::binary_xor_rcr<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int8_t>(m,src2.name()) = 2;
	tungsten::vm::binary_xor_mmm<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	tungsten::vm::binary_xor_mcm<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s8_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(src2.name(), 2);
	tungsten::vm::binary_xor_rrr<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s8_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int8_t>(src1.name(), 8);
	m.write_register<std::int8_t>(dst.name(), 2);
	tungsten::vm::binary_xor_rcr<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint16_t>(m,src2.name()) = 2;
	tungsten::vm::binary_xor_mmm<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	tungsten::vm::binary_xor_mcm<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u16_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(src2.name(), 2);
	tungsten::vm::binary_xor_rrr<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u16_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint16_t>(src1.name(), 8);
	m.write_register<std::uint16_t>(dst.name(), 2);
	tungsten::vm::binary_xor_rcr<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int16_t>(m,src2.name()) = 2;
	tungsten::vm::binary_xor_mmm<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	tungsten::vm::binary_xor_mcm<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s16_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(src2.name(), 2);
	tungsten::vm::binary_xor_rrr<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s16_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int16_t>(src1.name(), 8);
	m.write_register<std::int16_t>(dst.name(), 2);
	tungsten::vm::binary_xor_rcr<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint32_t>(m,src2.name()) = 2;
	tungsten::vm::binary_xor_mmm<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	tungsten::vm::binary_xor_mcm<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u32_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(src2.name(), 2);
	tungsten::vm::binary_xor_rrr<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u32_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint32_t>(src1.name(), 8);
	m.write_register<std::uint32_t>(dst.name(), 2);
	tungsten::vm::binary_xor_rcr<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int32_t>(m,src2.name()) = 2;
	tungsten::vm::binary_xor_mmm<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	tungsten::vm::binary_xor_mcm<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s32_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(src2.name(), 2);
	tungsten::vm::binary_xor_rrr<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s32_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int32_t>(src1.name(), 8);
	m.write_register<std::int32_t>(dst.name(), 2);
	tungsten::vm::binary_xor_rcr<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint64_t>(m,src2.name()) = 2;
	tungsten::vm::binary_xor_mmm<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	tungsten::vm::binary_xor_mcm<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u64_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(src2.name(), 2);
	tungsten::vm::binary_xor_rrr<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_u64_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::uint64_t>(src1.name(), 8);
	m.write_register<std::uint64_t>(dst.name(), 2);
	tungsten::vm::binary_xor_rcr<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int64_t>(m,src2.name()) = 2;
	tungsten::vm::binary_xor_mmm<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	tungsten::vm::binary_xor_mcm<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s64_rrr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(src2.name(), 2);
	tungsten::vm::binary_xor_rrr<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("binary_xor_s64_rcr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	m.write_register<std::int64_t>(src1.name(), 8);
	m.write_register<std::int64_t>(dst.name(), 2);
	tungsten::vm::binary_xor_rcr<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint8_t>(m,src2.name()) = 2;
	tungsten::vm::add_mmm<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	tungsten::vm::add_mcm<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int8_t>(m,src2.name()) = 2;
	tungsten::vm::add_mmm<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	tungsten::vm::add_mcm<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint16_t>(m,src2.name()) = 2;
	tungsten::vm::add_mmm<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	tungsten::vm::add_mcm<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int16_t>(m,src2.name()) = 2;
	tungsten::vm::add_mmm<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	tungsten::vm::add_mcm<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint32_t>(m,src2.name()) = 2;
	tungsten::vm::add_mmm<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	tungsten::vm::add_mcm<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int32_t>(m,src2.name()) = 2;
	tungsten::vm::add_mmm<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	tungsten::vm::add_mcm<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint64_t>(m,src2.name()) = 2;
	tungsten::vm::add_mmm<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_u64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	tungsten::vm::add_mcm<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int64_t>(m,src2.name()) = 2;
	tungsten::vm::add_mmm<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_s64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	tungsten::vm::add_mcm<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_f32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,src1.name());
	tungsten::vm::alloc_nnr<float>(m,src2.name());
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,src1.name()) = 8;
	*tungsten::memory_address<float>(m,src2.name()) = 2;
	tungsten::vm::add_mmm<float>(m, src1.name(), src2.name(), dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
	float expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_f32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,src1.name());
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,src1.name()) = 8;
	tungsten::vm::add_mcm<float>(m, src1.name(), 2, dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
	float expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_f64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,src1.name());
	tungsten::vm::alloc_nnr<double>(m,src2.name());
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,src1.name()) = 8;
	*tungsten::memory_address<double>(m,src2.name()) = 2;
	tungsten::vm::add_mmm<double>(m, src1.name(), src2.name(), dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
	double expected = 10;
	CHECK(result == expected);
}
TEST_CASE("add_f64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,src1.name());
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,src1.name()) = 8;
	tungsten::vm::add_mcm<double>(m, src1.name(), 2, dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
	double expected = 10;
	CHECK(result == expected);
}
TEST_CASE("sub_u8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint8_t>(m,src2.name()) = 2;
	tungsten::vm::sub_mmm<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_u8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	tungsten::vm::sub_mcm<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int8_t>(m,src2.name()) = 2;
	tungsten::vm::sub_mmm<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	tungsten::vm::sub_mcm<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_u16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint16_t>(m,src2.name()) = 2;
	tungsten::vm::sub_mmm<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_u16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	tungsten::vm::sub_mcm<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int16_t>(m,src2.name()) = 2;
	tungsten::vm::sub_mmm<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	tungsten::vm::sub_mcm<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_u32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint32_t>(m,src2.name()) = 2;
	tungsten::vm::sub_mmm<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_u32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	tungsten::vm::sub_mcm<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int32_t>(m,src2.name()) = 2;
	tungsten::vm::sub_mmm<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	tungsten::vm::sub_mcm<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_u64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint64_t>(m,src2.name()) = 2;
	tungsten::vm::sub_mmm<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_u64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	tungsten::vm::sub_mcm<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int64_t>(m,src2.name()) = 2;
	tungsten::vm::sub_mmm<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_s64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	tungsten::vm::sub_mcm<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_f32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,src1.name());
	tungsten::vm::alloc_nnr<float>(m,src2.name());
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,src1.name()) = 8;
	*tungsten::memory_address<float>(m,src2.name()) = 2;
	tungsten::vm::sub_mmm<float>(m, src1.name(), src2.name(), dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
	float expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_f32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,src1.name());
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,src1.name()) = 8;
	tungsten::vm::sub_mcm<float>(m, src1.name(), 2, dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
	float expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_f64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,src1.name());
	tungsten::vm::alloc_nnr<double>(m,src2.name());
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,src1.name()) = 8;
	*tungsten::memory_address<double>(m,src2.name()) = 2;
	tungsten::vm::sub_mmm<double>(m, src1.name(), src2.name(), dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
	double expected = 6;
	CHECK(result == expected);
}
TEST_CASE("sub_f64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,src1.name());
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,src1.name()) = 8;
	tungsten::vm::sub_mcm<double>(m, src1.name(), 2, dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
	double expected = 6;
	CHECK(result == expected);
}
TEST_CASE("mul_u8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint8_t>(m,src2.name()) = 2;
	tungsten::vm::mul_mmm<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_u8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	tungsten::vm::mul_mcm<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int8_t>(m,src2.name()) = 2;
	tungsten::vm::mul_mmm<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	tungsten::vm::mul_mcm<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_u16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint16_t>(m,src2.name()) = 2;
	tungsten::vm::mul_mmm<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_u16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	tungsten::vm::mul_mcm<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int16_t>(m,src2.name()) = 2;
	tungsten::vm::mul_mmm<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	tungsten::vm::mul_mcm<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_u32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint32_t>(m,src2.name()) = 2;
	tungsten::vm::mul_mmm<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_u32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	tungsten::vm::mul_mcm<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int32_t>(m,src2.name()) = 2;
	tungsten::vm::mul_mmm<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	tungsten::vm::mul_mcm<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_u64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint64_t>(m,src2.name()) = 2;
	tungsten::vm::mul_mmm<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_u64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	tungsten::vm::mul_mcm<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int64_t>(m,src2.name()) = 2;
	tungsten::vm::mul_mmm<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_s64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	tungsten::vm::mul_mcm<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_f32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,src1.name());
	tungsten::vm::alloc_nnr<float>(m,src2.name());
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,src1.name()) = 8;
	*tungsten::memory_address<float>(m,src2.name()) = 2;
	tungsten::vm::mul_mmm<float>(m, src1.name(), src2.name(), dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
	float expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_f32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,src1.name());
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,src1.name()) = 8;
	tungsten::vm::mul_mcm<float>(m, src1.name(), 2, dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
	float expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_f64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,src1.name());
	tungsten::vm::alloc_nnr<double>(m,src2.name());
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,src1.name()) = 8;
	*tungsten::memory_address<double>(m,src2.name()) = 2;
	tungsten::vm::mul_mmm<double>(m, src1.name(), src2.name(), dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
	double expected = 16;
	CHECK(result == expected);
}
TEST_CASE("mul_f64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,src1.name());
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,src1.name()) = 8;
	tungsten::vm::mul_mcm<double>(m, src1.name(), 2, dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
	double expected = 16;
	CHECK(result == expected);
}
TEST_CASE("div_u8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint8_t>(m,src2.name()) = 2;
	tungsten::vm::div_mmm<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_u8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	tungsten::vm::div_mcm<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int8_t>(m,src2.name()) = 2;
	tungsten::vm::div_mmm<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	tungsten::vm::div_mcm<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_u16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint16_t>(m,src2.name()) = 2;
	tungsten::vm::div_mmm<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_u16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	tungsten::vm::div_mcm<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int16_t>(m,src2.name()) = 2;
	tungsten::vm::div_mmm<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	tungsten::vm::div_mcm<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_u32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint32_t>(m,src2.name()) = 2;
	tungsten::vm::div_mmm<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_u32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	tungsten::vm::div_mcm<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int32_t>(m,src2.name()) = 2;
	tungsten::vm::div_mmm<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	tungsten::vm::div_mcm<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_u64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint64_t>(m,src2.name()) = 2;
	tungsten::vm::div_mmm<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_u64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	tungsten::vm::div_mcm<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int64_t>(m,src2.name()) = 2;
	tungsten::vm::div_mmm<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_s64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	tungsten::vm::div_mcm<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_f32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,src1.name());
	tungsten::vm::alloc_nnr<float>(m,src2.name());
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,src1.name()) = 8;
	*tungsten::memory_address<float>(m,src2.name()) = 2;
	tungsten::vm::div_mmm<float>(m, src1.name(), src2.name(), dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
	float expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_f32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,src1.name());
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,src1.name()) = 8;
	tungsten::vm::div_mcm<float>(m, src1.name(), 2, dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
	float expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_f64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,src1.name());
	tungsten::vm::alloc_nnr<double>(m,src2.name());
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,src1.name()) = 8;
	*tungsten::memory_address<double>(m,src2.name()) = 2;
	tungsten::vm::div_mmm<double>(m, src1.name(), src2.name(), dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
	double expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("div_f64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,src1.name());
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,src1.name()) = 8;
	tungsten::vm::div_mcm<double>(m, src1.name(), 2, dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
	double expected = 4.0;
	CHECK(result == expected);
}
TEST_CASE("lt_u8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint8_t>(m,src2.name()) = 2;
	tungsten::vm::lt_mmm<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
}
TEST_CASE("lt_u8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	tungsten::vm::lt_mcm<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
}
TEST_CASE("lt_s8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int8_t>(m,src2.name()) = 2;
	tungsten::vm::lt_mmm<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
}
TEST_CASE("lt_s8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	tungsten::vm::lt_mcm<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
}
TEST_CASE("lt_u16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint16_t>(m,src2.name()) = 2;
	tungsten::vm::lt_mmm<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
}
TEST_CASE("lt_u16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	tungsten::vm::lt_mcm<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
}
TEST_CASE("lt_s16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int16_t>(m,src2.name()) = 2;
	tungsten::vm::lt_mmm<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
}
TEST_CASE("lt_s16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	tungsten::vm::lt_mcm<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
}
TEST_CASE("lt_u32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint32_t>(m,src2.name()) = 2;
	tungsten::vm::lt_mmm<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
}
TEST_CASE("lt_u32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	tungsten::vm::lt_mcm<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
}
TEST_CASE("lt_s32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int32_t>(m,src2.name()) = 2;
	tungsten::vm::lt_mmm<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
}
TEST_CASE("lt_s32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	tungsten::vm::lt_mcm<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
}
TEST_CASE("lt_u64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint64_t>(m,src2.name()) = 2;
	tungsten::vm::lt_mmm<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
}
TEST_CASE("lt_u64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	tungsten::vm::lt_mcm<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
}
TEST_CASE("lt_s64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int64_t>(m,src2.name()) = 2;
	tungsten::vm::lt_mmm<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
}
TEST_CASE("lt_s64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	tungsten::vm::lt_mcm<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
}
TEST_CASE("lt_f32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,src1.name());
	tungsten::vm::alloc_nnr<float>(m,src2.name());
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,src1.name()) = 8;
	*tungsten::memory_address<float>(m,src2.name()) = 2;
	tungsten::vm::lt_mmm<float>(m, src1.name(), src2.name(), dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
}
TEST_CASE("lt_f32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,src1.name());
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,src1.name()) = 8;
	tungsten::vm::lt_mcm<float>(m, src1.name(), 2, dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
}
TEST_CASE("lt_f64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,src1.name());
	tungsten::vm::alloc_nnr<double>(m,src2.name());
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,src1.name()) = 8;
	*tungsten::memory_address<double>(m,src2.name()) = 2;
	tungsten::vm::lt_mmm<double>(m, src1.name(), src2.name(), dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
}
TEST_CASE("lt_f64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,src1.name());
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,src1.name()) = 8;
	tungsten::vm::lt_mcm<double>(m, src1.name(), 2, dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
}
TEST_CASE("gt_u8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint8_t>(m,src2.name()) = 2;
	tungsten::vm::gt_mmm<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_u8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	tungsten::vm::gt_mcm<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int8_t>(m,src2.name()) = 2;
	tungsten::vm::gt_mmm<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	tungsten::vm::gt_mcm<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_u16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint16_t>(m,src2.name()) = 2;
	tungsten::vm::gt_mmm<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_u16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	tungsten::vm::gt_mcm<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int16_t>(m,src2.name()) = 2;
	tungsten::vm::gt_mmm<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	tungsten::vm::gt_mcm<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_u32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint32_t>(m,src2.name()) = 2;
	tungsten::vm::gt_mmm<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_u32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	tungsten::vm::gt_mcm<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int32_t>(m,src2.name()) = 2;
	tungsten::vm::gt_mmm<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	tungsten::vm::gt_mcm<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_u64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint64_t>(m,src2.name()) = 2;
	tungsten::vm::gt_mmm<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_u64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	tungsten::vm::gt_mcm<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int64_t>(m,src2.name()) = 2;
	tungsten::vm::gt_mmm<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_s64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	tungsten::vm::gt_mcm<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_f32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,src1.name());
	tungsten::vm::alloc_nnr<float>(m,src2.name());
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,src1.name()) = 8;
	*tungsten::memory_address<float>(m,src2.name()) = 2;
	tungsten::vm::gt_mmm<float>(m, src1.name(), src2.name(), dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_f32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,src1.name());
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,src1.name()) = 8;
	tungsten::vm::gt_mcm<float>(m, src1.name(), 2, dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_f64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,src1.name());
	tungsten::vm::alloc_nnr<double>(m,src2.name());
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,src1.name()) = 8;
	*tungsten::memory_address<double>(m,src2.name()) = 2;
	tungsten::vm::gt_mmm<double>(m, src1.name(), src2.name(), dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gt_f64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,src1.name());
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,src1.name()) = 8;
	tungsten::vm::gt_mcm<double>(m, src1.name(), 2, dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("lte_u8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint8_t>(m,src2.name()) = 2;
	tungsten::vm::lte_mmm<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
}
TEST_CASE("lte_u8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	tungsten::vm::lte_mcm<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
}
TEST_CASE("lte_s8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int8_t>(m,src2.name()) = 2;
	tungsten::vm::lte_mmm<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
}
TEST_CASE("lte_s8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	tungsten::vm::lte_mcm<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
}
TEST_CASE("lte_u16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint16_t>(m,src2.name()) = 2;
	tungsten::vm::lte_mmm<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
}
TEST_CASE("lte_u16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	tungsten::vm::lte_mcm<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
}
TEST_CASE("lte_s16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int16_t>(m,src2.name()) = 2;
	tungsten::vm::lte_mmm<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
}
TEST_CASE("lte_s16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	tungsten::vm::lte_mcm<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
}
TEST_CASE("lte_u32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint32_t>(m,src2.name()) = 2;
	tungsten::vm::lte_mmm<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
}
TEST_CASE("lte_u32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	tungsten::vm::lte_mcm<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
}
TEST_CASE("lte_s32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int32_t>(m,src2.name()) = 2;
	tungsten::vm::lte_mmm<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
}
TEST_CASE("lte_s32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	tungsten::vm::lte_mcm<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
}
TEST_CASE("lte_u64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint64_t>(m,src2.name()) = 2;
	tungsten::vm::lte_mmm<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
}
TEST_CASE("lte_u64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	tungsten::vm::lte_mcm<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
}
TEST_CASE("lte_s64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int64_t>(m,src2.name()) = 2;
	tungsten::vm::lte_mmm<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
}
TEST_CASE("lte_s64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	tungsten::vm::lte_mcm<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
}
TEST_CASE("lte_f32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,src1.name());
	tungsten::vm::alloc_nnr<float>(m,src2.name());
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,src1.name()) = 8;
	*tungsten::memory_address<float>(m,src2.name()) = 2;
	tungsten::vm::lte_mmm<float>(m, src1.name(), src2.name(), dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
}
TEST_CASE("lte_f32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,src1.name());
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,src1.name()) = 8;
	tungsten::vm::lte_mcm<float>(m, src1.name(), 2, dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
}
TEST_CASE("lte_f64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,src1.name());
	tungsten::vm::alloc_nnr<double>(m,src2.name());
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,src1.name()) = 8;
	*tungsten::memory_address<double>(m,src2.name()) = 2;
	tungsten::vm::lte_mmm<double>(m, src1.name(), src2.name(), dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
}
TEST_CASE("lte_f64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,src1.name());
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,src1.name()) = 8;
	tungsten::vm::lte_mcm<double>(m, src1.name(), 2, dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
}
TEST_CASE("gte_u8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint8_t>(m,src2.name()) = 2;
	tungsten::vm::gte_mmm<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_u8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	tungsten::vm::gte_mcm<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int8_t>(m,src2.name()) = 2;
	tungsten::vm::gte_mmm<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	tungsten::vm::gte_mcm<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_u16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint16_t>(m,src2.name()) = 2;
	tungsten::vm::gte_mmm<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_u16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	tungsten::vm::gte_mcm<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int16_t>(m,src2.name()) = 2;
	tungsten::vm::gte_mmm<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	tungsten::vm::gte_mcm<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_u32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint32_t>(m,src2.name()) = 2;
	tungsten::vm::gte_mmm<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_u32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	tungsten::vm::gte_mcm<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int32_t>(m,src2.name()) = 2;
	tungsten::vm::gte_mmm<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	tungsten::vm::gte_mcm<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_u64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint64_t>(m,src2.name()) = 2;
	tungsten::vm::gte_mmm<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_u64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	tungsten::vm::gte_mcm<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int64_t>(m,src2.name()) = 2;
	tungsten::vm::gte_mmm<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_s64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	tungsten::vm::gte_mcm<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_f32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,src1.name());
	tungsten::vm::alloc_nnr<float>(m,src2.name());
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,src1.name()) = 8;
	*tungsten::memory_address<float>(m,src2.name()) = 2;
	tungsten::vm::gte_mmm<float>(m, src1.name(), src2.name(), dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_f32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,src1.name());
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,src1.name()) = 8;
	tungsten::vm::gte_mcm<float>(m, src1.name(), 2, dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_f64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,src1.name());
	tungsten::vm::alloc_nnr<double>(m,src2.name());
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,src1.name()) = 8;
	*tungsten::memory_address<double>(m,src2.name()) = 2;
	tungsten::vm::gte_mmm<double>(m, src1.name(), src2.name(), dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("gte_f64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,src1.name());
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,src1.name()) = 8;
	tungsten::vm::gte_mcm<double>(m, src1.name(), 2, dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("eq_u8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint8_t>(m,src2.name()) = 2;
	tungsten::vm::eq_mmm<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
}
TEST_CASE("eq_u8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	tungsten::vm::eq_mcm<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
}
TEST_CASE("eq_s8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int8_t>(m,src2.name()) = 2;
	tungsten::vm::eq_mmm<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
}
TEST_CASE("eq_s8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	tungsten::vm::eq_mcm<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
}
TEST_CASE("eq_u16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint16_t>(m,src2.name()) = 2;
	tungsten::vm::eq_mmm<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
}
TEST_CASE("eq_u16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	tungsten::vm::eq_mcm<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
}
TEST_CASE("eq_s16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int16_t>(m,src2.name()) = 2;
	tungsten::vm::eq_mmm<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
}
TEST_CASE("eq_s16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	tungsten::vm::eq_mcm<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
}
TEST_CASE("eq_u32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint32_t>(m,src2.name()) = 2;
	tungsten::vm::eq_mmm<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
}
TEST_CASE("eq_u32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	tungsten::vm::eq_mcm<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
}
TEST_CASE("eq_s32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int32_t>(m,src2.name()) = 2;
	tungsten::vm::eq_mmm<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
}
TEST_CASE("eq_s32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	tungsten::vm::eq_mcm<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
}
TEST_CASE("eq_u64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint64_t>(m,src2.name()) = 2;
	tungsten::vm::eq_mmm<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
}
TEST_CASE("eq_u64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	tungsten::vm::eq_mcm<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
}
TEST_CASE("eq_s64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int64_t>(m,src2.name()) = 2;
	tungsten::vm::eq_mmm<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
}
TEST_CASE("eq_s64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	tungsten::vm::eq_mcm<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
}
TEST_CASE("eq_f32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,src1.name());
	tungsten::vm::alloc_nnr<float>(m,src2.name());
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,src1.name()) = 8;
	*tungsten::memory_address<float>(m,src2.name()) = 2;
	tungsten::vm::eq_mmm<float>(m, src1.name(), src2.name(), dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
}
TEST_CASE("eq_f32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,src1.name());
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,src1.name()) = 8;
	tungsten::vm::eq_mcm<float>(m, src1.name(), 2, dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
}
TEST_CASE("eq_f64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,src1.name());
	tungsten::vm::alloc_nnr<double>(m,src2.name());
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,src1.name()) = 8;
	*tungsten::memory_address<double>(m,src2.name()) = 2;
	tungsten::vm::eq_mmm<double>(m, src1.name(), src2.name(), dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
}
TEST_CASE("eq_f64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,src1.name());
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,src1.name()) = 8;
	tungsten::vm::eq_mcm<double>(m, src1.name(), 2, dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
}
TEST_CASE("ne_u8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint8_t>(m,src2.name()) = 2;
	tungsten::vm::ne_mmm<std::uint8_t>(m, src1.name(), src2.name(), dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_u8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,src1.name()) = 8;
	tungsten::vm::ne_mcm<std::uint8_t>(m, src1.name(), 2, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s8_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int8_t>(m,src2.name()) = 2;
	tungsten::vm::ne_mmm<std::int8_t>(m, src1.name(), src2.name(), dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s8_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,src1.name()) = 8;
	tungsten::vm::ne_mcm<std::int8_t>(m, src1.name(), 2, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_u16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint16_t>(m,src2.name()) = 2;
	tungsten::vm::ne_mmm<std::uint16_t>(m, src1.name(), src2.name(), dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_u16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,src1.name()) = 8;
	tungsten::vm::ne_mcm<std::uint16_t>(m, src1.name(), 2, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s16_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int16_t>(m,src2.name()) = 2;
	tungsten::vm::ne_mmm<std::int16_t>(m, src1.name(), src2.name(), dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s16_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,src1.name()) = 8;
	tungsten::vm::ne_mcm<std::int16_t>(m, src1.name(), 2, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_u32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint32_t>(m,src2.name()) = 2;
	tungsten::vm::ne_mmm<std::uint32_t>(m, src1.name(), src2.name(), dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_u32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,src1.name()) = 8;
	tungsten::vm::ne_mcm<std::uint32_t>(m, src1.name(), 2, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int32_t>(m,src2.name()) = 2;
	tungsten::vm::ne_mmm<std::int32_t>(m, src1.name(), src2.name(), dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,src1.name()) = 8;
	tungsten::vm::ne_mcm<std::int32_t>(m, src1.name(), 2, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_u64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::uint64_t>(m,src2.name()) = 2;
	tungsten::vm::ne_mmm<std::uint64_t>(m, src1.name(), src2.name(), dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_u64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,src1.name()) = 8;
	tungsten::vm::ne_mcm<std::uint64_t>(m, src1.name(), 2, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,src2.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	*tungsten::memory_address<std::int64_t>(m,src2.name()) = 2;
	tungsten::vm::ne_mmm<std::int64_t>(m, src1.name(), src2.name(), dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_s64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,src1.name());
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,src1.name()) = 8;
	tungsten::vm::ne_mcm<std::int64_t>(m, src1.name(), 2, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_f32_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,src1.name());
	tungsten::vm::alloc_nnr<float>(m,src2.name());
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,src1.name()) = 8;
	*tungsten::memory_address<float>(m,src2.name()) = 2;
	tungsten::vm::ne_mmm<float>(m, src1.name(), src2.name(), dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_f32_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,src1.name());
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,src1.name()) = 8;
	tungsten::vm::ne_mcm<float>(m, src1.name(), 2, dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
	float expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_f64_mmm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto src2 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,src1.name());
	tungsten::vm::alloc_nnr<double>(m,src2.name());
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,src1.name()) = 8;
	*tungsten::memory_address<double>(m,src2.name()) = 2;
	tungsten::vm::ne_mmm<double>(m, src1.name(), src2.name(), dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("ne_f64_mcm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto src1 = ra.allocate();
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,src1.name());
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,src1.name()) = 8;
	tungsten::vm::ne_mcm<double>(m, src1.name(), 2, dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
	double expected = 1;
	CHECK(result == expected);
}
TEST_CASE("alloc_u8_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::size_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,dst.name()) = 10;
	tungsten::vm::alloc_nnm<std::uint8_t>(m, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
}
TEST_CASE("zero_u8_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,dst.name()) = 10;
	tungsten::vm::zero_nnm<std::uint8_t>(m, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
}
TEST_CASE("inc_u8_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,dst.name()) = 10;
	tungsten::vm::inc_nnm<std::uint8_t>(m, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_u8_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	*tungsten::memory_address<std::uint8_t>(m,dst.name()) = 10;
	tungsten::vm::dec_nnm<std::uint8_t>(m, dst.name());
	std::uint8_t result = *tungsten::memory_address<std::uint8_t>(m,dst.name());
	std::uint8_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("alloc_u8_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	m.write_register<std::uint8_t>(dst.name(), 10);
	tungsten::vm::alloc_nnr<std::uint8_t>(m, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
}
TEST_CASE("zero_u8_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	m.write_register<std::uint8_t>(dst.name(), 10);
	tungsten::vm::zero_nnr<std::uint8_t>(m, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
}
TEST_CASE("inc_u8_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	m.write_register<std::uint8_t>(dst.name(), 10);
	tungsten::vm::inc_nnr<std::uint8_t>(m, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_u8_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint8_t>(m,dst.name());
	m.write_register<std::uint8_t>(dst.name(), 10);
	tungsten::vm::dec_nnr<std::uint8_t>(m, dst.name());
	std::uint8_t result = m.read_register<std::uint8_t>(dst.name());
	std::uint8_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("alloc_s8_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::size_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,dst.name()) = 10;
	tungsten::vm::alloc_nnm<std::int8_t>(m, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
}
TEST_CASE("zero_s8_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,dst.name()) = 10;
	tungsten::vm::zero_nnm<std::int8_t>(m, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
}
TEST_CASE("inc_s8_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,dst.name()) = 10;
	tungsten::vm::inc_nnm<std::int8_t>(m, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_s8_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	*tungsten::memory_address<std::int8_t>(m,dst.name()) = 10;
	tungsten::vm::dec_nnm<std::int8_t>(m, dst.name());
	std::int8_t result = *tungsten::memory_address<std::int8_t>(m,dst.name());
	std::int8_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("alloc_s8_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	m.write_register<std::int8_t>(dst.name(), 10);
	tungsten::vm::alloc_nnr<std::int8_t>(m, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
}
TEST_CASE("zero_s8_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	m.write_register<std::int8_t>(dst.name(), 10);
	tungsten::vm::zero_nnr<std::int8_t>(m, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
}
TEST_CASE("inc_s8_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	m.write_register<std::int8_t>(dst.name(), 10);
	tungsten::vm::inc_nnr<std::int8_t>(m, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_s8_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int8_t>(m,dst.name());
	m.write_register<std::int8_t>(dst.name(), 10);
	tungsten::vm::dec_nnr<std::int8_t>(m, dst.name());
	std::int8_t result = m.read_register<std::int8_t>(dst.name());
	std::int8_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("alloc_u16_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::size_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,dst.name()) = 10;
	tungsten::vm::alloc_nnm<std::uint16_t>(m, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
}
TEST_CASE("zero_u16_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,dst.name()) = 10;
	tungsten::vm::zero_nnm<std::uint16_t>(m, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
}
TEST_CASE("inc_u16_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,dst.name()) = 10;
	tungsten::vm::inc_nnm<std::uint16_t>(m, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_u16_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	*tungsten::memory_address<std::uint16_t>(m,dst.name()) = 10;
	tungsten::vm::dec_nnm<std::uint16_t>(m, dst.name());
	std::uint16_t result = *tungsten::memory_address<std::uint16_t>(m,dst.name());
	std::uint16_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("alloc_u16_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	m.write_register<std::uint16_t>(dst.name(), 10);
	tungsten::vm::alloc_nnr<std::uint16_t>(m, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
}
TEST_CASE("zero_u16_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	m.write_register<std::uint16_t>(dst.name(), 10);
	tungsten::vm::zero_nnr<std::uint16_t>(m, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
}
TEST_CASE("inc_u16_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	m.write_register<std::uint16_t>(dst.name(), 10);
	tungsten::vm::inc_nnr<std::uint16_t>(m, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_u16_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint16_t>(m,dst.name());
	m.write_register<std::uint16_t>(dst.name(), 10);
	tungsten::vm::dec_nnr<std::uint16_t>(m, dst.name());
	std::uint16_t result = m.read_register<std::uint16_t>(dst.name());
	std::uint16_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("alloc_s16_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::size_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,dst.name()) = 10;
	tungsten::vm::alloc_nnm<std::int16_t>(m, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
}
TEST_CASE("zero_s16_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,dst.name()) = 10;
	tungsten::vm::zero_nnm<std::int16_t>(m, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
}
TEST_CASE("inc_s16_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,dst.name()) = 10;
	tungsten::vm::inc_nnm<std::int16_t>(m, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_s16_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	*tungsten::memory_address<std::int16_t>(m,dst.name()) = 10;
	tungsten::vm::dec_nnm<std::int16_t>(m, dst.name());
	std::int16_t result = *tungsten::memory_address<std::int16_t>(m,dst.name());
	std::int16_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("alloc_s16_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	m.write_register<std::int16_t>(dst.name(), 10);
	tungsten::vm::alloc_nnr<std::int16_t>(m, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
}
TEST_CASE("zero_s16_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	m.write_register<std::int16_t>(dst.name(), 10);
	tungsten::vm::zero_nnr<std::int16_t>(m, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
}
TEST_CASE("inc_s16_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	m.write_register<std::int16_t>(dst.name(), 10);
	tungsten::vm::inc_nnr<std::int16_t>(m, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_s16_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int16_t>(m,dst.name());
	m.write_register<std::int16_t>(dst.name(), 10);
	tungsten::vm::dec_nnr<std::int16_t>(m, dst.name());
	std::int16_t result = m.read_register<std::int16_t>(dst.name());
	std::int16_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("alloc_u32_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::size_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,dst.name()) = 10;
	tungsten::vm::alloc_nnm<std::uint32_t>(m, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
}
TEST_CASE("zero_u32_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,dst.name()) = 10;
	tungsten::vm::zero_nnm<std::uint32_t>(m, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
}
TEST_CASE("inc_u32_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,dst.name()) = 10;
	tungsten::vm::inc_nnm<std::uint32_t>(m, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_u32_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	*tungsten::memory_address<std::uint32_t>(m,dst.name()) = 10;
	tungsten::vm::dec_nnm<std::uint32_t>(m, dst.name());
	std::uint32_t result = *tungsten::memory_address<std::uint32_t>(m,dst.name());
	std::uint32_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("alloc_u32_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	m.write_register<std::uint32_t>(dst.name(), 10);
	tungsten::vm::alloc_nnr<std::uint32_t>(m, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
}
TEST_CASE("zero_u32_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	m.write_register<std::uint32_t>(dst.name(), 10);
	tungsten::vm::zero_nnr<std::uint32_t>(m, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
}
TEST_CASE("inc_u32_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	m.write_register<std::uint32_t>(dst.name(), 10);
	tungsten::vm::inc_nnr<std::uint32_t>(m, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_u32_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint32_t>(m,dst.name());
	m.write_register<std::uint32_t>(dst.name(), 10);
	tungsten::vm::dec_nnr<std::uint32_t>(m, dst.name());
	std::uint32_t result = m.read_register<std::uint32_t>(dst.name());
	std::uint32_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("alloc_s32_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::size_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,dst.name()) = 10;
	tungsten::vm::alloc_nnm<std::int32_t>(m, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
}
TEST_CASE("zero_s32_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,dst.name()) = 10;
	tungsten::vm::zero_nnm<std::int32_t>(m, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
}
TEST_CASE("inc_s32_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,dst.name()) = 10;
	tungsten::vm::inc_nnm<std::int32_t>(m, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_s32_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	*tungsten::memory_address<std::int32_t>(m,dst.name()) = 10;
	tungsten::vm::dec_nnm<std::int32_t>(m, dst.name());
	std::int32_t result = *tungsten::memory_address<std::int32_t>(m,dst.name());
	std::int32_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("alloc_s32_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	m.write_register<std::int32_t>(dst.name(), 10);
	tungsten::vm::alloc_nnr<std::int32_t>(m, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
}
TEST_CASE("zero_s32_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	m.write_register<std::int32_t>(dst.name(), 10);
	tungsten::vm::zero_nnr<std::int32_t>(m, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
}
TEST_CASE("inc_s32_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	m.write_register<std::int32_t>(dst.name(), 10);
	tungsten::vm::inc_nnr<std::int32_t>(m, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_s32_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int32_t>(m,dst.name());
	m.write_register<std::int32_t>(dst.name(), 10);
	tungsten::vm::dec_nnr<std::int32_t>(m, dst.name());
	std::int32_t result = m.read_register<std::int32_t>(dst.name());
	std::int32_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("alloc_u64_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::size_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,dst.name()) = 10;
	tungsten::vm::alloc_nnm<std::uint64_t>(m, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
}
TEST_CASE("zero_u64_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,dst.name()) = 10;
	tungsten::vm::zero_nnm<std::uint64_t>(m, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
}
TEST_CASE("inc_u64_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,dst.name()) = 10;
	tungsten::vm::inc_nnm<std::uint64_t>(m, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_u64_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	*tungsten::memory_address<std::uint64_t>(m,dst.name()) = 10;
	tungsten::vm::dec_nnm<std::uint64_t>(m, dst.name());
	std::uint64_t result = *tungsten::memory_address<std::uint64_t>(m,dst.name());
	std::uint64_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("alloc_u64_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	m.write_register<std::uint64_t>(dst.name(), 10);
	tungsten::vm::alloc_nnr<std::uint64_t>(m, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
}
TEST_CASE("zero_u64_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	m.write_register<std::uint64_t>(dst.name(), 10);
	tungsten::vm::zero_nnr<std::uint64_t>(m, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
}
TEST_CASE("inc_u64_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	m.write_register<std::uint64_t>(dst.name(), 10);
	tungsten::vm::inc_nnr<std::uint64_t>(m, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_u64_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::uint64_t>(m,dst.name());
	m.write_register<std::uint64_t>(dst.name(), 10);
	tungsten::vm::dec_nnr<std::uint64_t>(m, dst.name());
	std::uint64_t result = m.read_register<std::uint64_t>(dst.name());
	std::uint64_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("alloc_s64_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::size_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,dst.name()) = 10;
	tungsten::vm::alloc_nnm<std::int64_t>(m, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
}
TEST_CASE("zero_s64_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,dst.name()) = 10;
	tungsten::vm::zero_nnm<std::int64_t>(m, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
}
TEST_CASE("inc_s64_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,dst.name()) = 10;
	tungsten::vm::inc_nnm<std::int64_t>(m, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_s64_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	*tungsten::memory_address<std::int64_t>(m,dst.name()) = 10;
	tungsten::vm::dec_nnm<std::int64_t>(m, dst.name());
	std::int64_t result = *tungsten::memory_address<std::int64_t>(m,dst.name());
	std::int64_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("alloc_s64_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	m.write_register<std::int64_t>(dst.name(), 10);
	tungsten::vm::alloc_nnr<std::int64_t>(m, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
}
TEST_CASE("zero_s64_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	m.write_register<std::int64_t>(dst.name(), 10);
	tungsten::vm::zero_nnr<std::int64_t>(m, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
}
TEST_CASE("inc_s64_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	m.write_register<std::int64_t>(dst.name(), 10);
	tungsten::vm::inc_nnr<std::int64_t>(m, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_s64_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::int64_t>(m,dst.name());
	m.write_register<std::int64_t>(dst.name(), 10);
	tungsten::vm::dec_nnr<std::int64_t>(m, dst.name());
	std::int64_t result = m.read_register<std::int64_t>(dst.name());
	std::int64_t expected = 9;
	CHECK(result == expected);
}
TEST_CASE("alloc_f32_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::size_t>(m,dst.name());
	*tungsten::memory_address<float>(m,dst.name()) = 10;
	tungsten::vm::alloc_nnm<float>(m, dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
}
TEST_CASE("zero_f32_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,dst.name()) = 10;
	tungsten::vm::zero_nnm<float>(m, dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
}
TEST_CASE("inc_f32_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,dst.name()) = 10;
	tungsten::vm::inc_nnm<float>(m, dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
	float expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_f32_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	*tungsten::memory_address<float>(m,dst.name()) = 10;
	tungsten::vm::dec_nnm<float>(m, dst.name());
	float result = *tungsten::memory_address<float>(m,dst.name());
	float expected = 9;
	CHECK(result == expected);
}
TEST_CASE("alloc_f32_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	m.write_register<float>(dst.name(), 10);
	tungsten::vm::alloc_nnr<float>(m, dst.name());
	float result = m.read_register<float>(dst.name());
}
TEST_CASE("zero_f32_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	m.write_register<float>(dst.name(), 10);
	tungsten::vm::zero_nnr<float>(m, dst.name());
	float result = m.read_register<float>(dst.name());
}
TEST_CASE("inc_f32_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	m.write_register<float>(dst.name(), 10);
	tungsten::vm::inc_nnr<float>(m, dst.name());
	float result = m.read_register<float>(dst.name());
	float expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_f32_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<float>(m,dst.name());
	m.write_register<float>(dst.name(), 10);
	tungsten::vm::dec_nnr<float>(m, dst.name());
	float result = m.read_register<float>(dst.name());
	float expected = 9;
	CHECK(result == expected);
}
TEST_CASE("alloc_f64_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<std::size_t>(m,dst.name());
	*tungsten::memory_address<double>(m,dst.name()) = 10;
	tungsten::vm::alloc_nnm<double>(m, dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
}
TEST_CASE("zero_f64_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,dst.name()) = 10;
	tungsten::vm::zero_nnm<double>(m, dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
}
TEST_CASE("inc_f64_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,dst.name()) = 10;
	tungsten::vm::inc_nnm<double>(m, dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
	double expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_f64_nnm", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	*tungsten::memory_address<double>(m,dst.name()) = 10;
	tungsten::vm::dec_nnm<double>(m, dst.name());
	double result = *tungsten::memory_address<double>(m,dst.name());
	double expected = 9;
	CHECK(result == expected);
}
TEST_CASE("alloc_f64_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	m.write_register<double>(dst.name(), 10);
	tungsten::vm::alloc_nnr<double>(m, dst.name());
	double result = m.read_register<double>(dst.name());
}
TEST_CASE("zero_f64_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	m.write_register<double>(dst.name(), 10);
	tungsten::vm::zero_nnr<double>(m, dst.name());
	double result = m.read_register<double>(dst.name());
}
TEST_CASE("inc_f64_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	m.write_register<double>(dst.name(), 10);
	tungsten::vm::inc_nnr<double>(m, dst.name());
	double result = m.read_register<double>(dst.name());
	double expected = 11;
	CHECK(result == expected);
}
TEST_CASE("dec_f64_nnr", "[dispatch]") {
	tungsten::machine m;
	tungsten::vm::register_allocator ra;
	std::vector<std::uint8_t> c;
	auto dst = ra.allocate();
	tungsten::vm::alloc_nnr<double>(m,dst.name());
	m.write_register<double>(dst.name(), 10);
	tungsten::vm::dec_nnr<double>(m, dst.name());
	double result = m.read_register<double>(dst.name());
	double expected = 9;
	CHECK(result == expected);
}
