#ifndef SYSCALL_H
#define SYSCALL_H

// System call numbers (these numbers represent specific system calls)
#define SYS_PRINT 1
#define SYS_ALLOC 2

// System call function prototypes
void syscall_handler(int syscall_number, void* arg1, void* arg2);

#endif // SYSCALL_H
