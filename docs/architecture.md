# Architecture of Terry OS SM

## Table of Contents

- [Introduction](#introduction)
- [Overall System Architecture](#overall-system-architecture)
- [Bootloader](#bootloader)
- [Kernel](#kernel)
- [File System](#file-system)
- [Device Drivers](#device-drivers)
- [Graphical User Interface](#graphical-user-interface)
- [System Calls](#system-calls)
- [Memory Management](#memory-management)
- [Process Management](#process-management)
- [Conclusion](#conclusion)

## Introduction

The architecture of **Terry OS SM** is designed with modularity and efficiency in mind. It follows a classic monolithic kernel architecture with additional layers for hardware abstraction, process management, and graphical user interface support. This document provides a high-level overview of the components that make up **Terry OS SM**, how they interact, and the key design decisions made during development.

## Overall System Architecture

**Terry OS SM** follows a layered architecture where different subsystems communicate via well-defined interfaces. Below is a breakdown of the main components:

- **Bootloader**: Responsible for loading the kernel into memory and passing control to it.
- **Kernel**: The heart of the OS, managing system resources and providing services like process management, memory management, and hardware abstraction.
- **File System**: Manages the storage and retrieval of files on disk, with support for a simple custom file system.
- **Device Drivers**: Handle communication with hardware peripherals such as storage devices, keyboards, and graphics.
- **Graphical User Interface (GUI)**: Provides a graphical environment similar to older operating systems like Windows 3.11.
- **System Calls**: The interface through which user programs interact with the kernel to request system resources or services.

## Bootloader

The bootloader is the first piece of code that runs when **Terry OS SM** is booted. It is responsible for initializing the system, loading the kernel, and handing control over to the kernel once it is loaded into memory.

- **GRUB** is used as the bootloader, providing flexibility and ease of configuration.
- The bootloader configures the CPU, sets up protected mode, and loads the kernel into memory from the bootable media (e.g., USB, CD, ISO).
- It supports loading the kernel and passing any necessary parameters to it for initialization.

## Kernel

The kernel is the core component of **Terry OS SM** and is responsible for managing the system’s resources, including memory, processes, and I/O operations.

### Key Features:
- **Monolithic Design**: The kernel is monolithic, meaning it includes all the core functionalities (memory management, process management, file system, etc.) in a single large codebase.
- **Interrupt Handling**: The kernel handles hardware interrupts and provides necessary services to the rest of the system.
- **System Calls**: The kernel provides an interface to user-space programs through system calls, allowing them to request services like file operations, memory management, and I/O handling.
- **Kernel Modules**: While the kernel is monolithic, it supports loading and unloading kernel modules for device drivers and additional features without needing to restart the system.

### Key Responsibilities:
- **Process Management**: Handles process scheduling, context switching, and inter-process communication (IPC).
- **Memory Management**: Manages both physical and virtual memory using paging and segmentation.
- **I/O Management**: Provides a unified interface for accessing hardware devices.
- **File System**: Provides basic file storage and management capabilities.

## File System

The **Terry OS SM** file system is designed to be simple yet functional. It is a custom file system with the following features:

- **Hierarchical File Structure**: Supports directories and files organized in a tree structure.
- **Block-Based Storage**: Data is stored in fixed-size blocks on the disk. The file system maintains an index of free and used blocks to track file data.
- **Simple Metadata**: Stores basic file metadata such as name, size, and modification time.
- **Basic File Operations**: Supports basic file operations such as read, write, open, close, and delete.

## Device Drivers

**Terry OS SM** includes basic drivers to interact with common hardware peripherals, including storage devices, input devices (keyboard and mouse), and video display adapters.

- **Storage Drivers**: The OS supports reading and writing to disk devices, loading files from disk, and handling storage devices like USB drives and hard disks.
- **Input Drivers**: Includes drivers for basic keyboard and mouse input, allowing user interaction with the system.
- **Graphics Drivers**: The OS uses a simple graphics driver to support VGA or framebuffer-based graphics, rendering text and basic graphical output.

### Key Devices:
- **Keyboard**: Simple character input, key press events are captured and processed by the kernel.
- **Mouse**: Basic mouse support for pointing and clicking.
- **Graphics**: A basic graphics driver renders a simple graphical interface, resembling older operating systems like Windows 3.11.

## Graphical User Interface

The graphical user interface (GUI) of **Terry OS SM** is inspired by older operating systems like Windows 3.11, with a focus on simplicity and usability.

### Features:
- **Windowed Interface**: Allows for multiple application windows to be displayed on the screen simultaneously.
- **Graphical Rendering**: Uses basic pixel-based rendering with support for drawing simple shapes, text, and images.
- **Menu System**: The GUI includes a simple menu system for launching applications and managing system tasks.

### Technologies:
- **Graphics Rendering**: The graphics subsystem relies on the framebuffer to draw content to the screen. The OS is designed to be lightweight, using minimal graphical resources.
- **Event Handling**: User interactions (like mouse clicks and key presses) are captured by the GUI and passed to the appropriate application or system service.

## System Calls

System calls provide the interface between user-space programs and the kernel. They allow programs to request services like file I/O, process management, memory allocation, and more.

### Common System Calls:
- **File System Calls**: Open, read, write, close, delete files.
- **Process Management**: Fork, exec, wait, exit, and schedule processes.
- **Memory Management**: Allocate, free, and manage memory regions.
- **Graphics**: Draw pixels, lines, and text on the screen.

The system call interface is designed to be simple and efficient, with a direct mapping between user-space requests and kernel services.

## Memory Management

**Terry OS SM** uses a basic memory management model, with support for virtual memory, paging, and segmentation.

- **Paging**: The kernel uses paging to divide physical memory into small chunks called pages, and provides virtual memory to processes.
- **Memory Allocation**: The kernel provides dynamic memory allocation for processes using a simple heap-based memory model.

### Memory Protection:
- The kernel ensures that each process runs in its own address space, preventing them from directly accessing each other’s memory, ensuring system stability.

## Process Management

Process management is a critical component of **Terry OS SM**. The kernel is responsible for creating, scheduling, and terminating processes.

- **Scheduling**: A simple round-robin or priority-based scheduler is used to manage process execution.
- **Inter-Process Communication (IPC)**: The OS supports basic communication between processes using shared memory and pipes.
- **Multitasking**: **Terry OS SM** allows multiple processes to run concurrently in a cooperative multitasking environment.

## Conclusion

**Terry OS SM** is designed with a focus on simplicity and modularity. Its architecture provides a solid foundation for further development, with core components like the kernel, bootloader, file system, and GUI already in place. While it is a basic operating system, it offers a framework for experimentation, learning, and extending functionality as needed.

The modular approach to the design allows each subsystem to evolve independently, making it easier to add new features like advanced file systems, network support, and user applications in the future.

---

### Explanation of Sections:

- **Bootloader**: Describes how the bootloader loads the kernel and starts the operating system.
- **Kernel**: Details the kernel's responsibilities, structure, and key features like memory and process management.
- **File System**: Describes the file system's design, including its structure and file operations.
- **Device Drivers**: Details the support for hardware peripherals like keyboards, mice, and storage devices.
- **Graphical User Interface (GUI)**: Overview of the GUI design, inspired by Windows 3.11 with basic window management and graphical rendering.
- **System Calls**: Describes the interaction between user programs and the kernel through system calls.
- **Memory Management**: Overview of memory allocation, protection, and paging.
- **Process Management**: Details the kernel's process scheduling, multitasking, and inter-process communication.

---

Let me know if you need further refinements or additional sections!
