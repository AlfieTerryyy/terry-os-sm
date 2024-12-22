#include "memory.h"

// Simple implementation of memcpy
void* memcpy(void* dest, const void* src, size_t n) {
    char* d = (char*) dest;
    const char* s = (const char*) src;
    for (size_t i = 0; i < n; i++) {
        d[i] = s[i];
    }
    return dest;
}

// Simple implementation of memset
void* memset(void* ptr, int value, size_t num) {
    unsigned char* p = (unsigned char*) ptr;
    for (size_t i = 0; i < num; i++) {
        p[i] = (unsigned char) value;
    }
    return ptr;
}
