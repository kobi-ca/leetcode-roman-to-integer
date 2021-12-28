//
// Created by kobi on 12/26/21.
//

#include "gtest/gtest.h"

#include "roman-to-integer.hpp"

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

TEST(roman_to_integer, five) {
    std::string input("V");
    ASSERT_EQ(5, leetcode_roman_to_integer::get_number(input)) << " with input " << input;
}

TEST(roman_to_integer, six) {
    std::string input("VI");
    ASSERT_EQ(6, leetcode_roman_to_integer::get_number(input)) << " with input " << input;
}

TEST(roman_to_integer, seven) {
    std::string input("VII");
    ASSERT_EQ(7, leetcode_roman_to_integer::get_number(input)) << " with input " << input;
}

TEST(roman_to_integer, eight) {
    std::string input("VIII");
    ASSERT_EQ(8, leetcode_roman_to_integer::get_number(input)) << " with input " << input;
}

TEST(roman_to_integer, nine) {
    std::string input("IX");
    ASSERT_EQ(9, leetcode_roman_to_integer::get_number(input)) << " with input " << input;
}

TEST(roman_to_integer, ten) {
    std::string input("X");
    ASSERT_EQ(10, leetcode_roman_to_integer::get_number(input)) << " with input " << input;
}

TEST(roman_to_integer, fifteen) {
    std::string input("XV");
    ASSERT_EQ(15, leetcode_roman_to_integer::get_number(input)) << " with input " << input;
}

TEST(roman_to_integer, one_thousand_ninty_four) {
    std::string input("MCMXCIV");
    ASSERT_EQ(1994, leetcode_roman_to_integer::get_number(input)) << " with input " << input;
}
