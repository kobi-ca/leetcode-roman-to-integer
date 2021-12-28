//
// Created by kobi on 12/26/21.
//

#include "roman-to-integer.hpp"

namespace leetcode_roman_to_integer {

    template <char first, char second>
    unsigned int get_special(const char c,
                             unsigned int val_first,
                             unsigned int val_second,
                             size_t& idx) {
        unsigned int result{};
        switch(c) {
            default:
                ++result;
                break;
            case first:
                result += val_first;
                ++idx;
                break;
            case second:
                result += val_second;
                ++idx;
                break;
        }
        return result;
    }

    unsigned int get_number(const std::string_view s) {
        if (s.empty()) {
            return 0;
        }
        unsigned int result{};
        for (size_t idx{}; s[idx]; ++idx) {
            const auto c = s[idx];
            switch (c) {
                default:
                    return 0;
                case 'I':
                    switch(s[idx+1]) {
                        default:
                            ++result;
                            break;
                        case 'V':
                            result += 4;
                            ++idx;
                            break;
                        case 'X':
                            result += 9;
                            ++idx;
                            break;
                    }
                    break;
                case 'V':
                    result+=5;
                    break;
                case 'X':
                    switch(s[idx+1]) {
                        default:
                            result += 10;
                            break;
                        case 'L':
                            result += 40;
                            ++idx;
                            break;
                        case 'C':
                            result += 90;
                            ++idx;
                            break;
                    }
                    break;
                case 'L':
                    result += 50;
                    break;
                case 'C':
                    switch(s[idx+1]) {
                        default:
                            result+=100;
                            break;
                        case 'D':
                            result += 400;
                            ++idx;
                            break;
                        case 'M':
                            result += 900;
                            ++idx;
                            break;
                    }
                    break;
                case 'D':
                    result += 500;
                    break;
                case 'M':
                    result += 1000;
                    break;
            }
        }
        return result;
    }
}
