#include "fat32.h"

// Read a block from the storage device
int block_read(unsigned int block_num, void* buffer) {
    // Dummy implementation - in a real OS, you'd interact with hardware or a disk image
    return fat32_read_block(&fs, block_num, buffer);
}

// Write a block to the storage device
int block_write(unsigned int block_num, void* buffer) {
    // Dummy implementation - in a real OS, you'd interact with hardware or a disk image
    return fat32_write_block(&fs, block_num, buffer);
}
