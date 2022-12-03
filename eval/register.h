#pragma once

#include <array>
#include <cstdint>
#include <stdexcept>

namespace tungsten::vm {
struct register_name {
  std::uint8_t index;
};

struct register_allocator;
struct register_handle {
  friend struct register_allocator;

  std::uint8_t index;

  register_handle(std::uint8_t index_, register_allocator &allocator_)
      : index(index_), allocator(allocator_) {}
  register_handle(const register_handle &) = delete;
  register_handle &operator=(const register_handle &) = delete;
  register_handle(register_handle &&other) noexcept
      : index(other.index), allocator(other.allocator), live(other.live) {
    other.live = false;
  }
  register_handle &operator=(register_handle &&) = delete;
  ~register_handle();

  auto name() { return register_name{index}; }

private:
  register_allocator &allocator;
  bool live = false;
};

struct register_allocator {
  register_allocator();

  auto allocate() -> register_handle;
  void release(register_handle& r);
  void clear();

private:
  std::array<bool, 256> flags{};
};
} // namespace tungsten::vm