.global _start

.section .text

_start:
    ; Set up the stack (this would be done at the start of the kernel)
    cli                       ; Disable interrupts
    mov $0x10, %ax            ; Set up the stack segment
    mov %ax, %ss
    mov $0x90000, %esp        ; Set up stack pointer

    ; Initialize GDT, IDT, etc.

    ; Jump to kernel entry point
    call kernel_entry         ; This will jump to the kernel entry in C (or a kernel entry function)

    ; Infinite loop (for safety)
    hlt
