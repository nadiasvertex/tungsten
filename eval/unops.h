#include "eval/register.h"
#include "eval/vm.h"

namespace tungsten::vm {

/**
 * alloc_nnm allocates storage for type T in the memory pool. The address of the
 * new storage is written to the pool at the address provided in register dst.
 * @tparam T the type to allocate space for
 * @param m the machine to use
 * @param dst the register that contains the address where the address of the
 *          newly allocated storage should be written.
 */
template <typename T>
void alloc_nnm(tungsten::machine &m, const register_name &dst) {
  auto new_address = m.allocate<T>();
  auto *dst_value = memory_address<decltype(new_address)>(m, dst);
  std::memcpy(dst_value, &new_address, sizeof(new_address));
}

template <typename T>
void alloc_nnr(tungsten::machine &m, const register_name &dst) {
  auto new_address = m.allocate<T>();
  m.write_register(dst, new_address);
}

template <typename T>
void zero_nnm(tungsten::machine &m, const register_name &dst) {
  T *dst_value = memory_address<T>(m, dst);
  *dst_value = 0;
}

template <typename T>
void zero_nnr(tungsten::machine &m, const register_name &dst) {
  m.write_register(dst, 0);
}

template <typename T>
void inc_nnm(tungsten::machine &m, const register_name &dst) {
  T *dst_value = memory_address<T>(m, dst);
  (*dst_value)++;
}

template <typename T>
void inc_nnr(tungsten::machine &m, const register_name &dst) {
  m.write_register<T>(dst, m.read_register<T>(dst) + 1);
}

template <typename T>
void dec_nnm(tungsten::machine &m, const register_name &dst) {
  T *dst_value = memory_address<T>(m, dst);
  (*dst_value)--;
}

template <typename T>
void dec_nnr(tungsten::machine &m, const register_name &dst) {
  m.write_register<T>(dst, m.read_register<T>(dst) - 1);
}

template <typename T>
void not_nnm(tungsten::machine &m, const register_name &dst) {
  T *dst_value = memory_address<T>(m, dst);
  *dst_value = !(*dst_value);
}

template <typename T>
void not_nnr(tungsten::machine &m, const register_name &dst) {
  m.write_register<T>(dst, !m.read_register<T>(dst));
}
} // namespace tungsten::vm
