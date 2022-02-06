//
// Created by kobi on 12/26/21.
//

#include <limits>
#include <string>

#include "roman-to-integer-presented.hpp"

namespace leetcode_roman_to_integer {

    unsigned int get_number(const std::string_view s) {
        if (s.empty()) {
            return 0;
        }
        unsigned int result{};
        // I know it's null terminated.
        // can't do range for loop, need the idx...
        for(std::size_t idx{}; s[idx]; ++idx) {
            const auto c = s[idx];
            switch (c) {
                default:
                    return 0; // should not happen
                case 'I':
                    switch (s[idx+1]) {
                        default: // null term or something else
                        ++result;
                            break;
                        case 'V':
                            result += 4;
                            ++idx; // we consume it!
                            break;
                    }
            }
        }
        return result;
    }

}
