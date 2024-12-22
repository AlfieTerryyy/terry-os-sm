#ifndef FAT32_H
#define FAT32_H

// Define the basic FAT32 file system structure
#define FAT32_SECTOR_SIZE 512
#define FAT32_BLOCK_SIZE  4096

// Struct for the FAT32 file system
typedef struct {
    unsigned char bootstrap[3 * FAT32_SECTOR_SIZE]; // Boot sector
    unsigned char reserved[1024];                   // Reserved area
    unsigned int fat_start;                         // FAT start
    unsigned int data_start;                        // Data start
    unsigned int fat_size;                          // FAT size
} FAT32_FS;

// Function declarations for FAT32 file system
int fat32_init(FAT32_FS* fs);
int fat32_mount(FAT32_FS* fs);
int fat32_read_block(FAT32_FS* fs, unsigned int block_num, void* buffer);
int fat32_write_block(FAT32_FS* fs, unsigned int block_num, void* buffer);

#endif // FAT32_H
