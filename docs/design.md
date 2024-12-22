# Design Document for Terry OS SM

## Table of Contents

- [Introduction](#introduction)
- [System Architecture](#system-architecture)
  - [Bootloader](#bootloader)
  - [Kernel](#kernel)
  - [File System](#file-system)
  - [User Interface](#user-interface)
  - [Drivers](#drivers)
- [Key Features](#key-features)
- [Goals and Philosophy](#goals-and-philosophy)
- [Performance Considerations](#performance-considerations)
- [Security](#security)
- [Development Tools](#development-tools)
- [Testing and Debugging](#testing-and-debugging)
- [Conclusion](#conclusion)

## Introduction

**Terry OS SM** is a custom operating system designed to be lightweight, fast, and user-friendly. It aims to combine classic desktop environments with modern performance and functionality. Inspired by retro graphical user interfaces like **Windows 3.11**, Terry OS SM will provide a minimalist yet effective user interface with support for basic applications and system management.

## System Architecture

### Bootloader

The **bootloader** is the first part of the system to be loaded during startup. Terry OS SM uses **GRUB** as the boot manager. GRUB loads the kernel and passes the necessary control to the operating system for further initialization. 

Key aspects:
- **GRUB 2** is used for boot management.
- **Kernel Loading**: The bootloader loads `terryos_sm_boot.bin` and starts the kernel.
- **Configuration**: The bootloader is configured via `/boot/grub/grub.cfg`.

### Kernel

The kernel is responsible for managing system resources such as memory, input/output operations, processes, and hardware. The kernel for Terry OS SM is based on a **monolithic kernel** architecture.

Key aspects:
- **Memory Management**: Support for physical and virtual memory.
- **Scheduling**: Preemptive multitasking with round-robin scheduling.
- **Interrupt Handling**: Basic interrupt handling for I/O operations.
- **Drivers**: Basic hardware drivers for the CPU, display, and input devices.
- **System Calls**: Implements system calls for process management and interaction with hardware.

### File System

Terry OS SM will use a **custom file system (TFS)** designed for simplicity and efficiency. It will support basic file operations such as read, write, and delete, with support for directories.

Key aspects:
- **File Structure**: A tree-based directory structure with files and folders.
- **Disk Management**: Basic disk management with support for block allocation.
- **File Types**: Support for executable files, text files, and binary data.

### User Interface

The user interface will be designed to resemble **Windows 3.11** in appearance and feel. It will include a simple window manager that allows users to interact with applications and system utilities in a graphical manner.

Key aspects:
- **Window Manager**: A basic window manager with support for movable, resizable windows.
- **Menus**: A simple, clickable start menu with options for system settings and application launching.
- **Icons**: Basic system icons for drives, folders, and applications.
- **Graphical Mode**: Basic 16-bit color depth with pixel-based graphics.

### Drivers

Terry OS SM will have the following drivers:
- **Video Driver**: A simple VGA driver for graphical output.
- **Keyboard Driver**: Standard PS/2 keyboard support with keypress events.
- **Mouse Driver**: Basic support for the mouse, allowing pointer movement and clicks.

## Key Features

1. **Graphical User Interface**: Basic Windows 3.11-style GUI for ease of use.
2. **Multitasking**: Preemptive multitasking for handling multiple processes.
3. **Command Line Interface (CLI)**: A minimal CLI for troubleshooting and advanced configuration.
4. **File Management**: A custom file system for file handling and storage.
5. **System Utilities**: Basic utilities like a text editor, calculator, and file explorer.
6. **Bootloader**: GRUB-based bootloader for flexible system startup.

## Goals and Philosophy

- **Simplicity**: Terry OS SM should be lightweight and efficient with minimal overhead.
- **User-Friendly**: The graphical interface should be intuitive and easy to navigate.
- **Modular Design**: The system should be easy to extend and modify with future updates or features.
- **Performance**: The OS should run efficiently on systems with limited resources (e.g., low RAM and storage).

## Performance Considerations

- **Memory Usage**: The system should be optimized for low memory usage, aiming to run on devices with as little as 128MB of RAM.
- **CPU Efficiency**: The kernel and system processes should be optimized to run efficiently on modern Intel CPUs, starting from the 12th generation.
- **I/O Speed**: Disk operations should be optimized for performance, though file management will be relatively simple in the initial releases.

## Security

Terry OS SM will implement basic security features:
- **User Authentication**: Simple user management with the option for creating user accounts and setting passwords.
- **Memory Protection**: Basic memory protection mechanisms to prevent unauthorized access to memory spaces.
- **Access Control**: Basic file permissions and access controls will be implemented for system files.

## Development Tools

- **Assembler**: NASM for writing the bootloader and low-level kernel components.
- **C Compiler**: GCC for compiling the kernel and system utilities.
- **Makefile**: To automate the build process for the OS.
- **Virtual Machine**: QEMU or VirtualBox for testing and debugging.

## Testing and Debugging

- **Unit Testing**: Core kernel functions will be tested in isolation before integrating with the rest of the system.
- **Debugging Tools**: Basic debugging tools will be integrated, including a simple logging system and crash dump generation.
- **Integration Testing**: The system will be tested in a virtual machine to ensure compatibility with modern hardware.

## Conclusion

Terry OS SM aims to deliver a lightweight, retro-inspired operating system with modern capabilities. By combining a simple graphical interface with a custom file system and multitasking support, it will serve as a unique platform for enthusiasts and developers alike. The focus will be on performance, ease of use, and minimalism, with future updates and features driven by user feedback and development.

---

### Explanation

1. **Introduction**: An overview of the OS's goals and inspiration.
2. **System Architecture**: A detailed breakdown of the system's components, such as the bootloader, kernel, file system, user interface, and drivers.
3. **Key Features**: A list of features that Terry OS SM will support.
4. **Goals and Philosophy**: The guiding principles for development.
5. **Performance Considerations**: Optimization targets for the OS.
6. **Security**: Basic security measures that will be incorporated.
7. **Development Tools**: The tools used in the development process.
8. **Testing and Debugging**: A description of the testing strategy to ensure the OS works smoothly.
9. **Conclusion**: Wrapping up the document with a summary of the project's purpose.

---

Feel free to edit or expand on any section based on your specific requirements. Let me know if you'd like to dive deeper into any particular part!
