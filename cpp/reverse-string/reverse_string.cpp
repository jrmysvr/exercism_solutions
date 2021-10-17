#include "reverse_string.h"
#include <string>

namespace reverse_string {

    std::string reverse_string(std::string inpt) {
        std::string output = "";
        for (int i = inpt.length() - 1; i >= 0; i--)
            output += inpt[i];

        return output;
    }
}  // namespace reverse_string
