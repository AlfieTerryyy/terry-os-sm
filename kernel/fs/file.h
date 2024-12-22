#ifndef FILE_H
#define FILE_H

#include <stdint.h>

// File structure for the basic file system
typedef struct {
    char name[256];         // File name
    uint32_t size;          // File size in bytes
    uint32_t start_block;   // Starting block of the file
    uint32_t current_block; // Current block being read
} FILE;

// Function declarations for file operations
int open_file(FILE* file, const char* name);
int read_file(FILE* file, void* buffer, uint32_t size);
int write_file(FILE* file, const void* buffer, uint32_t size);
int close_file(FILE* file);

#endif // FILE_H
