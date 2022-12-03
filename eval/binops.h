#include "eval/vm.h"

namespace tungsten::vm {
template <typename T>
void shl_rrmn(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
	m.write_memory<T>(dst, (m.read_register<T>(src1) << m.read_register<T>(src2)));
}
template <typename T>
void shr_rrmn(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
	m.write_memory<T>(dst, (m.read_register<T>(src1) >> m.read_register<T>(src2)));
}
template <typename T>
void binary_and_rrmn(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
	m.write_memory<T>(dst, (m.read_register<T>(src1) & m.read_register<T>(src2)));
}
template <typename T>
void binary_or_rrmn(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
	m.write_memory<T>(dst, (m.read_register<T>(src1) | m.read_register<T>(src2)));
}
template <typename T>
void binary_xor_rrmn(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
	m.write_memory<T>(dst, (m.read_register<T>(src1) ^ m.read_register<T>(src2)));
}
template <typename T>
void add_rrmn(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
	m.write_memory<T>(dst, (m.read_register<T>(src1) + m.read_register<T>(src2)));
}
template <typename T>
void sub_rrmn(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
	m.write_memory<T>(dst, (m.read_register<T>(src1) - m.read_register<T>(src2)));
}
template <typename T>
void mul_rrmn(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
	m.write_memory<T>(dst, (m.read_register<T>(src1) * m.read_register<T>(src2)));
}
template <typename T>
void div_rrmn(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
	m.write_memory<T>(dst, (m.read_register<T>(src1) / m.read_register<T>(src2)));
}
template <typename T>
void lt_rrmn(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
	m.write_memory<T>(dst, (m.read_register<T>(src1) < m.read_register<T>(src2)));
}
template <typename T>
void gt_rrmn(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
	m.write_memory<T>(dst, (m.read_register<T>(src1) > m.read_register<T>(src2)));
}
template <typename T>
void lte_rrmn(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
	m.write_memory<T>(dst, (m.read_register<T>(src1) <= m.read_register<T>(src2)));
}
template <typename T>
void gte_rrmn(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
	m.write_memory<T>(dst, (m.read_register<T>(src1) >= m.read_register<T>(src2)));
}
template <typename T>
void eq_rrmn(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
	m.write_memory<T>(dst, (m.read_register<T>(src1) == m.read_register<T>(src2)));
}
template <typename T>
void ne_rrmn(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
	m.write_memory<T>(dst, (m.read_register<T>(src1) != m.read_register<T>(src2)));
}
}
