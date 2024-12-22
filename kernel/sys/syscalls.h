#ifndef SYSCALLS_H
#define SYSCALLS_H

void sys_print(const char* message);
char sys_read_char();

void syscall_handler(int syscall_number, void* arg);

#endif
