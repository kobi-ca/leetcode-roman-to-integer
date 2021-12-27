cmake_minimum_required(VERSION 3.21)
project(leetcode_roman_to_integer)

set(CMAKE_CXX_STANDARD 20)

find_package(fmt REQUIRED)
find_package(gtest REQUIRED)

add_library(roman_to_integer roman-to-integer.hpp roman-to-integer.cpp)
target_link_libraries(roman_to_integer PUBLIC fmt::fmt)

enable_testing()

add_executable(leetcode_roman_to_integer main.cpp)
target_link_libraries(leetcode_roman_to_integer PRIVATE roman_to_integer)

add_executable(leetcode_roman_to_integer_test test.cpp)
target_link_libraries(leetcode_roman_to_integer_test PRIVATE roman_to_integer gtest::gmock_main)
add_test(leetcode_roman_to_integer_test leetcode_roman_to_integer_test)
