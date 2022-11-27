cmake_minimum_required(VERSION 3.23)
project(tungsten)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)
include_directories(${CMAKE_SOURCE_DIR})

# Setup Catch2
FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v3.0.1 # or a later release
)
FetchContent_MakeAvailable(Catch2)
list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)
include(CTest)
include(Catch)

##### Define unit tests
add_executable(tests tests/test_vm.cpp tests/test_dispatch.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
target_compile_options(tests PRIVATE -fsanitize=address)
target_link_options(tests PUBLIC -fsanitize=address)
catch_discover_tests(tests)

##### Define interpreter
add_executable(tungsten main.cpp
        ast/value.h
        eval/unops.h
        eval/binops.h
        eval/dispatch.h
        eval/opcodes.h
        eval/serdes.h
        eval/vm.h

        src/ast/value.cpp
        src/eval/vm.cpp
        )
