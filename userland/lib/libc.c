#include <stdio.h>
#include <stdlib.h>

void print(const char *str) {
    while (*str) {
        putchar(*str);
        str++;
    }
}

void *malloc(size_t size) {
    // For simplicity, we’ll just return NULL in this basic example
    return NULL;
}

void free(void *ptr) {
    // Freeing memory is not implemented in this simple version
}
