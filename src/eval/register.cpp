#include "eval/register.h"

namespace tungsten::vm {
register_handle::~register_handle() { if (live) { allocator.release(*this); } }

register_allocator::register_allocator() { clear(); }

auto register_allocator::allocate() -> register_handle {
  auto pos = std::find(std::begin(flags), std::end(flags), false);
  if (pos == std::end(flags)) {
    throw std::runtime_error("registers exhausted");
  }
  *pos = true;
  return register_handle(pos - std::begin(flags), *this);
}

void register_allocator::release(register_handle &r) {
  auto pos = std::begin(flags) + r.index;
  *pos = false;
  r.live = false;
}

void register_allocator::clear() {
  std::fill(std::begin(flags), std::end(flags), false);
}

} // namespace tungsten::vm