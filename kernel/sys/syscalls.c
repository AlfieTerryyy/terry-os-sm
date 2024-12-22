#include "syscalls.h"
#include "kernel.h"

void sys_print(const char* message) {
    print(message);
}

char sys_read_char() {
    return get_char_from_keyboard();
}

void syscall_handler(int syscall_number, void* arg) {
    switch (syscall_number) {
        case 0:
            sys_print((const char*)arg);
            break;
        case 1:
            *(char*)arg = sys_read_char();
            break;
        default:
            print("Unknown system call\n");
            break;
    }
}
