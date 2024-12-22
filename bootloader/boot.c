// boot.c - Terry OS SM Bootloader (Written in C)

// Include necessary headers
#include <stdint.h>
#include <stdbool.h>

// Simple VGA text mode memory for output
#define VIDEO_MEMORY 0xB8000
#define WHITE_ON_BLACK 0x0F00

void print_string(const char *str) {
    volatile char *video = (volatile char *)VIDEO_MEMORY;
    while (*str) {
        *video++ = *str++;
        *video++ = WHITE_ON_BLACK;  // Set color to white on black
    }
}

void bootloader_main(void) {
    // Print "Welcome to Terry OS SM!"
    print_string("Welcome to Terry OS SM!\n");

    // Add more functionality here (e.g., load kernel, etc.)
    while (1) {
        // Infinite loop to prevent the bootloader from finishing
    }
}

void _start(void) {
    bootloader_main();
}
