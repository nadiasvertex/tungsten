#include "eval/vm.h"

namespace tungsten::vm {
template <typename T>
void zero_nnr(tungsten::machine &m, std::size_t dst) {
    T *dst_value = reinterpret_cast<T*>(m.memory.data() + dst);
*dst_value = 0;}
template <typename T>
void inc_nnr(tungsten::machine &m, std::size_t dst) {
    T *dst_value = reinterpret_cast<T*>(m.memory.data() + dst);
(*dst_value)++;}
template <typename T>
void dec_nnr(tungsten::machine &m, std::size_t dst) {
    T *dst_value = reinterpret_cast<T*>(m.memory.data() + dst);
(*dst_value)--;}
}
