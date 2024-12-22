#include "kernel.h"
#include "descriptor_tables.h"
#include "memory.h"
#include "interrupts.h"
#include "screen.h"
#include "keyboard.h"
extern void _start();

void kernel_main(void) {
    clear_screen();
    print("Welcome to Terry OS SM!\n");
    init_descriptor_tables();
    init_memory();
    init_interrupts();
    init_keyboard();
    print("Press any key to continue...\n");
    while (1) {
        char input = get_char_from_keyboard();
        print_char(input);
    }
}
void init_kernel(void) {
    print("Initializing kernel...\n");
}
void init_memory(void) {
    print("Initializing memory management...\n");
    setup_paging();
}

void setup_paging(void) {
    print("Setting up paging...\n");
}

void init_interrupts(void) {
    print("Initializing interrupts...\n");
    setup_idt();
}

void setup_idt(void) {
    print("Setting up IDT...\n");
}

void init_keyboard(void) {
    print("Initializing keyboard driver...\n");
}

char get_char_from_keyboard(void) {
    return read_keyboard();
}

char read_keyboard(void) {
    return 'A';
}

void print(const char* str) {
    while (*str) {
        print_char(*str);
        str++;
    }
}

void print_char(char c) {
    putchar(c);
}

void clear_screen(void) {
    for (int i = 0; i < 25; i++) {
        print("\n");
    }
}

