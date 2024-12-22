#ifndef KERNEL_H
#define KERNEL_H

// Kernel initialization function
void kernel_main(void);

// Function for printing messages to screen
void kernel_print(const char* message);

// Placeholder for interrupt handling
void handle_interrupt(int interrupt_number);

#endif // KERNEL_H
