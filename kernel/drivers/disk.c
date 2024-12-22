#include "disk.h"
#include "io.h"

#define DISK_IO_PORT 0x1F0

void init_disk(void) {
}

int read_sector(unsigned int sector, void* buffer) {
    memset(buffer, 0xAA, 512);
    return 0;
}

int write_sector(unsigned int sector, const void* buffer) {
    return 0;
}
