#ifndef DISK_H
#define DISK_H

void init_disk(void);
int read_sector(unsigned int sector, void* buffer);
int write_sector(unsigned int sector, const void* buffer);

#endif
