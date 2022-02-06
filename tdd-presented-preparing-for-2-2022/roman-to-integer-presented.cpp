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
        if (s.starts_with("II")) {
            return 2;
        }
        if (s.starts_with('I')) {
            return 1;
        }
        // should not happen, s is valid!
        return std::numeric_limits<unsigned int>::max();
    }

}
