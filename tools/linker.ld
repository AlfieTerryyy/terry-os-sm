/* linker.ld - Simple Linker Script */

ENTRY(kernel_main)  // Define entry point

SECTIONS {
    . = 0x100000;  // Kernel starts at 1MB address (after bootloader)
    
    .text : {
        *(.text)   // All text (code) sections go here
    }

    .data : {
        *(.data)   // Data sections
    }

    .bss : {
        *(.bss)    // Uninitialized data
    }
}
