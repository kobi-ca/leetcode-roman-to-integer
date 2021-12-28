//
// Created by kobi on 12/26/21.
//

#include "roman-to-integer.hpp"

namespace leetcode_roman_to_integer {

    template <char first, char second>
    unsigned int get_special(const char c,
                             unsigned int def,
                             unsigned int val_first,
                             unsigned int val_second,
                             size_t& idx) {
        unsigned int result{};
        switch(c) {
            default:
                result+=def;
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
                    result += get_special<'V', 'X'>(s[idx+1], 1, 4, 9, idx);
                    break;
                case 'V':
                    result+=5;
                    break;
                case 'X':
                    result += get_special<'L', 'C'>(s[idx+1], 10, 40, 90, idx);
                    break;
                case 'L':
                    result += 50;
                    break;
                case 'C':
                    result += get_special<'D', 'M'>(s[idx+1], 100, 400, 900, idx);
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
