//
// Created by kobi on 12/26/21.
//

#include <limits>
#include <string>

#include "roman-to-integer-presented.hpp"

namespace leetcode_roman_to_integer {

    unsigned int get_number(const std::string& s) {
        if (s.empty()) {
            return 0;
        }
        if (s == "I") {
            return 1;
        }
        if (s == "II") {
            return 2;
        }
        // should not happen, s is valid!
        return std::numeric_limits<unsigned int>::max();
    }

}
