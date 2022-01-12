cmake_minimum_required(VERSION 3.21)
project(leetcode_roman_to_integer)

set(CMAKE_CXX_STANDARD 20)

find_package(fmt REQUIRED)
find_package(gtest REQUIRED)

add_library(roman_to_integer roman-to-integer.hpp roman-to-integer.cpp)
target_link_libraries(roman_to_integer PUBLIC fmt::fmt)

add_library(roman_to_integer_presented tdd-presented/roman-to-integer-presented.hpp
                                       tdd-presented/roman-to-integer-presented.cpp)
target_link_libraries(roman_to_integer_presented PUBLIC fmt::fmt)

enable_testing()

add_executable(leetcode_roman_to_integer_test test.cpp)
target_link_libraries(leetcode_roman_to_integer_test PRIVATE roman_to_integer gtest::gmock_main)
add_test(leetcode_roman_to_integer_test leetcode_roman_to_integer_test)

add_executable(leetcode_roman_to_integer_test_presented tdd-presented/test-presented.cpp)
target_link_libraries(leetcode_roman_to_integer_test_presented PRIVATE roman_to_integer_presented gtest::gmock_main)
add_test(leetcode_roman_to_integer_test_presented leetcode_roman_to_integer_test_presented)
