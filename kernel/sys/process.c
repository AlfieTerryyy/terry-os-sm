#include "process.h"
#include "kernel.h"

typedef struct {
    int pid; 
    char* name;
    int status;
} process_t;

process_t process_table[10];

int create_process(const char* name) {
    for (int i = 0; i < 10; i++) {
        if (process_table[i].pid == 0) {
            process_table[i].pid = i + 1;
            process_table[i].name = name;
            process_table[i].status = 1;
            print("Created process: ");
            print(name);
            return process_table[i].pid;
        }
    }
    print("No available process slots.\n");
    return -1;
}

void list_processes() {
    for (int i = 0; i < 10; i++) {
        if (process_table[i].pid != 0) {
            print("PID: ");
            char buffer[10];
            itoa(process_table[i].pid, buffer, 10);
            print(buffer);
            print(" Name: ");
            print(process_table[i].name);
            print("\n");
        }
    }
}
