#include "file_operations.h"
#include "kernel.h"

int sys_read_file(char* buffer, int length) {
    int i = 0;
    while (i < length) {
        buffer[i] = sys_read_char();
        i++;
    }
    return i;
}

int sys_write_file(const char* buffer, int length) {
    for (int i = 0; i < length; i++) {
        print_char(buffer[i]);
    }
    return length;
}
