#include <syscall.h>

int write(int fd, const void *buf, size_t count) {
    // System call implementation to write to stdout (fd = 1)
    return syscall(SYS_write, fd, buf, count);
}

int read(int fd, void *buf, size_t count) {
    // System call implementation to read from stdin (fd = 0)
    return syscall(SYS_read, fd, buf, count);
}
