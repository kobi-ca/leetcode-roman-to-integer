//
// Created by kobi on 12/26/21.
//

#include "roman-to-integer.hpp"

namespace leetcode_roman_to_integer {
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
                    result+=10;
                    break;
            }
        }
        return result;
    }
}
