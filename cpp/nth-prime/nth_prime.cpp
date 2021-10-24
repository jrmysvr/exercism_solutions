#include "nth_prime.h"
#include <stdexcept>
#include <cstdio>

namespace nth_prime {
    bool is_prime(int n) {
        for (int i = 2; i <= n / 2; i++)
            if (n % i == 0) return false;
        return true;
    }

    int nth(int n) {
        if (n == 0)
            throw std::domain_error("Invalid input value of 0");

        int counter = 0;
        int i = 0;
        while (counter <= n)
            if (is_prime(++i)) ++counter;
        return i;
    }
}  // namespace nth_prime
