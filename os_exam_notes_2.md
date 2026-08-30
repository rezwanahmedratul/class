# Operating Systems — Comprehensive Exam Master Note & Study Guide

> **Course:** Operating System  
> **Course Teacher:** Md. Iftekhar Hossain Tushar, Lecturer, Department of CSE, Khwaja Yunus Ali University  
> **Target:** Complete syllabus coverage analyzed page-by-page from lecture slides, containing deep theoretical explanations, structured bullet points, extensive comparison tables, and fully worked-out step-by-step numerical problems with Gantt charts.

---

# Table of Contents
1. [Module 1: Introduction to Operating Systems](#module-1-introduction-to-operating-systems)
   - [1.1 Fundamentals & Core Definitions](#11-fundamentals--core-definitions)
   - [1.2 Structure & Layering of a Computer System](#12-structure--layering-of-a-computer-system)
   - [1.3 The Necessity of an Operating System](#13-the-necessity-of-an-operating-system)
   - [1.4 Essential OS Terminology](#14-essential-os-terminology)
   - [1.5 Multiprocessing vs. Multithreading](#15-multiprocessing-vs-multithreading)
   - [1.6 Kernel vs. Shell](#16-kernel-vs-shell)
   - [1.7 System Software vs. Application Software](#17-system-software-vs-application-software)
   - [1.8 System Calls (Architecture, API, Dual-Mode Execution)](#18-system-calls-architecture-api-dual-mode-execution)
   - [1.9 Windows vs. Unix System Calls Comparison Table](#19-windows-vs-unix-system-calls-comparison-table)
   - [1.10 Major Operating Systems in the Industry](#110-major-operating-systems-in-the-industry)
   - [1.11 12 Major Functions of an Operating System](#111-12-major-functions-of-an-operating-system)
   - [1.12 Why Study Operating Systems?](#112-why-study-operating-systems)
2. [Module 2: Types of Operating Systems](#module-2-types-of-operating-systems)
   - [2.1 Classification Overview](#21-classification-overview)
   - [2.2 Batch Operating System](#22-batch-operating-system)
   - [2.3 Multiprogramming Operating System](#23-multiprogramming-operating-system)
   - [2.4 Multiprocessing Operating System (SMP vs. AMP)](#24-multiprocessing-operating-system-smp-vs-amp)
   - [2.5 Multitasking Operating System (Time-Sharing)](#25-multitasking-operating-system-time-sharing)
   - [2.6 Network Operating System (NOS)](#26-network-operating-system-nos)
   - [2.7 Distributed Operating System (DOS)](#27-distributed-operating-system-dos)
   - [2.8 Time-Sharing Operating System (TSOS)](#28-time-sharing-operating-system-tsos)
   - [2.9 Real-Time Operating System (RTOS)](#29-real-time-operating-system-rtos)
   - [2.10 Comprehensive Comparison Table of All OS Types](#210-comprehensive-comparison-table-of-all-os-types)
3. [Module 3: Operating System Structures & Architectures](#module-3-operating-system-structures--architectures)
   - [3.1 What is an OS Structure?](#31-what-is-an-os-structure)
   - [3.2 The 8 Architectural Designs](#32-the-8-architectural-designs)
     - [3.2.1 Simple Structure (MS-DOS)](#321-simple-structure-ms-dos)
     - [3.2.2 Monolithic Structure](#322-monolithic-structure)
     - [3.2.3 Micro-Kernel Structure](#323-micro-kernel-structure)
     - [3.2.4 Hybrid-Kernel Structure](#324-hybrid-kernel-structure)
     - [3.2.5 Exo-Kernel Structure](#325-exo-kernel-structure)
     - [3.2.6 Layered Structure](#326-layered-structure)
     - [3.2.7 Modular Structure (Loadable Kernel Modules)](#327-modular-structure-loadable-kernel-modules)
     - [3.2.8 Virtual Machine Structure](#328-virtual-machine-structure)
   - [3.3 Comprehensive Architecture Comparison Matrix](#33-comprehensive-architecture-comparison-matrix)
4. [Module 4: Process Management & Life Cycle](#module-4-process-management--life-cycle)
   - [4.1 Process vs. Program](#41-process-vs-program)
   - [4.2 Process Layout in Main Memory (Stack, Heap, Data, Text)](#42-process-layout-in-main-memory-stack-heap-data-text)
   - [4.3 Process Control Block (PCB) & Process Table](#43-process-control-block-pcb--process-table)
   - [4.4 Process Life Cycle: Five-State Process Model](#44-process-life-cycle-five-state-process-model)
   - [4.5 Two-State Process Model & Dispatcher](#45-two-state-process-model--dispatcher)
   - [4.6 Process Queues & Schedulers (Long-Term, Short-Term, Medium-Term)](#46-process-queues--schedulers-long-term-short-term-medium-term)
   - [4.7 Context Switching: Mechanism, Trigger, Overhead](#47-context-switching-mechanism-trigger-overhead)
5. [Module 5: CPU Scheduling Algorithms & Solved Numericals](#module-5-cpu-scheduling-algorithms--solved-numericals)
   - [5.1 Core Scheduling Concepts (Preemptive vs. Non-Preemptive)](#51-core-scheduling-concepts-preemptive-vs-non-preemptive)
   - [5.2 Mathematical Terms & Performance Metrics (AT, BT, CT, TAT, WT, RT)](#52-mathematical-terms--performance-metrics-at-bt-ct-tat-wt-rt)
   - [5.3 Algorithm 1: First-Come, First-Served (FCFS)](#53-algorithm-1-first-come-first-served-fcfs)
     - [Solved Problem 1.1 (Standard FCFS)](#solved-problem-11-standard-fcfs)
     - [Solved Problem 1.2 (FCFS with Idle Time)](#solved-problem-12-fcfs-with-idle-time)
   - [5.4 Algorithm 2: Shortest Job First (SJF - Non-Preemptive)](#54-algorithm-2-shortest-job-first-sjf---non-preemptive)
     - [Solved Problem 2.1 (SJF with Same Arrival Time)](#solved-problem-21-sjf-with-same-arrival-time)
     - [Solved Problem 2.2 (SJF with Staggered Arrival Times)](#solved-problem-22-sjf-with-staggered-arrival-times)
   - [5.5 Algorithm 3: Shortest Remaining Time First (SRTF - Preemptive SJF)](#55-algorithm-3-shortest-remaining-time-first-srtf---preemptive-sjf)
     - [Solved Problem 3.1 (Complete Step-by-Step SRTF Execution)](#solved-problem-31-complete-step-by-step-srtf-execution)
   - [5.6 Algorithm 4: Round Robin (RR) Scheduling](#56-algorithm-4-round-robin-rr-scheduling)
     - [Solved Problem 4.1 (RR with Same Arrival Time, q = 2ms)](#solved-problem-41-rr-with-same-arrival-time-q--2ms)
     - [Solved Problem 4.2 (RR with Staggered Arrival Times, q = 3ms)](#solved-problem-42-rr-with-staggered-arrival-times-q--3ms)
   - [5.7 Algorithm 5: Priority Scheduling](#57-algorithm-5-priority-scheduling)
     - [Solved Problem 5.1 (Non-Preemptive Priority Scheduling)](#solved-problem-51-non-preemptive-priority-scheduling)
     - [Solved Problem 5.2 (Preemptive Priority Scheduling)](#solved-problem-52-preemptive-priority-scheduling)
   - [5.8 Algorithm 6: Guaranteed Scheduling](#58-algorithm-6-guaranteed-scheduling)
   - [5.9 Algorithm 7: Lottery Scheduling](#59-algorithm-7-lottery-scheduling)
   - [5.10 Master Summary Table of Scheduling Algorithms](#510-master-summary-table-of-scheduling-algorithms)

---

# Module 1: Introduction to Operating Systems

## 1.1 Fundamentals & Core Definitions
*   **What is an Operating System (OS)?**
    *   An **Operating System** is an organized software program acting as an **intermediary/interface** between the computer hardware and the computer user.
    *   **Primary Objective:** To provide a convenient, user-friendly, and computationally efficient environment in which users can execute their application programs without dealing with raw binary hardware signals.
*   **Why is the OS Essential?**
    *   **Hardware Nature:** Physical hardware (transistors, logic gates, ALU, registers, memory buses) exclusively comprehends low-level digital machine code ($0\text{s}$ and $1\text{s}$).
    *   **User Disconnect:** Direct hardware programming via binary machine instructions is impossibly tedious, error-prone, and incomprehensible to general human users and developers.
    *   **Intermediary Role:** The OS abstracts the physical hardware by translating high-level human actions into machine instructions, managing all concurrent processes, and allocating system resources equitably.

---

## 1.2 Structure & Layering of a Computer System
A modern computer system is organized into a hierarchical architecture:

```
+-------------------------------------------------------------+
|                        1. USERS                             |
|          (End Users, Programmers, System Admins)            |
+-------------------------------------------------------------+
                              |
+-------------------------------------------------------------+
|                 2. APPLICATION PROGRAMS                     |
| (Word Processors, Spreadsheets, Web Browsers, Games, DBs)   |
+-------------------------------------------------------------+
                              |
+-------------------------------------------------------------+
|                   3. SYSTEM PROGRAMS                        |
|  (Shells, Text Editors, Compilers, Device Drivers, Tools)   |
+-------------------------------------------------------------+
                              |
+-------------------------------------------------------------+
|                 4. OPERATING SYSTEM (OS)                    |
|          (Windows, Linux, macOS, Android, iOS)              |
+-------------------------------------------------------------+
                              |
+-------------------------------------------------------------+
|                   5. COMPUTER HARDWARE                      |
| (CPU, Primary RAM, Secondary Storage, I/O Devices, Buses)   |
+-------------------------------------------------------------+
```

### Detailed Breakdown of Layers:
1.  **Users:** People, automated systems, or other external devices interacting with the computer.
2.  **Application Programs:** Purpose-built software designed to perform specific user-facing tasks (e.g., Google Chrome, Microsoft Word, VLC Player, Photoshop, DBMS).
3.  **System Programs / Utilities:** Software packages that provide a convenient environment for program development and execution (e.g., Command Shells, File Managers, Device Drivers, Antivirus tools, Disk Defragmenters).
4.  **Operating System:** Special privileged system software that acts as the core interface, controlling and coordinating hardware usage among competing applications.
5.  **Hardware:** The physical electronic components (CPU, RAM, Hard Drives/SSDs, Video cards, Keyboards, Mice, Network Cards).

---

## 1.3 The Necessity of an Operating System
*   **Scenario Without an OS (The "Busy City Without Traffic Signals" Analogy):**
    *   Imagine a bustling metropolis without traffic police, road signs, or automated traffic lights. Cars would collide at intersections, traffic would deadlock, and emergency vehicles could never pass.
    *   Similarly, without an OS in a PC:
        1.  **Duplicate Low-Level Implementations:** Every application developer would be forced to write custom code for drawing UI pixels, controlling disk spin motors, reading sector bytes from flash memory, handling physical network packets, and managing keyboard interrupt pins.
        2.  **Resource Collisions:** Two programs attempting to write to disk at the same time would corrupt memory and overwrite each other's data.
        3.  **Complete Inability to Run:** Modern general-purpose computers cannot function without an underlying OS to coordinate system bootstrap, device initialization, and process management.

---

## 1.4 Essential OS Terminology
*   **Operating System:** Master control program managing hardware and software resources.
*   **Kernel:** The core, foundational program of an OS that executes in privileged (kernel) mode, remains permanently in RAM from system boot until power-off, and directly controls hardware.
*   **Shell:** The outer software wrapper/interface (CLI like Bash/PowerShell or GUI like Windows Desktop) through which users interact with the OS.
*   **Process:** A dynamic program in active execution, occupying memory and CPU cycles.
*   **Thread:** The smallest independent sequence of programmed instructions that can be managed by a scheduler (a lightweight sub-unit of a process).
*   **System Call:** The programmatic API interface enabling a user-mode application to safely request privileged services directly from the kernel.

---

## 1.5 Multiprocessing vs. Multithreading

### Detailed Comparison Table:
| Parameter | Multiprocessing | Multithreading |
| :--- | :--- | :--- |
| **Fundamental Definition** | A system architecture incorporating two or more physical/logical CPUs (processors). | A programming/architectural technique where a single process is split into multiple concurrent execution paths (threads). |
| **Hardware vs. Software** | Primarily a hardware capability supported by the OS. | Primarily a software/code design concept executing on single or multi-core CPUs. |
| **Execution Mechanism** | Multiple separate processes are executed simultaneously on separate physical CPU cores. | Multiple threads belonging to the same parent process execute simultaneously or concurrently. |
| **Memory & Address Space** | Each process maintains its own separate, isolated, and protected address space in RAM. | All threads of a process share the same memory space, code section, data section, and open files. |
| **Creation & Switching Cost**| Heavyweight: high memory overhead, slow process creation, and high context-switching time. | Lightweight: economical memory footprint, rapid thread creation, and minimal context-switch overhead. |
| **Inter-Process Communication**| Requires explicit IPC mechanisms (Pipes, Sockets, Shared Memory, Message Queues). | Fast and direct via shared memory variables (requires synchronization primitives like mutexes). |
| **Failure Impact** | High fault isolation: if one process crashes, other processes continue unaffected. | Low fault isolation: if one thread performs an illegal memory access or crashes, the entire process terminates. |
| **Primary Goal** | Maximizing total system computing throughput and parallel processing capacity. | Improving application responsiveness and performing concurrent tasks (e.g., typing, spell checking, and auto-saving simultaneously in Word). |

### Categories of Multiprocessing:
1.  **Symmetric Multiprocessing (SMP):**
    *   All physical processors are peer equals and share identical access to system bus, primary memory (RAM), and I/O subsystems.
    *   Every CPU executes an identical copy of the OS kernel.
    *   Workload is dynamically balanced across all available processors.
    *   *Fault Tolerance:* If one CPU fails, the remaining CPUs absorb the workload without halting the operating system.
2.  **Asymmetric Multiprocessing (AMP):**
    *   Adopts a hierarchical **Master-Slave** architecture.
    *   A single designated **Master Processor** runs the OS kernel code, manages system resources, and assigns specific scheduled tasks to subordinate **Slave Processors**.
    *   *Bottleneck Risk:* If the Master Processor becomes overloaded or crashes, the entire system experiences significant performance degradation or fails completely.

---

## 1.6 Kernel vs. Shell

### In-Depth Comparison:
| Aspect | Kernel | Shell |
| :--- | :--- | :--- |
| **Location & Layer** | Core inner layer; directly interfaces with physical CPU, RAM, and I/O. | Outer peripheral layer; interfaces between user/applications and the Kernel. |
| **Execution Mode** | Executes in **Kernel Mode / Privileged Mode** (Ring 0). | Executes in **User Mode / Unprivileged Mode** (Ring 3). |
| **Memory Residency** | Loaded into RAM during system boot by the bootloader; stays permanently in memory until shutdown. | Loaded into memory only when invoked; can be opened, closed, or swapped out dynamically. |
| **Types / Variants** | Monolithic, Microkernel, Hybrid, Exokernel, Modular. | Command-Line Interfaces (Bash, Zsh, PowerShell, CMD) and Graphical User Interfaces (GNOME, Windows Explorer, Aqua). |
| **Primary Function** | Memory management, CPU scheduling, interrupt handling, device driver management, hardware abstraction. | User prompt display, command parsing, input interpretation, and passing parsed requests to the kernel via system calls. |

---

## 1.7 System Software vs. Application Software

```
                             +-----------------------+
                             |       SOFTWARE        |
                             +-----------------------+
                                    /         \
                                   /           \
               +----------------------+     +-------------------------+
               |   System Software    |     |  Application Software   |
               +----------------------+     +-------------------------+
                  /                \                    |
                 /                  \                   |
     +--------------------+   +-------------------+  (Word Processors,
     | Operating Systems  |   | Utility Software  |   Browsers, Games,
     +--------------------+   +-------------------+   Spreadsheets,
     | - Windows          |   | - Antivirus       |   Media Players,
     | - Linux            |   | - Defrag Tools    |   Photo/Video Editors)
     | - macOS            |   | - Backup Utilities|
     | - iOS / Android    |   | - File Compressors|
     +--------------------+   | - Firewalls       |
                              +-------------------+
```

*   **System Software:**
    *   Low-level programs that maintain, control, and support basic computer operations.
    *   Includes Operating Systems (Windows, Linux, macOS) and Utility Software (Antivirus, Disk Cleaners, Firewalls, Compression tools like 7-Zip).
*   **Application Software:**
    *   End-user productivity software written to execute specific computational tasks requested by the human operator (e.g., Microsoft Word, Google Chrome, Adobe Photoshop, MySQL).

---

## 1.8 System Calls (Architecture, API, Dual-Mode Execution)
*   **Definition:** A **System Call** is the programmatic mechanism by which a user-space application requests a privileged service from the operating system's kernel.
*   **Dual-Mode Operation (User Mode vs. Kernel Mode):**
    *   **User Mode (Mode Bit = 1):** Unprivileged execution environment preventing user programs from directly manipulating hardware registers or raw physical memory.
    *   **Kernel Mode (Mode Bit = 0):** Privileged execution environment with unrestricted access to CPU instructions, control registers, and physical hardware addresses.
    *   **The Transition Mechanism:**
        1.  User program invokes a high-level API library function (e.g., `printf()` in C).
        2.  The library maps this to a specific system call number and triggers a software interrupt / trap (`sysenter` / `syscall` / `int 0x80`).
        3.  Hardware flips the Mode Bit from $1 \to 0$ and transfers control to the Kernel Interrupt Vector Table.
        4.  Kernel executes the privileged service handler.
        5.  Hardware resets Mode Bit from $0 \to 1$ and returns execution to user code.
*   **Services Provided by System Calls:**
    *   Process control (creation, execution, termination, synchronization).
    *   Main memory allocation and deallocation.
    *   File access, directory manipulation, and disk storage management.
    *   Device attachment, reading, writing, and releasing.
    *   Information maintenance (timers, process IDs, system time).
    *   Inter-process communication and computer networking.
    *   System security and resource protection permissions.

---

## 1.9 Windows vs. Unix System Calls Comparison Table

| Category | Windows API System Call | Unix / Linux POSIX System Call | Detailed Functional Purpose |
| :--- | :--- | :--- | :--- |
| **Process Control** | `CreateProcess()` | `fork()` followed by `exec()` | Spawns a new child process in the operating system. |
| | `ExitProcess()` | `exit()` | Terminates the calling process and cleans up resources. |
| | `WaitForSingleObject()` | `wait()` | Blocks parent process until child process finishes execution. |
| **File Manipulation** | `CreateFile()` | `open()` / `creat()` | Opens an existing file or creates a new file descriptor. |
| | `ReadFile()` | `read()` | Reads binary data bytes from an open file descriptor. |
| | `WriteFile()` | `write()` | Writes binary data bytes into an open file descriptor. |
| | `CloseHandle()` | `close()` | Closes the open file descriptor/handle and flushes buffers. |
| **Device Management**| `SetConsoleMode()` | `ioctl()` | Controls underlying device hardware and terminal parameters. |
| | `ReadConsole()` | `read()` | Reads input streams from terminal/keyboard hardware. |
| | `WriteConsole()` | `write()` | Sends output display streams to screen console hardware. |
| **Information Maint.**| `GetCurrentProcessID()`| `getpid()` | Retrieves unique Process Identifier (PID) of current process.|
| | `SetTimer()` | `alarm()` | Sets a hardware-backed timer for software interrupt signals. |
| | `Sleep()` | `sleep()` | Suspends process execution for a specified duration in ms. |
| **Communication** | `CreatePipe()` | `pipe()` | Creates a unidirectional inter-process communication pipe. |
| | `CreateFileMapping()` | `shmget()` | Allocates a shared memory segment for IPC. |
| | `MapViewOfFile()` | `mmap()` | Maps shared memory segment into process address space. |
| **Protection** | `SetFileSecurity()` | `chmod()` | Modifies file access permissions (read/write/execute). |
| | `InitializeSecurityDescriptor()`| `umask()` | Defines default security mask for newly created files. |
| | `SetSecurityDescriptorGroup()` | `chown()` | Changes the user/group ownership of a filesystem node. |

---

## 1.10 Major Operating Systems in the Industry
1.  **Microsoft Windows:**
    *   Developed by Microsoft Corporation.
    *   Started in 1985 as a 16-bit graphical user interface add-on running on top of MS-DOS.
    *   **Windows 95** was the first standalone, fully integrated 32-bit graphical operating system.
    *   Dominates desktop/laptop market share with widespread enterprise software compatibility.
2.  **macOS:**
    *   Developed by Apple Inc. exclusively for Mac hardware.
    *   Successor to Mac OS X; built on top of the Unix-based Darwin OS (Mach microkernel + FreeBSD codebase).
    *   Renowned for high stability, aesthetic UI (Aqua), and tight hardware-software optimization.
3.  **Linux:**
    *   Free, open-source operating system kernel created by Linus Torvalds in 1991.
    *   Monolithic kernel architecture with dynamic loadable kernel modules.
    *   Powers the vast majority of web servers, cloud infrastructure, supercomputers, and embedded IoT devices.
4.  **Android:**
    *   Mobile operating system developed by Google and the Open Handset Alliance.
    *   Built on top of a modified Linux kernel core with custom middleware and Java/Kotlin execution runtimes (ART).
    *   Dominates the worldwide smartphone and tablet market.
5.  **iOS:**
    *   Proprietary mobile operating system created by Apple Inc. for iPhone, iPad (iPadOS), and iPod Touch.
    *   Successor to the original "iPhone OS", derived directly from macOS Darwin core.

---

## 1.11 12 Major Functions of an Operating System
1.  **User Interface (UI) Provision:** Provides GUI, CLI, or touch interfaces for users to configure, manage, and interact with the machine.
2.  **Application Management:** Controls application lifecycles (loading from disk, execution, background state, memory protection, termination).
3.  **Device Management:** Tracks all connected peripheral hardware via device drivers, arbitrating which process accesses which device and for how long.
4.  **Memory Management:** Allocates and de-allocates primary memory blocks (RAM), preventing processes from corrupting each other's memory.
5.  **Processor / Process Management:** Implements CPU scheduling algorithms to balance execution time across multiple competing processes.
6.  **File System Management:** Organizes files into directories/folders, managing file metadata, storage sectors, access permissions, and read/write operations.
7.  **Multitasking Coordination:** Rapidly multiplexes CPU time among multiple active programs to provide smooth concurrent operations.
8.  **Input/Output (I/O) Management:** Buffers, caches, and handles asynchronous data streams to and from disks, network cards, printers, and screens.
9.  **Error Detection & Handling:** Continuously monitors CPU, memory, and devices to catch hardware faults, division-by-zero errors, memory access violations, and send appropriate warnings.
10. **Batch Job Management:** Automates large background tasks (e.g., print spooling, payroll calculations) without user intervention.
11. **Parallel Processing Management:** Divides complex multi-threaded tasks across multiple physical CPU cores to maximize throughput.
12. **Security & Protection:** Enforces password authentication, role-based access control, encryption, and process isolation.

---

## 1.12 Why Study Operating Systems?
*   **Understand Inner Workings:** Reveals how hardware, memory, and software communicate under the hood.
*   **Fix Minor & Major Issues:** Enables system diagnosis, debugging deadlock scenarios, analyzing memory leaks, and optimizing performance bottlenecks.
*   **Write High-Performance Code:** Allows developers to write efficient multithreaded, asynchronous, cache-friendly software that minimizes system call overhead.
*   **Choose the Best OS:** Equips engineers to select appropriate operating systems for specific engineering requirements (e.g., RTOS for avionics vs. Linux for servers vs. Windows for office desktops).

---

# Module 2: Types of Operating Systems

## 2.1 Classification Overview
Operating Systems are classified into 8 distinct paradigms based on processing mechanisms, hardware architecture, user interaction, and response constraints:
1.  Batch Operating System
2.  Multiprogramming Operating System
3.  Multiprocessing Operating System
4.  Multitasking (Time-Sharing) Operating System
5.  Network Operating System (NOS)
6.  Distributed Operating System (DOS)
7.  Time-Sharing Operating System (TSOS)
8.  Real-Time Operating System (RTOS)

```
                       +---------------------------------+
                       |    TYPES OF OPERATING SYSTEM    |
                       +---------------------------------+
                         /    |     |      |     |     \
    +-------------------+     |     |      |     |      +------------------+
    | Batch Processing  |     |     |      |     |      |  Real-Time OS    |
    +-------------------+     |     |      |     |      +------------------+
          +-------------------+     |      |     +-------------------+
          | Multiprogramming  |     |      |     |   Time-Sharing    |
          +-------------------+     |      |     +-------------------+
                +-------------------+      +-------------------+
                | Multiprocessing   |      | Network / Distrib |
                +-------------------+      +-------------------+
```

---

## 2.2 Batch Operating System
*   **Historical Era:** Highly dominant in the 1960s–1970s (Mainframe era).
*   **Operating Mechanism:**
    *   No direct interactive connection between users and the central computer.
    *   Users prepare jobs (data + instructions) on offline media like **punch cards** or magnetic tapes.
    *   Users hand jobs over to a human **Computer Operator**.
    *   The operator sorts jobs with similar resource requirements (e.g., all Fortran jobs, all Cobol jobs) into **Batches**.
    *   Batches are loaded sequentially into the mainframe computer for uninterrupted processing.
*   **Advantages:**
    *   Reduced setup time between similar jobs.
    *   High CPU utilization during batch execution.
*   **Disadvantages / Limitations:**
    *   **CPU Idle Time:** During slow I/O operations (punch card reads/tape writes), the CPU sat completely idle.
    *   **No Interactive Debugging:** Programmers had to wait hours or days to discover simple syntax errors.
    *   **No Priority System:** A long-running job blocked all subsequent jobs in the batch.

---

## 2.3 Multiprogramming Operating System
*   **Fundamental Principle:** Keeping the CPU $100\%$ busy at all times by storing multiple active programs simultaneously in main memory (RAM).
*   **The Dual-Time Concept of a Process:**
    $$\text{Total Process Time} = \text{CPU Burst Time (Computation)} + \text{I/O Burst Time (Input/Output)}$$
*   **Working Principle:**
    *   In a single-program system, whenever a program requested I/O, the CPU sat idle waiting for the mechanical drive.
    *   In a **Multiprogramming OS**, multiple programs ($P_1, P_2, P_3$) reside in RAM.
    *   When $P_1$ initiates an I/O operation, the OS immediately switches the CPU to execute $P_2$.
    *   When $P_2$ requests I/O, CPU switches to $P_3$, and so on.
*   **Key Benefits:**
    *   Dramatically increases overall CPU utilization.
    *   Significantly decreases average process turnaround time.
    *   Supports dynamic concurrent execution of long and short tasks.

---

## 2.4 Multiprocessing Operating System (SMP vs. AMP)
*   **Fundamental Principle:** Achieves true **parallel computing** by utilizing two or more physical CPUs working in tandem on shared workloads.
*   **Key Characteristics:**
    *   Increased overall throughput (number of processes completed per unit time).
    *   Tasks can be divided into parallel sub-routines running on multiple cores simultaneously.
    *   **Fault Tolerance & Graceful Degradation:** If one processor catches fire or fails, remaining processors absorb active threads, ensuring uninterrupted system availability.

### SMP vs. AMP Comparison:
| Comparison Criterion | Symmetric Multiprocessing (SMP) | Asymmetric Multiprocessing (AMP) |
| :--- | :--- | :--- |
| **Architecture** | Peer-to-peer; all processors share equal standing. | Master-Slave hierarchy; 1 Master controls all Slaves. |
| **OS Execution** | Every processor can run OS kernel routines. | Only the Master runs the OS kernel; slaves run user tasks. |
| **Memory & I/O Access**| Uniform, equal access across all processors to shared RAM. | Master controls memory bus and delegates I/O access to slaves. |
| **Workload Distribution**| Dynamic load balancing across all available cores. | Static/Assigned: Master assigns specific tasks to specific slaves. |
| **Fault Tolerance** | High: failure of one CPU does not stop the system. | Low: failure of the Master processor crashes the entire OS. |
| **Design Complexity** | High: requires complex synchronization and locking in kernel.| Low: simple to design and implement in hardware/software. |

---

## 2.5 Multitasking Operating System (Time-Sharing)
*   **Fundamental Concept:** A logical extension of multiprogramming designed specifically for single-user and multi-user interactive systems.
*   **Working Mechanism:**
    *   The CPU rapidly switches between multiple active processes using a fixed **time quantum** (e.g., $10\text{–}50\text{ ms}$).
    *   Because the CPU switches at microsecond speeds, human users perceive that all applications (e.g., Spotify, Chrome, Microsoft Word, Discord) are executing simultaneously in parallel.
*   **Multiprogramming vs. Multitasking:**
    *   *Multiprogramming:* Focuses strictly on maximizing CPU utilization by switching processes when one is blocked on I/O.
    *   *Multitasking:* Focuses on minimizing human response time by pre-emptively switching processes rapidly even when they are actively computing.

---

## 2.6 Network Operating System (NOS)
*   **Definition:** An operating system specifically designed to connect, manage, and coordinate autonomous standalone computers over a Local Area Network (LAN).
*   **Key Concept — Tightly Coupled Configuration:**
    *   Users are fully aware of individual computer nodes, IP addresses, network printer names, and remote file directories.
*   **Architectures:**
    1.  **Peer-to-Peer NOS:** Every workstation on the LAN acts as both a client and a server, sharing local files and printers (e.g., small home office network). Low cost, but difficult to secure.
    2.  **Client/Server NOS:** Dedicated central servers (running Windows Server, Red Hat Enterprise Linux) provide centralized file storage, DNS, Active Directory authentication, and print queues to client workstations. Highly secure and scalable, but expensive.

---

## 2.7 Distributed Operating System (DOS)
*   **Definition:** An advanced OS where a single logical operating system is partitioned and installed across multiple physically separate, autonomous computer nodes connected via a high-speed network.
*   **Key Concept — Loosely Coupled / Transparent System:**
    *   Unlike NOS, in a Distributed OS, users have **complete transparency**. A user views the entire multi-computer cluster as a single, unified, ultra-powerful virtual computer.
    *   Computers possess their own independent CPUs, local RAM, and system clocks.
    *   The DOS kernel handles network protocols, distributed file systems, remote process execution, and load sharing automatically.
*   **Advantages:** High computational power, resource sharing, scalability, and extreme fault tolerance.

---

## 2.8 Time-Sharing Operating System (TSOS)
*   **Core Principle:** Allows hundreds of concurrent users to log into a central mainframe simultaneously via dumb terminals, allocating each user a minute **time slice (quantum)** of CPU time.
*   **Three Pillars of TSOS:**
    1.  **CPU Scheduling:** Preemptive round-robin algorithms allocating uniform time slices.
    2.  **Multiprogramming:** Multiple user programs kept resident in main memory simultaneously.
    3.  **Context Switching:** Rapidly storing and restoring CPU register states so each user session resumes seamlessly.

---

## 2.9 Real-Time Operating System (RTOS)
*   **Definition:** An operating system designed for mission-critical hardware environments where computational correctness depends not only on the logical output, but strictly on the **exact time at which the output is delivered**.
*   **Key Concept — Deadlines:**
    *   Every task has a hard or soft deadline. Missing a deadline produces catastrophic failures or renders the computational data completely useless.
*   **Classifications:**
    *   **Hard Real-Time System:** Zero tolerance for deadline delays. A single missed deadline results in fatal system failure (e.g., Aircraft fly-by-wire controls, Car Anti-lock Braking Systems (ABS), Cardiac Pacemakers, Missile guidance systems).
    *   **Soft Real-Time System:** Missed deadlines degrade quality of service but do not cause fatal physical damage (e.g., Video streaming, online multiplayer gaming).

---

## 2.10 Comprehensive Comparison Table of All OS Types

| Operating System Type | Primary Focus / Objective | User Interactivity | Hardware Coupling | Key Disadvantage | Classic Real-World Example |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **Batch OS** | High throughput for similar bulk jobs. | None (offline submission). | Single central machine. | No interactive debugging; CPU idle during I/O. | IBM 7094 / Mainframe Batch Systems |
| **Multiprogramming OS** | Maximize CPU utilization. | Low to Moderate. | Single CPU with shared RAM. | Memory fragmentation; complex CPU scheduling. | Early IBM OS/360 |
| **Multiprocessing OS** | True hardware parallelism & throughput.| High. | Tightly coupled multi-CPU system. | Complex hardware bus design; synchronization locks. | Modern Multicore PC / Server Architectures |
| **Multitasking OS** | Fast user response time on desktop PC. | High (direct user interaction).| Single or multi-core PC. | Frequent context switching adds minor CPU overhead. | Windows 10/11, macOS, Ubuntu Desktop |
| **Network OS (NOS)** | Network file/printer/user sharing. | High (node-aware). | Tightly coupled over LAN. | Central server failure disrupts network services. | Windows Server 2022, Novell NetWare |
| **Distributed OS** | Full resource aggregation with transparency.| High (transparent). | Loosely coupled autonomous nodes. | High network protocol complexity; latency overhead.| Amoeba, Plan 9, Google Borg/Kubernetes |
| **Time-Sharing OS** | Multi-user concurrent mainframe access. | High (terminal sessions). | Central host with dumb terminals.| Security risks among co-located user programs. | Unix Time-Sharing, CTSS, MULTICS |
| **Real-Time OS (RTOS)**| Strict deadline adherence & determinism. | Variable (event-driven). | Embedded microcontrollers/CPUs. | Low flexibility; expensive custom development. | VxWorks, QNX, FreeRTOS, RTLinux |

---

# Module 3: Operating System Structures & Architectures

## 3.1 What is an OS Structure?
An **Operating System Structure** represents the architectural blueprint defining how the core components of the OS (Kernel, File System, Memory Manager, Device Drivers, Process Scheduler, Network Stack) are organized, integrated, and interconnected with the underlying kernel and hardware.

---

## 3.2 The 8 Architectural Designs

```
1. Simple Structure (MS-DOS)     2. Monolithic Kernel       3. Micro-Kernel
+--------------------------+    +-----------------------+   +-------------------+
|  Apps -> Drivers -> BIOS |    | Apps in User Mode     |   | Apps & Drivers in |
|  (No Protected Memory)   |    | Large All-in-1 Kernel |   | User Space        |
+--------------------------+    +-----------------------+   | Tiny Core Kernel  |
                                                            +-------------------+
4. Hybrid Kernel                 5. Exo-Kernel               6. Layered Structure
+--------------------------+    +-----------------------+   +-------------------+
| Monolithic Speed +       |    | Minimal Kernel +      |   | Layer N (UI)      |
| Microkernel Modularity   |    | Direct App Hardware   |   | ...               |
+--------------------------+    +-----------------------+   | Layer 0 (Hardware)|
                                                            +-------------------+
7. Modular Structure (LKM)       8. Virtual Machine Structure
+--------------------------+    +-----------------------+
| Core Kernel + Dynamically|    | Multiple Guest OSs    |
| Loaded Runtime Modules   |    | running on Hypervisor |
+--------------------------+    +-----------------------+
```

---

### 3.2.1 Simple Structure (MS-DOS)
*   **Description:** Developed for early personal computers with limited hardware protection. No clear separation between user applications, system routines, and hardware device drivers.
*   **Architectural Layers in MS-DOS:**
    $$\text{Application Programs} \longleftrightarrow \text{Resident System Programs} \longleftrightarrow \text{MS-DOS Device Drivers} \longleftrightarrow \text{ROM BIOS Device Drivers}$$
*   **Advantages:**
    *   Extreme performance speed due to direct hardware memory access without system call overhead.
    *   Simple and easy for kernel programmers to construct on primitive hardware.
*   **Disadvantages:**
    *   **No Data Hiding or Memory Protection:** A bug or crash in a user application directly corrupts BIOS memory and crashes the entire computer.
    *   Zero modular boundary enforcement.

---

### 3.2.2 Monolithic Structure
*   **Description:** The entire operating system (Process Scheduler, Memory Manager, File System, Network Subsystems, and Device Drivers) is compiled together into one massive binary executable that runs entirely in privileged **Kernel Mode**.
*   **Advantages:**
    *   **Maximum Performance:** Communication between internal OS subsystems occurs via direct, blazing-fast C function calls in memory without context-switch penalties.
    *   Simple unified codebase architecture.
*   **Disadvantages:**
    *   **High Vulnerability / Low Reliability:** Because all code runs in Ring 0, a bug or null-pointer crash in a single third-party printer driver causes a fatal kernel panic (Blue Screen of Death).
    *   Extremely difficult to maintain, modify, and debug as the codebase expands to millions of lines.

---

### 3.2.3 Micro-Kernel Structure
*   **Description:** Strips all non-essential components out of the kernel space, moving Device Drivers, File Systems, and GUI Managers into unprivileged **User Space** as independent server daemons. The remaining **Micro-kernel** handles only minimal primitives: Address Space Management, Inter-Process Communication (IPC), and Basic CPU Scheduling.
*   **Classic Examples:** Mach, QNX, L4, macOS core (XNU/Mach hybrid).
*   **Advantages:**
    *   **Extreme Reliability & Security:** If a device driver or file system daemon crashes in user space, the OS kernel restarts it without crashing the machine.
    *   **High Portability:** Porting the OS to a new CPU architecture requires modifying only the tiny microkernel code.
*   **Disadvantages:**
    *   **Performance Degradation:** Every interaction between an application, file system, and hardware requires multiple message-passing IPC context switches across user and kernel boundaries.

---

### 3.2.4 Hybrid-Kernel Structure
*   **Description:** An engineered compromise combining the raw execution speed of a Monolithic kernel with the modularity, security, and stability of a Microkernel architecture.
*   **Working Principle:** Runs critical performance-sensitive services (such as File Systems, Networking, and Graphics Drivers) in kernel space alongside the microkernel core to avoid IPC latency, while maintaining modular abstraction boundaries.
*   **Classic Examples:** Microsoft Windows NT architecture (Windows 10/11), Apple macOS (XNU).
*   **Advantages:** Excellent performance balance, wide hardware compatibility, strong subsystem isolation.
*   **Disadvantages:** High overall structural complexity; difficult to debug race conditions.

---

### 3.2.5 Exo-Kernel Structure
*   **Description:** Designed and pioneered at MIT. The kernel is stripped down to an absolute minimum whose sole function is to securely multiplex raw hardware resources (CPU time slices, physical disk blocks, memory pages) to application spaces without imposing any OS abstractions (like virtual memory or standard file descriptors).
*   **Working Principle:** Applications link with custom **Library Operating Systems (LibOS)** tailored to their exact workload. A database application can manage physical disk sectors directly to achieve maximum database transaction speeds.
*   **Advantages:** Eliminates OS abstraction overhead, allowing custom applications to achieve optimal performance.
*   **Disadvantages:** Application design is exceptionally difficult; security vulnerabilities in user-level LibOS can destabilize application integrity.

---

### 3.2.6 Layered Structure
*   **Description:** The OS is broken down into $N$ distinct hierarchical layers:
    *   **Layer 0:** Underlying physical Computer Hardware.
    *   **Layers $1$ to $N-1$:** Intermediate OS services (Memory management, CPU scheduling, I/O devices, File Systems).
    *   **Layer $N$:** Topmost User Interface (UI / Shell).
*   **Strict Rule:** Layer $M$ can only invoke functions and services exposed directly by Layer $M-1$, and hides its own internal implementation from Layer $M+1$.
*   **Advantages:** Extreme ease of modular debugging and verification (Layer 0 tested first, then Layer 1, etc.).
*   **Disadvantages:** Poor performance due to sequential layer traversal overhead; difficult to define the exact clean ordering of intermediate layers.

---

### 3.2.7 Modular Structure (Loadable Kernel Modules - LKM)
*   **Description:** Modern best-practice architecture (e.g., modern Linux, Sun Solaris). The OS maintains a core monolithic kernel containing essential services, but dynamically loads and unloads independent functional modules (like hardware device drivers, USB drivers, file system handlers) into kernel memory at boot time or **on-the-fly during runtime**.
*   **Advantages:**
    *   Combines the performance speed of monolithic architecture with the clean modularity of microkernels.
    *   Kernel does not need to be recompiled or rebooted when adding a new hardware peripheral.
*   **Disadvantages:** Requires a well-defined, robust module API; bugs inside loaded modules execute with kernel privileges.

---

### 3.2.8 Virtual Machine Structure
*   **Description:** Uses specialized software or firmware called a **Hypervisor (Virtual Machine Monitor - VMM)** to abstract physical hardware into multiple isolated, simulated virtual computers (VMs).
*   **Working Principle:** Each Virtual Machine runs its own completely independent **Guest Operating System** (e.g., running Linux and Windows simultaneously on a single macOS host).
*   **Types:**
    *   *Type 1 Hypervisor (Bare-Metal):* Runs directly on physical hardware (e.g., VMware ESXi, KVM, Xen).
    *   *Type 2 Hypervisor (Hosted):* Runs on top of an existing host OS (e.g., VMware Workstation, Oracle VirtualBox).
*   **Advantages:** Perfect process and OS isolation, hardware consolidation, sandboxed security for malware analysis.
*   **Disadvantages:** Virtualization overhead reduces execution speeds compared to bare-metal hardware.

---

## 3.3 Comprehensive Architecture Comparison Matrix

| OS Architecture | Kernel Space Footprint | Component Execution Mode | Performance | System Reliability / Fault Tolerance | Maintainability & Extensibility | Prominent Examples |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| **Simple** | Undefined (Shared) | All in single unprotected space | Ultra High | Extremely Low (Crashes easily) | Very Poor | MS-DOS, Early CP/M |
| **Monolithic** | Very Large (All-in-One)| Entire OS in Kernel Mode (Ring 0)| Very High | Low (Driver bug crashes entire OS) | Difficult | Early Linux, Traditional Unix |
| **Micro-Kernel** | Minimal (<10,000 LOC) | Drivers/FS in User Mode (Ring 3)| Moderate to Low | Ultra High (Crashed driver restarts)| Excellent | QNX, Mach, L4 |
| **Hybrid** | Medium to Large | Core + Critical Drivers in Ring 0| High | Moderate to High | Good | Windows NT, macOS XNU |
| **Exo-Kernel** | Absolute Minimal | LibOS in User Space | Maximum | Low to Moderate (App dependent) | Complex | MIT Aegis, Nemesis |
| **Layered** | Tiered Hierarchy | Layer-by-Layer access rules | Low (Traversal lag)| High (Isolated layers) | Good | THE Multiprogramming System |
| **Modular (LKM)** | Core + Dynamic Mods | Loaded directly into Ring 0 RAM | Very High | Moderate (Module bug runs in Ring 0)| Outstanding | Modern Linux, Sun Solaris |
| **Virtual Machine** | Hypervisor Layer | Emulated isolated Guest OSs | Moderate | Absolute (Isolated sandboxes) | Outstanding | VMware, KVM, Hyper-V |

---

# Module 4: Process Management & Life Cycle

## 4.1 Process vs. Program

```
+------------------------------------+          +------------------------------------+
|             PROGRAM                |          |              PROCESS               |
|      (Passive / Static File)       |          |       (Active Dynamic Entity)      |
+------------------------------------+          +------------------------------------+
| - Stored on Disk (SSD/HDD)         | Loaded   | - Occupies Main Memory (RAM)       |
| - Collection of instructions       | =======> | - Program Counter + CPU Registers  |
| - Exists indefinitely in storage   | into RAM | - Dynamic state: Run, Wait, Ready  |
| - Consumes zero CPU cycles         |          | - Actively executes on CPU core    |
+------------------------------------+          +------------------------------------+
```

### Detailed Comparison Table:
| Parameter | Program | Process |
| :--- | :--- | :--- |
| **Definition** | A passive entity consisting of compiled machine instructions stored in an executable file on secondary disk storage. | An active entity representing a program in actual execution within main memory (RAM). |
| **State** | Static and unchanging. | Dynamic (continuously transitioning through execution states). |
| **Lifespan** | Exists permanently on disk until deleted by the user. | Temporary: exists from creation/fork until termination/exit. |
| **Resource Consumption**| Consumes only disk storage space; consumes zero CPU time or RAM. | Consumes CPU cycles, RAM, Stack/Heap memory, and I/O file descriptors. |
| **Multiplicity** | A single program file on disk (e.g., `chrome.exe`). | Can spawn multiple distinct processes in memory simultaneously. |

---

## 4.2 Process Layout in Main Memory (Stack, Heap, Data, Text)
When an executable program is loaded into RAM by the OS, it is assigned a structured four-part virtual memory layout:

```
+-------------------------------------------------------------+  0xFFFFFFFF (High Memory)
|                           STACK                             |
|  (Local variables, function parameters, return addresses)   |
|                              |                              |
|                              v (Grows Downward)             |
|                                                             |
|                              ^ (Grows Upward)               |
|                              |                              |
|                            HEAP                             |
|  (Dynamic memory allocated via malloc(), calloc(), new)     |
+-------------------------------------------------------------+
|                            DATA                             |
|  (Global variables, static variables, uninitialized BSS)    |
+-------------------------------------------------------------+
|                            TEXT                             |
|  (Compiled binary machine code instructions, read-only)     |
+-------------------------------------------------------------+  0x00000000 (Low Memory)
```

1.  **Text Section:** Contains the raw compiled binary machine instructions of the program. Marked as read-only to prevent self-modifying code errors.
2.  **Data Section:** Stores global and static variables initialized prior to program execution (as well as uninitialized BSS variables).
3.  **Heap Section:** Region of memory dynamically allocated at runtime (via `malloc()`, `calloc()`, or `new`). Grows upward toward higher memory addresses.
4.  **Stack Section:** Contains temporary data including local function variables, parameter arguments passed into subroutines, and function return memory addresses. Grows downward toward lower memory addresses.

---

## 4.3 Process Control Block (PCB) & Process Table
*   **What is the Process Control Block (PCB)?**
    *   A **Process Control Block** (also called a **Task Control Block**) is a vital operating system data structure storing all metadata required to identify, manage, schedule, and context-switch an individual process.
*   **Storage Location:** Stored in protected kernel memory (often at the base of the kernel stack for that process), inaccessible to standard user programs.
*   **The Process Table:** An array or linked list maintained by the kernel containing the PCB pointers of all active processes in the system.

### Key Data Fields Stored in a PCB:
1.  **Stack Pointer:** Hardware memory pointer tracking the current execution depth of the process stack.
2.  **Process State:** Current operational state (Start, Ready, Running, Waiting, Terminated).
3.  **Process Identifier (PID):** Unique numerical integer assigned by the OS to identify the process.
4.  **Program Counter (PC):** Hardware register pointing to the memory address of the **very next machine instruction** to be executed.
5.  **CPU Registers:** Saved state of accumulator, index registers, base registers, and general-purpose registers when the process is swapped out.
6.  **Memory Management Information:** Page tables, segment tables, and base/limit bounds registers defining the process's valid RAM region.
7.  **List of Open Files (I/O Status):** Array of open file descriptors, allocated hardware devices, and network socket handles.

---

## 4.4 Process Life Cycle: Five-State Process Model

```
       +------------+
       |   START    |
       |   (New)    |
       +------------+
             |
             | Admitted by Long-Term Scheduler
             v
       +------------+  Scheduler Dispatch  +------------+
+----->|   READY    |--------------------->|  RUNNING   |-----+
|      +------------+                      +------------+     |
|            ^                                   |            |
|            | Timer / Quantum Expired           | Exit /     |
|            +-----------------------------------+ Terminate  |
|                                                |            |
|                                                v            |
|      +------------+  I/O or Event Wait   +------------+     |
|      |  WAITING   |<---------------------+ TERMINATED |<----+
|      |  (Blocked) |                      +------------+
|      +------------+
|            |
+------------+ (I/O or Event Completed)
```

### Detailed Five States:
1.  **Start (New):** The process is being created and its PCB initialized, but it has not yet been admitted to the Ready Queue in RAM.
2.  **Ready:** The process is fully loaded into main memory (RAM) and is waiting to be allocated CPU execution time by the Short-Term Scheduler.
3.  **Running:** The CPU core is actively executing the process's binary instructions.
4.  **Waiting (Blocked):** The process cannot execute because it is waiting for an asynchronous external event or hardware resource (e.g., disk read, user keyboard input, network packet).
5.  **Terminated (Exit):** The process has finished executing its code or was aborted by the OS; its PCB remains temporarily while the parent process reads exit status before final memory cleanup.

---

## 4.5 Two-State Process Model & Dispatcher
*   **Two-State Model:** The simplest conceptual representation of process states:
    1.  **Running:** Process currently occupying the CPU.
    2.  **Not Running:** Processes waiting in a linked-list queue for CPU time.
*   **The Dispatcher:**
    *   The **Dispatcher** is the low-level kernel module that physically gives control of the CPU core to the process selected by the Short-Term Scheduler.
    *   **Dispatcher Functions:**
        1.  Performs Context Switching (saving/restoring registers).
        2.  Switches CPU mode from Kernel Mode back to User Mode.
        3.  Jumps to the instruction address in the user program indicated by its Program Counter.
    *   **Dispatch Latency:** The exact time required by the dispatcher to stop one process and start another.

---

## 4.6 Process Queues & Schedulers (Long-Term, Short-Term, Medium-Term)

### Scheduling Queues:
*   **Job Queue:** Holds all programs submitted to the system, residing on disk storage.
*   **Ready Queue:** Keeps all processes loaded in RAM that are ready and waiting for CPU allocation.
*   **Device Queues (I/O Queues):** Dedicated queues for processes waiting for specific hardware devices (e.g., Disk Queue, Printer Queue).

### In-Depth Comparison of Schedulers:
| Parameter | Long-Term Scheduler (Job Scheduler) | Short-Term Scheduler (CPU Scheduler) | Medium-Term Scheduler (Swapper) |
| :--- | :--- | :--- | :--- |
| **Primary Location** | Secondary Storage (Disk) $\to$ RAM. | RAM $\to$ CPU Core. | RAM $\longleftrightarrow$ Swap Space (Disk). |
| **Core Function** | Selects jobs from disk and loads them into RAM (Ready Queue). | Selects a ready process from RAM and allocates CPU. | Swaps inactive processes out to disk to free RAM. |
| **Invocation Frequency**| Infrequent (seconds, minutes). | Ultra Frequent (milliseconds: every $10\text{–}100\text{ ms}$). | Intermediate (when memory congestion occurs). |
| **Speed** | Slow. | Extremely Fast. | Medium speed. |
| **Control of Multiprogramming**| **Directly controls the Degree of Multiprogramming** (number of processes in RAM).| Has no control over the degree of multiprogramming. | **Reduces/Modulates the Degree of Multiprogramming**. |

---

## 4.7 Context Switching: Mechanism, Trigger, Overhead
*   **Definition:** **Context Switching** is the mechanical process of saving the execution state (context) of the currently running process into its PCB and restoring the saved state of a new process from its PCB into CPU hardware registers.
*   **Step-by-Step Execution Sequence:**
    1.  A hardware interrupt or timer signal triggers a mode switch to Kernel Mode.
    2.  Kernel saves the current Program Counter, Stack Pointer, and CPU Registers into $P_1$'s PCB.
    3.  $P_1$'s state is updated from *Running* to *Ready* or *Waiting*.
    4.  Scheduler selects $P_2$ from the Ready Queue.
    5.  Kernel loads $P_2$'s saved registers, memory mappings, and Program Counter from $P_2$'s PCB into CPU hardware.
    6.  Kernel switches back to User Mode; CPU resumes $P_2$ at the restored Program Counter.
*   **Context Switch Overhead:**
    *   Context switching time is **pure computational overhead** because the CPU executes no useful user work during the switch (typically $1\text{–}10\text{ microseconds}$).

---

# Module 5: CPU Scheduling Algorithms & Solved Numericals

## 5.1 Core Scheduling Concepts (Preemptive vs. Non-Preemptive)

### In-Depth Comparison:
| Comparison Aspect | Non-Preemptive Scheduling | Preemptive Scheduling |
| :--- | :--- | :--- |
| **Core Mechanism** | Once CPU is allocated to a process, it holds the CPU until it **terminates** or voluntarily enters a **waiting state** (for I/O). | The OS can **forcibly interrupt and remove** the currently running process to allocate CPU to a higher-priority task. |
| **Trigger Conditions** | State transitions: *Running $\to$ Terminated* or *Running $\to$ Waiting*. | State transitions: *Running $\to$ Ready* (timer interrupt) or *Waiting $\to$ Ready* (higher priority I/O complete). |
| **Context Switch Overhead**| Low: context switches occur only at natural task completion or I/O waits. | High: frequent context switches occur due to quantum expiration or priority preemption. |
| **System Responsiveness** | Poor for interactive environments; a long compute-bound job blocks all other tasks. | Outstanding for interactive systems; ensures short/interactive jobs receive immediate CPU time. |
| **Algorithms** | FCFS, Non-Preemptive SJF, Non-Preemptive Priority. | SRTF (Preemptive SJF), Round Robin, Preemptive Priority. |

---

## 5.2 Mathematical Terms & Performance Metrics (AT, BT, CT, TAT, WT, RT)

### Essential Formulas for Exam Problems:
1.  **Arrival Time ($AT$):** The exact timestamp at which a process enters the Ready Queue in memory.
2.  **Burst Time ($BT$) / Execution Time ($ET$):** Total CPU time required by the process to finish execution.
3.  **Completion Time ($CT$):** The exact timestamp at which the process finishes its final instruction.
4.  **Turn-Around Time ($TAT$):** Total elapsed time from process arrival to process completion:
    $$\mathbf{TAT = CT - AT} \quad \text{or} \quad \mathbf{TAT = BT + WT}$$
5.  **Waiting Time ($WT$):** Total time spent by the process idling in the Ready Queue:
    $$\mathbf{WT = TAT - BT}$$
6.  **Response Time ($RT$):** Time elapsed from process arrival until it receives CPU attention for the **very first time**:
    $$\mathbf{RT = \text{Time of First CPU Allocation} - AT}$$
    *(Note: In all Non-Preemptive scheduling algorithms where processes arrive before or at their execution, $\mathbf{WT = RT}$.)*
7.  **Average Metrics:**
    $$\text{Average } TAT = \frac{\sum TAT}{N}, \quad \text{Average } WT = \frac{\sum WT}{N}$$

---

## 5.3 Algorithm 1: First-Come, First-Served (FCFS)
*   **Type:** Non-Preemptive.
*   **Logic:** Processes are assigned CPU time strictly in the chronological order of their Arrival Times ($AT$).
*   **Characteristics:** Simple to implement using a FIFO queue, but suffers from the **Convoy Effect** (short processes wait long periods behind a large CPU-heavy process).

---

### Solved Problem 1.1 (Standard FCFS)
*(From Slides 62 & 63)*

#### Given Problem Table:
| Process ID | Arrival Time ($AT$) | Burst Time ($BT$) |
| :---: | :---: | :---: |
| **P1** | 2 | 2 |
| **P2** | 5 | 6 |
| **P3** | 0 | 4 |
| **P4** | 0 | 7 |
| **P5** | 7 | 4 |

#### Step-by-Step Scheduling Logic:
1.  At $t=0$, two processes **P3** and **P4** arrive simultaneously. By tie-breaker rule (lower PID first), **P3** is scheduled first.
2.  **P3** executes from $t=0 \to 4$. ($CT = 4$).
3.  At $t=4$, **P4** (arrived at $0$) and **P1** (arrived at $2$) are in the queue. **P4** arrived first, so **P4** executes from $t=4 \to 11$. ($CT = 11$).
4.  At $t=11$, **P1** (arrived at $2$) and **P2** (arrived at $5$) and **P5** (arrived at $7$) are ready. **P1** arrived earliest, so **P1** executes from $t=11 \to 13$. ($CT = 13$).
5.  At $t=13$, **P2** (arrived at $5$) executes from $t=13 \to 19$. ($CT = 19$).
6.  At $t=19$, **P5** (arrived at $7$) executes from $t=19 \to 23$. ($CT = 23$).

#### Gantt Chart:
```
+-------+--------------+-------+------------+-------+
|  P3   |      P4      |  P1   |     P2     |  P5   |
+-------+--------------+-------+------------+-------+
0       4              11      13           19      23
```

#### Detailed Solution Calculation Table:
| Process ID | $AT$ | $BT$ | $CT$ | $TAT = CT - AT$ | $WT = TAT - BT$ | $RT = \text{First Alloc} - AT$ |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **P1** | 2 | 2 | 13 | $13 - 2 = \mathbf{11}$ | $11 - 2 = \mathbf{9}$ | $11 - 2 = \mathbf{9}$ |
| **P2** | 5 | 6 | 19 | $19 - 5 = \mathbf{14}$ | $14 - 6 = \mathbf{8}$ | $13 - 5 = \mathbf{8}$ |
| **P3** | 0 | 4 | 4 | $4 - 0 = \mathbf{4}$ | $4 - 4 = \mathbf{0}$ | $0 - 0 = \mathbf{0}$ |
| **P4** | 0 | 7 | 11 | $11 - 0 = \mathbf{11}$ | $11 - 7 = \mathbf{4}$ | $4 - 0 = \mathbf{4}$ |
| **P5** | 7 | 4 | 23 | $23 - 7 = \mathbf{16}$ | $16 - 4 = \mathbf{12}$ | $19 - 7 = \mathbf{12}$ |

#### Final Averages:
*   $$\text{Average Waiting Time } (AWT) = \frac{9 + 8 + 0 + 4 + 12}{5} = \frac{33}{5} = \mathbf{6.6\text{ ms}}$$
*   $$\text{Average Turn-Around Time } (ATAT) = \frac{11 + 14 + 4 + 11 + 16}{5} = \frac{56}{5} = \mathbf{11.2\text{ ms}}$$

---

### Solved Problem 1.2 (FCFS with Idle Time)
*(From Slides 64 & 65)*

#### Given Problem Table:
| Process ID | Arrival Time ($AT$) | Burst Time ($BT$) |
| :---: | :---: | :---: |
| **P1** | 2 | 2 |
| **P2** | 0 | 1 |
| **P3** | 2 | 3 |
| **P4** | 3 | 5 |
| **P5** | 4 | 5 |

#### Step-by-Step Scheduling Logic:
1.  At $t=0$, only **P2** is present in the Ready Queue. **P2** executes from $t=0 \to 1$. ($CT = 1$).
2.  At $t=1$, **P2** has completed, but no other process has arrived yet (next processes P1 and P3 arrive at $t=2$). **The CPU remains completely IDLE from $t=1 \to 2$**.
3.  At $t=2$, **P1** and **P3** arrive. By PID tie-breaker, **P1** executes from $t=2 \to 4$. ($CT = 4$).
4.  At $t=4$, **P3** (arrived at $2$), **P4** (arrived at $3$), and **P5** (arrived at $4$) are ready. **P3** arrived first, so **P3** executes from $t=4 \to 7$. ($CT = 7$).
5.  At $t=7$, **P4** executes from $t=7 \to 12$. ($CT = 12$).
6.  At $t=12$, **P5** executes from $t=12 \to 17$. ($CT = 17$).

#### Gantt Chart:
```
+-------+--------+-------+-------+------------+------------+
|  P2   |  IDLE  |  P1   |  P3   |     P4     |     P5     |
+-------+--------+-------+-------+------------+------------+
0       1        2       4       7            12           17
```

#### Detailed Solution Calculation Table:
| Process ID | $AT$ | $BT$ | $CT$ | $TAT = CT - AT$ | $WT = TAT - BT$ | $RT = \text{First Alloc} - AT$ |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **P1** | 2 | 2 | 4 | $4 - 2 = \mathbf{2}$ | $2 - 2 = \mathbf{0}$ | $2 - 2 = \mathbf{0}$ |
| **P2** | 0 | 1 | 1 | $1 - 0 = \mathbf{1}$ | $1 - 1 = \mathbf{0}$ | $0 - 0 = \mathbf{0}$ |
| **P3** | 2 | 3 | 7 | $7 - 2 = \mathbf{5}$ | $5 - 3 = \mathbf{2}$ | $4 - 2 = \mathbf{2}$ |
| **P4** | 3 | 5 | 12 | $12 - 3 = \mathbf{9}$ | $9 - 5 = \mathbf{4}$ | $7 - 3 = \mathbf{4}$ |
| **P5** | 4 | 5 | 17 | $17 - 4 = \mathbf{13}$ | $13 - 5 = \mathbf{8}$ | $12 - 4 = \mathbf{8}$ |

#### Final Averages:
*   $$\text{Average Waiting Time } (AWT) = \frac{0 + 0 + 2 + 4 + 8}{5} = \frac{14}{5} = \mathbf{2.8\text{ ms}}$$
*   $$\text{Average Turn-Around Time } (ATAT) = \frac{2 + 1 + 5 + 9 + 13}{5} = \frac{30}{5} = \mathbf{6.0\text{ ms}}$$

---

## 5.4 Algorithm 2: Shortest Job First (SJF - Non-Preemptive)
*   **Type:** Non-Preemptive.
*   **Logic:** When CPU is free, it allocates execution to the available process with the smallest Burst Time ($BT$). Ties are resolved via FCFS.
*   **Pros:** Provably optimal in minimizing average waiting time for a given set of processes.
*   **Cons:** Can cause **Starvation** of long processes if short processes continuously arrive.

---

### Solved Problem 2.1 (SJF with Same Arrival Time)
*(From Slides 68 & 69)*

#### Given Problem Table:
| Process ID | Arrival Time ($AT$) | Burst Time ($BT$) |
| :---: | :---: | :---: |
| **P1** | 0 | 6 |
| **P2** | 0 | 10 |
| **P3** | 0 | 4 |
| **P4** | 0 | 6 |

#### Step-by-Step Scheduling Logic:
1.  At $t=0$, all 4 processes arrive simultaneously.
2.  Burst times: $P1(6), P2(10), P3(4), P4(6)$.
3.  Shortest is **P3** ($BT=4$). **P3** executes from $t=0 \to 4$. ($CT = 4$).
4.  Next shortest: Tie between **P1** ($BT=6$) and **P4** ($BT=6$). FCFS tie-breaker picks **P1**. **P1** executes from $t=4 \to 10$. ($CT = 10$).
5.  Next shortest: **P4** ($BT=6$). **P4** executes from $t=10 \to 16$. ($CT = 16$).
6.  Finally, **P2** ($BT=10$) executes from $t=16 \to 26$. ($CT = 26$).

#### Gantt Chart:
```
+-------+------------+------------+--------------------+
|  P3   |     P1     |     P4     |         P2         |
+-------+------------+------------+--------------------+
0       4            10           16                   26
```

#### Detailed Solution Calculation Table:
| Process ID | $AT$ | $BT$ | $CT$ | $TAT = CT - AT$ | $WT = TAT - BT$ | $RT = \text{First Alloc} - AT$ |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **P1** | 0 | 6 | 10 | $10 - 0 = \mathbf{10}$ | $10 - 6 = \mathbf{4}$ | $4 - 0 = \mathbf{4}$ |
| **P2** | 0 | 10 | 26 | $26 - 0 = \mathbf{26}$ | $26 - 10 = \mathbf{16}$ | $16 - 0 = \mathbf{16}$ |
| **P3** | 0 | 4 | 4 | $4 - 0 = \mathbf{4}$ | $4 - 4 = \mathbf{0}$ | $0 - 0 = \mathbf{0}$ |
| **P4** | 0 | 6 | 16 | $16 - 0 = \mathbf{16}$ | $16 - 6 = \mathbf{10}$ | $10 - 0 = \mathbf{10}$ |

#### Final Averages:
*   $$\text{Average Waiting Time } (AWT) = \frac{4 + 16 + 0 + 10}{4} = \frac{30}{4} = \mathbf{7.5\text{ ms}}$$
*   $$\text{Average Turn-Around Time } (ATAT) = \frac{10 + 26 + 4 + 16}{4} = \frac{56}{4} = \mathbf{14.0\text{ ms}}$$

---

### Solved Problem 2.2 (SJF with Staggered Arrival Times)
*(From Slides 70 & 71)*

#### Given Problem Table:
| Process ID | Arrival Time ($AT$) | Burst Time ($BT$) |
| :---: | :---: | :---: |
| **P1** | 0 | 6 |
| **P2** | 4 | 10 |
| **P3** | 4 | 4 |
| **P4** | 8 | 3 |

#### Step-by-Step Scheduling Logic:
1.  At $t=0$, only **P1** has arrived. **P1** is scheduled and runs to completion from $t=0 \to 6$. ($CT = 6$).
2.  At $t=6$, **P2** ($AT=4, BT=10$) and **P3** ($AT=4, BT=4$) have arrived.
3.  Comparing available burst times: $P3(4) < P2(10)$. **P3** executes from $t=6 \to 10$. ($CT = 10$).
4.  At $t=10$, **P4** ($AT=8, BT=3$) and **P2** ($BT=10$) are in the queue.
5.  Comparing burst times: $P4(3) < P2(10)$. **P4** executes from $t=10 \to 13$. ($CT = 13$).
6.  Finally, **P2** executes from $t=13 \to 23$. ($CT = 23$).

#### Gantt Chart:
```
+------------+-------+-------+--------------------+
|     P1     |  P3   |  P4   |         P2         |
+------------+-------+-------+--------------------+
0            6       10      13                   23
```

#### Detailed Solution Calculation Table:
| Process ID | $AT$ | $BT$ | $CT$ | $TAT = CT - AT$ | $WT = TAT - BT$ | $RT = \text{First Alloc} - AT$ |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **P1** | 0 | 6 | 6 | $6 - 0 = \mathbf{6}$ | $6 - 6 = \mathbf{0}$ | $0 - 0 = \mathbf{0}$ |
| **P2** | 4 | 10 | 23 | $23 - 4 = \mathbf{19}$ | $19 - 10 = \mathbf{9}$ | $13 - 4 = \mathbf{9}$ |
| **P3** | 4 | 4 | 10 | $10 - 4 = \mathbf{6}$ | $6 - 4 = \mathbf{2}$ | $6 - 4 = \mathbf{2}$ |
| **P4** | 8 | 3 | 13 | $13 - 8 = \mathbf{5}$ | $5 - 3 = \mathbf{2}$ | $10 - 8 = \mathbf{2}$ |

#### Final Averages:
*   $$\text{Average Waiting Time } (AWT) = \frac{0 + 9 + 2 + 2}{4} = \frac{13}{4} = \mathbf{3.25\text{ ms}}$$
*   $$\text{Average Turn-Around Time } (ATAT) = \frac{6 + 19 + 6 + 5}{4} = \frac{36}{4} = \mathbf{9.0\text{ ms}}$$

---

## 5.5 Algorithm 3: Shortest Remaining Time First (SRTF - Preemptive SJF)
*   **Type:** Preemptive.
*   **Logic:** At any time instant $t$, the CPU is assigned to the process with the smallest **Remaining Burst Time**. If a newly arrived process has a burst time shorter than the remaining burst time of the currently running process, the current process is preempted.

---

### Solved Problem 3.1 (Complete Step-by-Step SRTF Execution)
*(From Slides 72 & 73)*

#### Given Problem Table:
| Process ID | Arrival Time ($AT$) | Burst Time ($BT$) |
| :---: | :---: | :---: |
| **P1** | 0 | 8 |
| **P2** | 4 | 10 |
| **P3** | 4 | 3 |
| **P4** | 10 | 4 |

#### Step-by-Step Preemptive Timeline Execution:
*   **At $t=0$:** Only **P1** arrives with $BT=8$. **P1** begins execution.
*   **At $t=4$:** **P1** has executed for 4 ms $\implies$ Remaining $BT(P1) = 8 - 4 = \mathbf{4}$.
    *   Newly arrived processes: **P2** ($BT=10$) and **P3** ($BT=3$).
    *   Compare remaining times: $P1(4)$, $P2(10)$, $P3(3)$.
    *   **P3 has the shortest remaining time ($3 < 4$). P1 is PREEMPTED to Ready Queue, and P3 takes the CPU!**
*   **At $t=7$:** **P3** finishes its entire 3 ms execution ($CT=7$).
    *   Ready Queue processes: **P1** (remaining 4 ms), **P2** (remaining 10 ms).
    *   Shortest is **P1** ($4 < 10$). **P1 resumes execution**.
*   **At $t=10$:** **P1** has executed 3 ms $\implies$ Remaining $BT(P1) = 4 - 3 = \mathbf{1}$.
    *   Newly arrived process: **P4** ($BT=4$).
    *   Compare remaining times: $P1(1)$, $P4(4)$, $P2(10)$.
    *   **P1 has the shortest remaining time ($1 < 4$), so P1 CONTINUES execution!**
*   **At $t=11$:** **P1** completes its final 1 ms burst ($CT = 11$).
    *   Ready Queue: **P4** ($BT=4$), **P2** ($BT=10$).
    *   Shortest is **P4** ($4 < 10$). **P4 executes from $t=11 \to 15$**. ($CT = 15$).
*   **At $t=15$:** **P4** completes. Only **P2** remains.
    *   **P2 executes from $t=15 \to 25$**. ($CT = 25$).

#### Gantt Chart:
```
+------------+-------+------------+-------+--------------------+
|     P1     |  P3   |     P1     |  P4   |         P2         |
+------------+-------+------------+-------+--------------------+
0            4       7            11      15                   25
```

#### Detailed Solution Calculation Table:
| Process ID | $AT$ | $BT$ | $CT$ | $TAT = CT - AT$ | $WT = TAT - BT$ | $RT = \text{First Alloc} - AT$ |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **P1** | 0 | 8 | 11 | $11 - 0 = \mathbf{11}$ | $11 - 8 = \mathbf{3}$ | $0 - 0 = \mathbf{0}$ |
| **P2** | 4 | 10 | 25 | $25 - 4 = \mathbf{21}$ | $21 - 10 = \mathbf{11}$ | $15 - 4 = \mathbf{11}$ |
| **P3** | 4 | 3 | 7 | $7 - 4 = \mathbf{3}$ | $3 - 3 = \mathbf{0}$ | $4 - 4 = \mathbf{0}$ |
| **P4** | 10 | 4 | 15 | $15 - 10 = \mathbf{5}$ | $5 - 4 = \mathbf{1}$ | $11 - 10 = \mathbf{1}$ |

#### Final Averages:
*   $$\text{Average Waiting Time } (AWT) = \frac{3 + 11 + 0 + 1}{4} = \frac{15}{4} = \mathbf{3.75\text{ ms}}$$
*   $$\text{Average Turn-Around Time } (ATAT) = \frac{11 + 21 + 3 + 5}{4} = \frac{40}{4} = \mathbf{10.0\text{ ms}}$$

---

## 5.6 Algorithm 4: Round Robin (RR) Scheduling
*   **Type:** Preemptive.
*   **Logic:** Every process in the Ready Queue is allocated a fixed time slice called a **Time Quantum ($q$)** in circular FIFO order.
*   **Rules:**
    1.  If $BT \le q$, the process executes to completion and releases the CPU.
    2.  If $BT > q$, the timer interrupt preempts the process after $q$, moves it to the tail of the Ready Queue, and switches to the next process.
*   **Characteristics:** Fair, starvation-free, but choice of quantum is critical (too small $\implies$ context switch overhead dominates; too large $\implies$ degenerates into FCFS).

---

### Solved Problem 4.1 (RR with Same Arrival Time, $q = 2\text{ms}$)
*(From Slides 76 & 77)*

#### Given Problem Table:
| Process ID | Arrival Time ($AT$) | Burst Time ($BT$) |
| :---: | :---: | :---: |
| **P1** | 0 | 8 |
| **P2** | 0 | 10 |
| **P3** | 0 | 6 |
| **P4** | 0 | 4 |

#### Time Quantum: $q = 2\text{ ms}$

#### Step-by-Step Queue & Execution Walkthrough:
*   **Initial Ready Queue at $t=0$:** `[P1, P2, P3, P4]`
*   **Round 1:**
    *   `P1` runs $0 \to 2$ (Rem: 6). Queue becomes: `[P2, P3, P4, P1]`
    *   `P2` runs $2 \to 4$ (Rem: 8). Queue becomes: `[P3, P4, P1, P2]`
    *   `P3` runs $4 \to 6$ (Rem: 4). Queue becomes: `[P4, P1, P2, P3]`
    *   `P4` runs $6 \to 8$ (Rem: 2). Queue becomes: `[P1, P2, P3, P4]`
*   **Round 2:**
    *   `P1` runs $8 \to 10$ (Rem: 4). Queue becomes: `[P2, P3, P4, P1]`
    *   `P2` runs $10 \to 12$ (Rem: 6). Queue becomes: `[P3, P4, P1, P2]`
    *   `P3` runs $12 \to 14$ (Rem: 2). Queue becomes: `[P4, P1, P2, P3]`
    *   `P4` runs $14 \to 16$ (Rem: 0). **P4 FINISHES at $t=16$**. Queue becomes: `[P1, P2, P3]`
*   **Round 3:**
    *   `P1` runs $16 \to 18$ (Rem: 2). Queue becomes: `[P2, P3, P1]`
    *   `P2` runs $18 \to 20$ (Rem: 4). Queue becomes: `[P3, P1, P2]`
    *   `P3` runs $20 \to 22$ (Rem: 0). **P3 FINISHES at $t=22$**. Queue becomes: `[P1, P2]`
*   **Round 4:**
    *   `P1` runs $22 \to 24$ (Rem: 0). **P1 FINISHES at $t=24$**. Queue becomes: `[P2]`
    *   `P2` runs $24 \to 26$ (Rem: 2). Queue becomes: `[P2]`
*   **Round 5:**
    *   `P2` runs $26 \to 28$ (Rem: 0). **P2 FINISHES at $t=28$**.

#### Gantt Chart:
```
+----+----+----+----+----+----+----+----+----+----+----+----+----+----+
| P1 | P2 | P3 | P4 | P1 | P2 | P3 | P4 | P1 | P2 | P3 | P1 | P2 | P2 |
+----+----+----+----+----+----+----+----+----+----+----+----+----+----+
0    2    4    6    8   10   12   14   16   18   20   22   24   26   28
```

#### Detailed Solution Calculation Table:
| Process ID | $AT$ | $BT$ | $CT$ | $TAT = CT - AT$ | $WT = TAT - BT$ | $RT = \text{First Alloc} - AT$ |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **P1** | 0 | 8 | 24 | $24 - 0 = \mathbf{24}$ | $24 - 8 = \mathbf{16}$ | $0 - 0 = \mathbf{0}$ |
| **P2** | 0 | 10 | 28 | $28 - 0 = \mathbf{28}$ | $28 - 10 = \mathbf{18}$ | $2 - 0 = \mathbf{2}$ |
| **P3** | 0 | 6 | 22 | $22 - 0 = \mathbf{22}$ | $22 - 6 = \mathbf{16}$ | $4 - 0 = \mathbf{4}$ |
| **P4** | 0 | 4 | 16 | $16 - 0 = \mathbf{16}$ | $16 - 4 = \mathbf{12}$ | $6 - 0 = \mathbf{6}$ |

#### Final Averages:
*   $$\text{Average Waiting Time } (AWT) = \frac{16 + 18 + 16 + 12}{4} = \frac{62}{4} = \mathbf{15.5\text{ ms}}$$
*   $$\text{Average Turn-Around Time } (ATAT) = \frac{24 + 28 + 22 + 16}{4} = \frac{90}{4} = \mathbf{22.5\text{ ms}}$$

---

### Solved Problem 4.2 (RR with Staggered Arrival Times, $q = 3\text{ms}$)
*(From Slides 78 & 79)*

#### Given Problem Table:
| Process ID | Arrival Time ($AT$) | Burst Time ($BT$) |
| :---: | :---: | :---: |
| **A** | 0 | 4 |
| **B** | 1 | 5 |
| **C** | 2 | 2 |
| **D** | 3 | 1 |
| **E** | 4 | 6 |
| **F** | 6 | 3 |

#### Time Quantum: $q = 3\text{ ms}$

#### Precise Queue Tracing Step-by-Step:
*   **$t=0$:** Only **A** is in Ready Queue: `[A]`. **A** runs from $t=0 \to 3$ (Rem: 1).
    *   During $[0, 3]$, **B** (at 1), **C** (at 2), **D** (at 3) arrive.
    *   Preempted **A** goes behind them: Queue = `[B, C, D, A]`.
*   **$t=3$:** **B** runs from $t=3 \to 6$ (Rem: 2).
    *   During $[3, 6]$, **E** (at 4) and **F** (at 6) arrive.
    *   Preempted **B** goes behind them: Queue = `[C, D, A, E, F, B]`.
*   **$t=6$:** **C** needs only 2 ms ($2 \le 3$). **C runs from $t=6 \to 8$ and FINISHES at $t=8$**.
    *   Queue = `[D, A, E, F, B]`.
*   **$t=8$:** **D** needs only 1 ms ($1 \le 3$). **D runs from $t=8 \to 9$ and FINISHES at $t=9$**.
    *   Queue = `[A, E, F, B]`.
*   **$t=9$:** **A** needs only 1 ms ($1 \le 3$). **A runs from $t=9 \to 10$ and FINISHES at $t=10$**.
    *   Queue = `[E, F, B]`.
*   **$t=10$:** **E** runs from $t=10 \to 13$ (Rem: 3).
    *   Queue = `[F, B, E]`.
*   **$t=13$:** **F** needs 3 ms ($3 \le 3$). **F runs from $t=13 \to 16$ and FINISHES at $t=16$**.
    *   Queue = `[B, E]`.
*   **$t=16$:** **B** needs remaining 2 ms ($2 \le 3$). **B runs from $t=16 \to 18$ and FINISHES at $t=18$**.
    *   Queue = `[E]`.
*   **$t=18$:** **E** needs remaining 3 ms ($3 \le 3$). **E runs from $t=18 \to 21$ and FINISHES at $t=21$**.

#### Gantt Chart:
```
+-------+-------+-----+---+---+-------+-------+-----+-------+
|   A   |   B   |  C  | D | A |   E   |   F   |  B  |   E   |
+-------+-------+-----+---+---+-------+-------+-----+-------+
0       3       6     8   9   10      13      16    18      21
```

#### Detailed Solution Calculation Table:
| Process ID | $AT$ | $BT$ | $CT$ | $TAT = CT - AT$ | $WT = TAT - BT$ | $RT = \text{First Alloc} - AT$ |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **A** | 0 | 4 | 10 | $10 - 0 = \mathbf{10}$ | $10 - 4 = \mathbf{6}$ | $0 - 0 = \mathbf{0}$ |
| **B** | 1 | 5 | 18 | $18 - 1 = \mathbf{17}$ | $17 - 5 = \mathbf{12}$ | $3 - 1 = \mathbf{2}$ |
| **C** | 2 | 2 | 8 | $8 - 2 = \mathbf{6}$ | $6 - 2 = \mathbf{4}$ | $6 - 2 = \mathbf{4}$ |
| **D** | 3 | 1 | 9 | $9 - 3 = \mathbf{6}$ | $6 - 1 = \mathbf{5}$ | $8 - 3 = \mathbf{5}$ |
| **E** | 4 | 6 | 21 | $21 - 4 = \mathbf{17}$ | $17 - 6 = \mathbf{11}$ | $10 - 4 = \mathbf{6}$ |
| **F** | 6 | 3 | 16 | $16 - 6 = \mathbf{10}$ | $10 - 3 = \mathbf{7}$ | $13 - 6 = \mathbf{7}$ |

#### Final Averages:
*   $$\text{Average Waiting Time } (AWT) = \frac{6 + 12 + 4 + 5 + 11 + 7}{6} = \frac{45}{6} = \mathbf{7.5\text{ ms}}$$
*   $$\text{Average Turn-Around Time } (ATAT) = \frac{10 + 17 + 6 + 6 + 17 + 10}{6} = \frac{66}{6} = \mathbf{11.0\text{ ms}}$$

---

## 5.7 Algorithm 5: Priority Scheduling
*   **Logic:** Every process is assigned a priority integer. The CPU is allocated to the process with the highest priority.
*   **Convention Used in Slides:** **Lower Integer Number = Higher Priority** (e.g., Priority $1 > \text{Priority } 2 > \text{Priority } 3$).
*   **Variants:**
    1.  **Non-Preemptive Priority:** Once assigned, the process runs to completion regardless of newly arrived higher-priority tasks.
    2.  **Preemptive Priority:** If a newly arrived process has a higher priority (lower number) than the current process, the current process is immediately preempted.

---

### Solved Problem 5.1 (Non-Preemptive Priority Scheduling)
*(From Slides 81 & 82)*

#### Given Problem Table:
| Process ID | Arrival Time ($AT$) | Burst Time ($BT$) | Priority |
| :---: | :---: | :---: | :---: |
| **A** | 0 | 4 | 2 |
| **B** | 1 | 2 | 1 |
| **C** | 2 | 6 | 3 |
| **D** | 3 | 3 | 1 |

#### Step-by-Step Scheduling Logic:
1.  At $t=0$, only **A** is present. **A** is non-preemptively scheduled and executes from $t=0 \to 4$. ($CT = 4$).
2.  At $t=4$, **B** (prio 1), **C** (prio 3), and **D** (prio 1) have all arrived.
3.  Highest priority is Priority 1 (Tie between **B** and **D**). FCFS tie-breaker selects **B** (arrived at $1 < 3$).
4.  **B** executes from $t=4 \to 6$. ($CT = 6$).
5.  At $t=6$, remaining are **D** (prio 1) and **C** (prio 3). **D** has higher priority.
6.  **D** executes from $t=6 \to 9$. ($CT = 9$).
7.  Finally, **C** (prio 3) executes from $t=9 \to 15$. ($CT = 15$).

#### Gantt Chart:
```
+------------+-------+-------+--------------------+
|     A      |   B   |   D   |         C          |
+------------+-------+-------+--------------------+
0            4       6       9                    15
```

#### Detailed Solution Calculation Table:
| Process ID | $AT$ | $BT$ | Priority | $CT$ | $TAT = CT - AT$ | $WT = TAT - BT$ | $RT = \text{First Alloc} - AT$ |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **A** | 0 | 4 | 2 | 4 | $4 - 0 = \mathbf{4}$ | $4 - 4 = \mathbf{0}$ | $0 - 0 = \mathbf{0}$ |
| **B** | 1 | 2 | 1 | 6 | $6 - 1 = \mathbf{5}$ | $5 - 2 = \mathbf{3}$ | $4 - 1 = \mathbf{3}$ |
| **C** | 2 | 6 | 3 | 15 | $15 - 2 = \mathbf{13}$ | $13 - 6 = \mathbf{7}$ | $9 - 2 = \mathbf{7}$ |
| **D** | 3 | 3 | 1 | 9 | $9 - 3 = \mathbf{6}$ | $6 - 3 = \mathbf{3}$ | $6 - 3 = \mathbf{3}$ |

#### Final Averages:
*   $$\text{Average Waiting Time } (AWT) = \frac{0 + 3 + 7 + 3}{4} = \frac{13}{4} = \mathbf{3.25\text{ ms}}$$
*   $$\text{Average Turn-Around Time } (ATAT) = \frac{4 + 5 + 13 + 6}{4} = \frac{28}{4} = \mathbf{7.0\text{ ms}}$$

---

### Solved Problem 5.2 (Preemptive Priority Scheduling)
*(From Slides 83 & 84)*

#### Given Problem Table:
| Process ID | Arrival Time ($AT$) | Burst Time ($BT$) | Priority |
| :---: | :---: | :---: | :---: |
| **A** | 0 | 4 | 2 |
| **B** | 1 | 2 | 1 |
| **C** | 2 | 6 | 3 |
| **D** | 3 | 3 | 1 |

#### Step-by-Step Preemptive Timeline Execution:
*   **At $t=0$:** Only **A** (Priority 2) is present. **A** starts executing.
*   **At $t=1$:** **B** arrives with **Priority 1**.
    *   Compare priority: $\text{Priority}(B) = 1 > \text{Priority}(A) = 2$.
    *   **A is PREEMPTED after 1 ms (Rem: 3 ms). B takes the CPU!**
*   **At $t=1 \to 3$:** **B** executes for its full 2 ms burst and completes at $t=3$ ($CT = 3$).
    *   (Note: At $t=2$, **C** arrived with Priority 3, but $1 > 3$, so **B** was uninterrupted).
*   **At $t=3$:** **D** arrives with **Priority 1**.
    *   Available in Ready Queue: **D** (prio 1), **A** (prio 2, rem 3), **C** (prio 3, rem 6).
    *   **D has the highest priority (1). D executes from $t=3 \to 6$ and FINISHES at $t=6$**. ($CT = 6$).
*   **At $t=6$:** Available: **A** (prio 2, rem 3 ms) and **C** (prio 3, rem 6 ms).
    *   $\text{Priority}(A) = 2 > \text{Priority}(C) = 3$.
    *   **A resumes and executes remaining 3 ms from $t=6 \to 9$ and FINISHES at $t=9$**. ($CT = 9$).
*   **At $t=9$:** **C** executes from $t=9 \to 15$ and finishes at $t=15$. ($CT = 15$).

#### Gantt Chart:
```
+---+-------+-------+-------+--------------------+
| A |   B   |   D   |   A   |         C          |
+---+-------+-------+-------+--------------------+
0   1       3       6       9                    15
```

#### Detailed Solution Calculation Table:
| Process ID | $AT$ | $BT$ | Priority | $CT$ | $TAT = CT - AT$ | $WT = TAT - BT$ | $RT = \text{First Alloc} - AT$ |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **A** | 0 | 4 | 2 | 9 | $9 - 0 = \mathbf{9}$ | $9 - 4 = \mathbf{5}$ | $0 - 0 = \mathbf{0}$ |
| **B** | 1 | 2 | 1 | 3 | $3 - 1 = \mathbf{2}$ | $2 - 2 = \mathbf{0}$ | $1 - 1 = \mathbf{0}$ |
| **C** | 2 | 6 | 3 | 15 | $15 - 2 = \mathbf{13}$ | $13 - 6 = \mathbf{7}$ | $9 - 2 = \mathbf{7}$ |
| **D** | 3 | 3 | 1 | 6 | $6 - 3 = \mathbf{3}$ | $3 - 3 = \mathbf{0}$ | $3 - 3 = \mathbf{0}$ |

#### Final Averages:
*   $$\text{Average Waiting Time } (AWT) = \frac{5 + 0 + 7 + 0}{4} = \frac{12}{4} = \mathbf{3.0\text{ ms}}$$
*   $$\text{Average Turn-Around Time } (ATAT) = \frac{9 + 2 + 13 + 3}{4} = \frac{27}{4} = \mathbf{6.75\text{ ms}}$$

---

## 5.8 Algorithm 6: Guaranteed Scheduling
*   **Core Principle:** Promises that each of $n$ active processes receives an exact, fair $\frac{1}{n}$ share of the CPU time.
*   **Mathematical Formula:**
    $$\text{Entitled CPU Time} = \frac{\text{Time Since Process Creation}}{n}$$
*   **Scheduling Decision Metric:**
    $$\text{Fairness Ratio} = \frac{\text{Actual CPU Time Consumed}}{\text{Entitled CPU Time}}$$
*   **Algorithm Action:** The process with the lowest fairness ratio is selected to run next until its ratio catches up with the others, strictly preventing CPU monopolization.

---

## 5.9 Algorithm 7: Lottery Scheduling
*   **Core Principle:** A probabilistic, randomized scheduling algorithm where processes are issued **Lottery Tickets** representing shares of system resources.
*   **Working Mechanism:**
    1.  At each scheduling decision, the OS picks a winning lottery ticket number completely at random.
    2.  The process holding that winning ticket is granted CPU execution for a time slice.
*   **Key Features:**
    *   **Proportional Share:** Highly critical processes are assigned more lottery tickets, giving them a proportionally higher probability of winning.
    *   **Responsiveness for New Tasks:** Even a newly spawned process with few tickets has a non-zero chance of winning immediately.
    *   **Ticket Transfer / Sharing:** Cooperating processes can dynamically transfer tickets (e.g., a Client process sends all its lottery tickets to a Server process to accelerate its remote request; once completed, the server returns the tickets).

---

## 5.10 Master Summary Table of Scheduling Algorithms

| Algorithm | Preemptive? | Decision Basis / Criterion | Starvation Possible? | Overhead / Complexity | Key Advantage | Key Disadvantage |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| **FCFS** | Non-Preemptive | Arrival Time ($AT$) | No | Very Low (FIFO Queue) | Simple & easy to implement | Convoy Effect (High avg WT) |
| **SJF** | Non-Preemptive | Shortest Burst Time ($BT$) | **Yes** (for long jobs)| Medium | Mathematically optimal AWT | Impossible to know future $BT$ in advance |
| **SRTF** | Preemptive | Shortest Remaining Time | **Yes** (for long jobs)| High | Optimal AWT for dynamic arrivals | Frequent preemption overhead |
| **Round Robin**| Preemptive | Fixed Time Quantum ($q$) | **No** (Guaranteed turnaround) | Medium | Fair; ideal for time-sharing | Slower average TAT for uniform jobs |
| **Priority** | Both variants | Process Priority Integer | **Yes** (for low priority)| Medium to High | Accommodates critical tasks | Starvation (requires aging solution) |
| **Guaranteed** | Preemptive | Actual vs. Entitled CPU ratio | **No** | High (continuous tracking)| Mathematical fairness ($\frac{1}{n}$) | Continuous ratio recalculation |
| **Lottery** | Preemptive | Randomized ticket draw | **No** | Low to Medium | Simple proportional sharing | Non-deterministic response times |

---

# Exam Tips & Quick Revision Checklist
*   [ ] **Formulas to Memorize:**
    *   $TAT = CT - AT$
    *   $WT = TAT - BT$
    *   $RT = \text{Time of First CPU allocation} - AT$
    *   In non-preemptive algorithms, check that $WT = RT$ when processes arrive before being picked.
*   [ ] **Gantt Chart Drawing Tips:**
    *   Always verify total Gantt chart time against the sum of Burst Times plus any CPU idle gaps.
    *   Label time intervals clearly on the axis below the Gantt chart blocks.
*   [ ] **Common Pitfalls to Avoid:**
    *   Do not confuse **Multiprogramming** (keeping CPU busy via I/O overlap) with **Multiprocessing** (multiple physical CPUs) or **Multitasking** (time-sharing for interactivity).
    *   Remember that in the lecture slides, **Lower Priority Integer = Higher Execution Priority** ($1 > 2 > 3$).
    *   In Microkernels, remember that device drivers and file systems reside in **User Space**, communicating via IPC.

---
*Created for Khwaja Yunus Ali University CSE Operating System Course Examination Preparation.*
