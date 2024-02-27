#include "arithmetic/multiplication.hpp"

int arithmetic::multiply3(int a, int b, int c) {
    return arithmetic::multiply(c, arithmetic::multiply(b, a));
}