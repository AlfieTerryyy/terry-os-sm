#ifndef MEMORY_H
#define MEMORY_H

#include <stdint.h>

// Memory-related operations
void* malloc(size_t size);
void free(void* ptr);
void* memset(void* ptr, int value, size_t num);
void* memcpy(void* dest, const void* src, size_t n);

#endif // MEMORY_H
