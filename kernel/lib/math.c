#include "math.h"

// Simple implementation of an absolute value function
int abs(int x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

// Simple implementation of a power function (x^n)
int pow(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
