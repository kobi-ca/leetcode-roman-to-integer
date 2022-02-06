//
// Created by kobi on 12/26/21.
//

#include "gtest/gtest.h"

#include "roman-to-integer-presented.hpp"

TEST(roman_to_integer, empty) {
    std::string input;
    ASSERT_EQ(0, leetcode_roman_to_integer::get_number(input)) << " with input " << input;
}

TEST(roman_to_integer, one) {
    std::string input("I");
    ASSERT_EQ(1, leetcode_roman_to_integer::get_number(input)) << " with input " << input;
}

TEST(roman_to_integer, two) {
    std::string input("II");
    ASSERT_EQ(2, leetcode_roman_to_integer::get_number(input)) << " with input " << input;
}

TEST(roman_to_integer, three) {
    std::string input("III");
    ASSERT_EQ(3, leetcode_roman_to_integer::get_number(input)) << " with input " << input;
}

TEST(roman_to_integer, four) {
    std::string input("IV");
    ASSERT_EQ(4, leetcode_roman_to_integer::get_number(input)) << " with input " << input;
}
