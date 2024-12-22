#ifndef MEMORY_H
#define MEMORY_H

#include <stddef.h>

// Function prototypes for memory operations
void* memcpy(void* dest, const void* src, size_t n);
void* memset(void* ptr, int value, size_t num);

#endif // MEMORY_H
