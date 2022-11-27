#pragma once

#include <array>
#include <cstddef>
#include <functional>
#include <memory>
#include <unordered_map>
#include <vector>

namespace tungsten {
struct machine {
  std::vector<std::uint8_t> memory;
  std::array<std::size_t, 256> registers;
  std::unordered_map<std::size_t, std::function<void()>> collectors;

  /**
   * machine destructor releases any pointer referenced here.
   */
  ~machine() {
    for (const auto &item : collectors) {
      std::invoke(item.second);
    }
  }

  /**
   * allocate allocates count bytes.
   * @param count the number of bytes of memory to allocate
   * @return the base index of the allocation
   */
  std::size_t allocate(std::size_t count) {
    auto base = memory.size();
    memory.resize(memory.size() + count);
    return base;
  }

  template <typename T> std::size_t allocate() { return allocate(sizeof(T)); }

  /**
   * read reads a value of type T from the given offset
   * @tparam T the type of value to read
   * @param offset the offset to read from
   * @param value the value to read into
   */
  template <typename T> void read(std::size_t offset, T &value) const {
    memcpy(&value, memory.data() + offset, sizeof(T));
  }

  /**
   * write writes a value of type T into the given offset
   * @tparam T the type of value to write
   * @param offset the offset to write to
   * @param value the value to write from
   */
  template <typename T> void write(std::size_t offset, const T &value) {
    memcpy(memory.data() + offset, &value, sizeof(T));
  }

  /**
   * read reads a pointer from the given offset and provides a copy in value.
   *
   * @tparam T the type of value pointed to
   * @param offset the offset to read from
   * @param value the value to read into
   */
  template <typename T>
  void read(std::size_t offset, std::shared_ptr<T> &value) {
    std::shared_ptr<T> *ptr;
    memcpy(&ptr, memory.data() + offset, sizeof(ptr));
    value = *ptr;
  }

  /**
   * write writes a pointer into the given offset. The pointer is reference
   * counted and will keep value alive as long as this memory arena is alive. If
   * a pointer has already been written to this address, it will be released
   * before being overwritten.
   * @tparam T the type of value pointed to
   * @param offset the offset to write to
   * @param value a pointer to the value being written
   */
  template <typename T>
  void write(std::size_t offset, const std::shared_ptr<T> &value) {
    if (auto pos = collectors.find(offset); pos != collectors.end()) {
      std::invoke(pos->second);
      collectors.erase(pos);
    }
    auto *ptr = new std::shared_ptr<T>(value);
    memcpy(memory.data() + offset, &ptr, sizeof(ptr));
    collectors[offset] = [ptr]() { delete ptr; };
  }
};
} // namespace tungsten