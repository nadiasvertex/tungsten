#include "eval/vm.h"

namespace tungsten::vm {
template <typename T>
void add_mmm(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value + *src2_value;}
template <typename T>
void add_mcm(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value + src2_value;}
template <typename T>
void add_rrr(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T src1_value = m.read_register<T>(src1);
    const T src2_value = m.read_register<T>(src2);
m.write_register<T>(dst, src1_value + src2_value);}
template <typename T>
void add_rcr(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T src1_value = m.read_register<T>(src1);
m.write_register<T>(dst, src1_value + src2_value);}
template <typename T>
void sub_mmm(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value - *src2_value;}
template <typename T>
void sub_mcm(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value - src2_value;}
template <typename T>
void sub_rrr(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T src1_value = m.read_register<T>(src1);
    const T src2_value = m.read_register<T>(src2);
m.write_register<T>(dst, src1_value - src2_value);}
template <typename T>
void sub_rcr(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T src1_value = m.read_register<T>(src1);
m.write_register<T>(dst, src1_value - src2_value);}
template <typename T>
void mul_mmm(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value * *src2_value;}
template <typename T>
void mul_mcm(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value * src2_value;}
template <typename T>
void mul_rrr(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T src1_value = m.read_register<T>(src1);
    const T src2_value = m.read_register<T>(src2);
m.write_register<T>(dst, src1_value * src2_value);}
template <typename T>
void mul_rcr(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T src1_value = m.read_register<T>(src1);
m.write_register<T>(dst, src1_value * src2_value);}
template <typename T>
void div_mmm(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value / *src2_value;}
template <typename T>
void div_mcm(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value / src2_value;}
template <typename T>
void div_rrr(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T src1_value = m.read_register<T>(src1);
    const T src2_value = m.read_register<T>(src2);
m.write_register<T>(dst, src1_value / src2_value);}
template <typename T>
void div_rcr(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T src1_value = m.read_register<T>(src1);
m.write_register<T>(dst, src1_value / src2_value);}
template <typename T>
void shl_mmm(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value << *src2_value;}
template <typename T>
void shl_mcm(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value << src2_value;}
template <typename T>
void shl_rrr(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T src1_value = m.read_register<T>(src1);
    const T src2_value = m.read_register<T>(src2);
m.write_register<T>(dst, src1_value << src2_value);}
template <typename T>
void shl_rcr(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T src1_value = m.read_register<T>(src1);
m.write_register<T>(dst, src1_value << src2_value);}
template <typename T>
void shr_mmm(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value >> *src2_value;}
template <typename T>
void shr_mcm(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value >> src2_value;}
template <typename T>
void shr_rrr(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T src1_value = m.read_register<T>(src1);
    const T src2_value = m.read_register<T>(src2);
m.write_register<T>(dst, src1_value >> src2_value);}
template <typename T>
void shr_rcr(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T src1_value = m.read_register<T>(src1);
m.write_register<T>(dst, src1_value >> src2_value);}
template <typename T>
void binary_and_mmm(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value & *src2_value;}
template <typename T>
void binary_and_mcm(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value & src2_value;}
template <typename T>
void binary_and_rrr(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T src1_value = m.read_register<T>(src1);
    const T src2_value = m.read_register<T>(src2);
m.write_register<T>(dst, src1_value & src2_value);}
template <typename T>
void binary_and_rcr(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T src1_value = m.read_register<T>(src1);
m.write_register<T>(dst, src1_value & src2_value);}
template <typename T>
void binary_or_mmm(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value | *src2_value;}
template <typename T>
void binary_or_mcm(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value | src2_value;}
template <typename T>
void binary_or_rrr(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T src1_value = m.read_register<T>(src1);
    const T src2_value = m.read_register<T>(src2);
m.write_register<T>(dst, src1_value | src2_value);}
template <typename T>
void binary_or_rcr(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T src1_value = m.read_register<T>(src1);
m.write_register<T>(dst, src1_value | src2_value);}
template <typename T>
void binary_xor_mmm(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value ^ *src2_value;}
template <typename T>
void binary_xor_mcm(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value ^ src2_value;}
template <typename T>
void binary_xor_rrr(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T src1_value = m.read_register<T>(src1);
    const T src2_value = m.read_register<T>(src2);
m.write_register<T>(dst, src1_value ^ src2_value);}
template <typename T>
void binary_xor_rcr(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T src1_value = m.read_register<T>(src1);
m.write_register<T>(dst, src1_value ^ src2_value);}
template <typename T>
void lt_mmm(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value < *src2_value;}
template <typename T>
void lt_mcm(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value < src2_value;}
template <typename T>
void lt_rrr(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T src1_value = m.read_register<T>(src1);
    const T src2_value = m.read_register<T>(src2);
m.write_register<T>(dst, src1_value < src2_value);}
template <typename T>
void lt_rcr(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T src1_value = m.read_register<T>(src1);
m.write_register<T>(dst, src1_value < src2_value);}
template <typename T>
void gt_mmm(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value > *src2_value;}
template <typename T>
void gt_mcm(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value > src2_value;}
template <typename T>
void gt_rrr(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T src1_value = m.read_register<T>(src1);
    const T src2_value = m.read_register<T>(src2);
m.write_register<T>(dst, src1_value > src2_value);}
template <typename T>
void gt_rcr(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T src1_value = m.read_register<T>(src1);
m.write_register<T>(dst, src1_value > src2_value);}
template <typename T>
void lte_mmm(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value <= *src2_value;}
template <typename T>
void lte_mcm(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value <= src2_value;}
template <typename T>
void lte_rrr(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T src1_value = m.read_register<T>(src1);
    const T src2_value = m.read_register<T>(src2);
m.write_register<T>(dst, src1_value <= src2_value);}
template <typename T>
void lte_rcr(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T src1_value = m.read_register<T>(src1);
m.write_register<T>(dst, src1_value <= src2_value);}
template <typename T>
void gte_mmm(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value >= *src2_value;}
template <typename T>
void gte_mcm(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value >= src2_value;}
template <typename T>
void gte_rrr(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T src1_value = m.read_register<T>(src1);
    const T src2_value = m.read_register<T>(src2);
m.write_register<T>(dst, src1_value >= src2_value);}
template <typename T>
void gte_rcr(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T src1_value = m.read_register<T>(src1);
m.write_register<T>(dst, src1_value >= src2_value);}
template <typename T>
void eq_mmm(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value == *src2_value;}
template <typename T>
void eq_mcm(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value == src2_value;}
template <typename T>
void eq_rrr(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T src1_value = m.read_register<T>(src1);
    const T src2_value = m.read_register<T>(src2);
m.write_register<T>(dst, src1_value == src2_value);}
template <typename T>
void eq_rcr(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T src1_value = m.read_register<T>(src1);
m.write_register<T>(dst, src1_value == src2_value);}
template <typename T>
void ne_mmm(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value != *src2_value;}
template <typename T>
void ne_mcm(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value != src2_value;}
template <typename T>
void ne_rrr(tungsten::machine &m, const register_name& src1, const register_name& src2, const register_name& dst) {
    const T src1_value = m.read_register<T>(src1);
    const T src2_value = m.read_register<T>(src2);
m.write_register<T>(dst, src1_value != src2_value);}
template <typename T>
void ne_rcr(tungsten::machine &m, const register_name& src1, const T& src2_value, const register_name& dst) {
   const T src1_value = m.read_register<T>(src1);
m.write_register<T>(dst, src1_value != src2_value);}
}
