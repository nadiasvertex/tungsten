#pragma once
#include <cstdint>
#include <vector>

namespace tungsten::vm {

inline void read_binop(const std::vector<uint8_t> &code, std::size_t &pc,
                       std::uint8_t &src1, std::uint8_t &src2,
                       std::uint8_t &dst) {
  src1 = code[pc++];
  src2 = code[pc++];
  dst = code[pc++];
}

template <typename T>
void read_binop(const std::vector<uint8_t> &code, std::size_t &pc,
                std::uint8_t &src1, T &src2_value, std::uint8_t &dst) {
  src1 = code[pc++];
  dst = code[pc++];
  memcpy(&src2_value, code.data(), sizeof(T));
  pc += sizeof(T);
}

inline void read_unop(const std::vector<uint8_t> &code, std::size_t &pc,
                      std::uint8_t &dst) {
  dst = code[pc++];
}

inline void write_binop(std::vector<uint8_t> &code, std::size_t &pc,
                        std::uint8_t src1, std::uint8_t src2,
                        std::uint8_t dst) {
  code[pc++] = src1;
  code[pc++] = src2;
  code[pc++] = dst;
}

template <typename T>
void write_binop(std::vector<uint8_t> &code, std::size_t &pc, std::uint8_t src1,
                 const T &src2_value, std::uint8_t dst) {
  code[pc++] = src1;
  code[pc++] = dst;
  memcpy(code.data(), &src2_value, sizeof(T));
  pc += sizeof(T);
}

inline void write_unop(std::vector<uint8_t> &code, std::size_t &pc,
                       std::uint8_t dst) {
  code[pc++] = dst;
}
} // namespace tungsten::vm