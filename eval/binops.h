#include "eval/vm.h"

namespace tungsten::vm {
template <typename T>
void add_rrr(tungsten::machine &m, std::size_t src1, std::size_t src2, std::size_t dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value + *src2_value;}
template <typename T>
void add_rcr(tungsten::machine &m, std::size_t src1, T src2_value, std::size_t dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value + src2_value;}
template <typename T>
void sub_rrr(tungsten::machine &m, std::size_t src1, std::size_t src2, std::size_t dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value - *src2_value;}
template <typename T>
void sub_rcr(tungsten::machine &m, std::size_t src1, T src2_value, std::size_t dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value - src2_value;}
template <typename T>
void mul_rrr(tungsten::machine &m, std::size_t src1, std::size_t src2, std::size_t dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value * *src2_value;}
template <typename T>
void mul_rcr(tungsten::machine &m, std::size_t src1, T src2_value, std::size_t dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value * src2_value;}
template <typename T>
void div_rrr(tungsten::machine &m, std::size_t src1, std::size_t src2, std::size_t dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value / *src2_value;}
template <typename T>
void div_rcr(tungsten::machine &m, std::size_t src1, T src2_value, std::size_t dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value / src2_value;}
template <typename T>
void shl_rrr(tungsten::machine &m, std::size_t src1, std::size_t src2, std::size_t dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value << *src2_value;}
template <typename T>
void shl_rcr(tungsten::machine &m, std::size_t src1, T src2_value, std::size_t dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value << src2_value;}
template <typename T>
void shr_rrr(tungsten::machine &m, std::size_t src1, std::size_t src2, std::size_t dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value >> *src2_value;}
template <typename T>
void shr_rcr(tungsten::machine &m, std::size_t src1, T src2_value, std::size_t dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value >> src2_value;}
template <typename T>
void binary_and_rrr(tungsten::machine &m, std::size_t src1, std::size_t src2, std::size_t dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value & *src2_value;}
template <typename T>
void binary_and_rcr(tungsten::machine &m, std::size_t src1, T src2_value, std::size_t dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value & src2_value;}
template <typename T>
void binary_or_rrr(tungsten::machine &m, std::size_t src1, std::size_t src2, std::size_t dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value | *src2_value;}
template <typename T>
void binary_or_rcr(tungsten::machine &m, std::size_t src1, T src2_value, std::size_t dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value | src2_value;}
template <typename T>
void binary_xor_rrr(tungsten::machine &m, std::size_t src1, std::size_t src2, std::size_t dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value ^ *src2_value;}
template <typename T>
void binary_xor_rcr(tungsten::machine &m, std::size_t src1, T src2_value, std::size_t dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value ^ src2_value;}
template <typename T>
void lt_rrr(tungsten::machine &m, std::size_t src1, std::size_t src2, std::size_t dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value < *src2_value;}
template <typename T>
void lt_rcr(tungsten::machine &m, std::size_t src1, T src2_value, std::size_t dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value < src2_value;}
template <typename T>
void gt_rrr(tungsten::machine &m, std::size_t src1, std::size_t src2, std::size_t dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value > *src2_value;}
template <typename T>
void gt_rcr(tungsten::machine &m, std::size_t src1, T src2_value, std::size_t dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value > src2_value;}
template <typename T>
void lte_rrr(tungsten::machine &m, std::size_t src1, std::size_t src2, std::size_t dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value <= *src2_value;}
template <typename T>
void lte_rcr(tungsten::machine &m, std::size_t src1, T src2_value, std::size_t dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value <= src2_value;}
template <typename T>
void gte_rrr(tungsten::machine &m, std::size_t src1, std::size_t src2, std::size_t dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value >= *src2_value;}
template <typename T>
void gte_rcr(tungsten::machine &m, std::size_t src1, T src2_value, std::size_t dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value >= src2_value;}
template <typename T>
void eq_rrr(tungsten::machine &m, std::size_t src1, std::size_t src2, std::size_t dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value == *src2_value;}
template <typename T>
void eq_rcr(tungsten::machine &m, std::size_t src1, T src2_value, std::size_t dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value == src2_value;}
template <typename T>
void ne_rrr(tungsten::machine &m, std::size_t src1, std::size_t src2, std::size_t dst) {
    const T *src1_value = memory_address<T>(m, src1);
    const T *src2_value = memory_address<T>(m, src2);
    T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value != *src2_value;}
template <typename T>
void ne_rcr(tungsten::machine &m, std::size_t src1, T src2_value, std::size_t dst) {
   const T *src1_value = memory_address<T>(m, src1);
   T *dst_value = memory_address<T>(m, dst);
*dst_value = *src1_value != src2_value;}
}
