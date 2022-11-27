#include "eval/vm.h"
#include "eval/binops.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("read and write work", "[vm]") {
    tungsten::machine m;

    auto a = m.allocate<int>();
    int v;

    for(auto i=0; i<10000; i++) {
        m.write(a, i);
        m.read(a, v);
        CHECK(v == i);
    }
}

TEST_CASE("can allocate, read, and write", "[vm]") {
    tungsten::machine m;

    int v;
    std::vector<std::size_t> addresses;

    for(auto i=0; i<10000; i++) {
        auto a = m.allocate<int>();
        addresses.emplace_back(a);
        m.write(a, i);
        m.read(a, v);
        CHECK(v == i);
    }

    for(auto i=0; i<10000; i++) {
        const auto& a = addresses[i];
        m.read(a, v);
        CHECK(v == i);
    }
}
