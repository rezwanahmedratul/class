# Comprehensive Operating System Exam Study Guide & Master Notes

> **Course:** Operating System  
> **Instructor:** Md. Iftekhar Hossain Tushar | Lecturer, Department of CSE, Khwaja Yunus Ali University  
> **Document Purpose:** Complete, self-contained, page-by-page exam preparation notes covering all fundamental OS concepts, architectures, process management, and CPU scheduling algorithms with step-by-step solved numericals.

---

## Table of Contents

1. [Module 1: Introduction to Operating Systems](#module-1-introduction-to-operating-systems)
   - 1.1 [What is an Operating System? (Definition & Purpose)](#11-what-is-an-operating-system-definition--purpose)
   - 1.2 [The Real-World Analogy & Need for an OS](#12-the-real-world-analogy--need-for-an-os)
   - 1.3 [Structure / Components of a Computer System](#13-structure--components-of-a-computer-system)
   - 1.4 [Fundamental Terminology: Multiprocessing, Multithreading, Kernel, Shell](#14-fundamental-terminology-multiprocessing-multithreading-kernel-shell)
   - 1.5 [System Calls: Deep-Dive & Comparison (Windows vs. Unix)](#15-system-calls-deep-dive--comparison-windows-vs-unix)
   - 1.6 [Major Operating Systems in the Industry](#16-major-operating-systems-in-the-industry)
   - 1.7 [12 Core Functions of an Operating System](#17-12-core-functions-of-an-operating-system)
   - 1.8 [Why Study Operating Systems?](#18-why-study-operating-systems)
2. [Module 2: Types of Operating Systems](#module-2-types-of-operating-systems)
   - 2.1 [Batch Operating System](#21-batch-operating-system)
   - 2.2 [Multiprogramming Operating System](#22-multiprogramming-operating-system)
   - 2.3 [Multiprocessing Operating System (SMP vs. AMP)](#23-multiprocessing-operating-system-smp-vs-amp)
   - 2.4 [Multitasking (Time-Shared) Operating System](#24-multitasking-time-shared-operating-system)
   - 2.5 [Network Operating System (NOS: Peer-to-Peer vs. Client-Server)](#25-network-operating-system-nos-peer-to-peer-vs-client-server)
   - 2.6 [Distributed Operating System (DOS)](#26-distributed-operating-system-dos)
   - 2.7 [Time-Sharing Operating System (TSOS)](#27-time-sharing-operating-system-tsos)
   - 2.8 [Real-Time Operating System (RTOS)](#28-real-time-operating-system-rtos)
   - 2.9 [Master Comparison Table: All 8 Operating System Types](#29-master-comparison-table-all-8-operating-system-types)
3. [Module 3: Operating System Structures & Architectures](#module-3-operating-system-structures--architectures)
   - 3.1 [Concept of OS System Structure](#31-concept-of-os-system-structure)
   - 3.2 [Simple Structure](#32-simple-structure)
   - 3.3 [Monolithic Structure](#33-monolithic-structure)
   - 3.4 [Micro-Kernel Structure](#34-micro-kernel-structure)
   - 3.5 [Hybrid-Kernel Structure](#35-hybrid-kernel-structure)
   - 3.6 [Exo-Kernel Structure](#36-exo-kernel-structure)
   - 3.7 [Layered Structure](#37-layered-structure)
   - 3.8 [Modular Structure (Loadable Kernel Modules - LKM)](#38-modular-structure-loadable-kernel-modules---lkm)
   - 3.9 [Virtual Machine Structure (VM)](#39-virtual-machine-structure-vm)
   - 3.10 [Master Comparison Table: 8 OS Architectures](#310-master-comparison-table-8-os-architectures)
4. [Module 4: Process Management & Lifecycle](#module-4-process-management--lifecycle)
   - 4.1 [Program vs. Process (Definitions & Differences)](#41-program-vs-process-definitions--differences)
   - 4.2 [Process Memory Layout (Text, Data, Heap, Stack)](#42-process-memory-layout-text-data-heap-stack)
   - 4.3 [Process Control Block (PCB) & Process Table](#43-process-control-block-pcb--process-table)
   - 4.4 [Process Lifecycle & State Transition Models (5-State & 2-State)](#44-process-lifecycle--state-transition-models-5-state--2-state)
   - 4.5 [The Dispatcher & Dispatch Latency](#45-the-dispatcher--dispatch-latency)
   - 4.6 [Process Scheduling Queues (Job, Ready, Device)](#46-process-scheduling-queues-job-ready-device)
   - 4.7 [Schedulers: Long-Term, Short-Term, and Medium-Term](#47-schedulers-long-term-short-term-and-medium-term)
   - 4.8 [Context Switching: Mechanism & Overhead](#48-context-switching-mechanism--overhead)
5. [Module 5: Process Scheduling Algorithms & Mathematical Problems](#module-5-process-scheduling-algorithms--mathematical-problems)
   - 5.1 [Fundamental Scheduling Metrics & Formulas](#51-fundamental-scheduling-metrics--formulas)
   - 5.2 [Scheduling Categories: Preemptive vs. Non-Preemptive](#52-scheduling-categories-preemptive-vs-non-preemptive)
   - 5.3 [First-Come, First-Served (FCFS) Scheduling](#53-first-come-first-served-fcfs-scheduling)
     - *Problem 1: Standard FCFS (Fully Solved with Gantt Chart)*
     - *Problem 2: FCFS with CPU Idle Period (Fully Solved with Gantt Chart)*
   - 5.4 [Shortest Job First (SJF) - Non-Preemptive Scheduling](#54-shortest-job-first-sjf---non-preemptive-scheduling)
     - *Problem 3: SJF Non-Preemptive with Equal Arrival Times (Fully Solved)*
     - *Problem 4: SJF Non-Preemptive with Staggered Arrival Times (Fully Solved)*
   - 5.5 [Shortest Remaining Time First (SRTF) - Preemptive SJF](#55-shortest-remaining-time-first-srtf---preemptive-sjf)
     - *Problem 5: SRTF Preemptive Execution (Fully Solved Step-by-Step)*
   - 5.6 [Round Robin (RR) Scheduling](#56-round-robin-rr-scheduling)
     - *Problem 6: Round Robin with TQ = 2ms & Equal Arrival (Fully Solved)*
     - *Problem 7: Round Robin with TQ = 3ms & Staggered Arrival (Fully Solved with Ready Queue State Trace)*
   - 5.7 [Priority Scheduling (Preemptive & Non-Preemptive)](#57-priority-scheduling-preemptive--non-preemptive)
     - *Problem 8: Non-Preemptive Priority Scheduling (Fully Solved)*
     - *Problem 9: Preemptive Priority Scheduling (Fully Solved Step-by-Step)*
   - 5.8 [Guaranteed Scheduling](#58-guaranteed-scheduling)
   - 5.9 [Lottery Scheduling](#59-lottery-scheduling)
   - 5.10 [Master Comparison Table: All 7 Scheduling Algorithms](#510-master-comparison-table-all-7-scheduling-algorithms)
6. [Quick Formula & Concept Cheatsheet for Exam Day](#quick-formula--concept-cheatsheet-for-exam-day)

---

# Module 1: Introduction to Operating Systems

## 1.1 What is an Operating System? (Definition & Purpose)

- **Formal Definition:** An **Operating System (OS)** is a system software that acts as an **intermediary/interface** between the computer hardware and the computer user.
- **Primary Objective:** It provides an environment in which a user can execute programs in a **convenient** and **efficient** manner.
- **Why is an OS Necessary?**
  - Computer hardware consists of electronic circuitry (transistors, buses, registers) that understands only raw machine code in binary form (`0`s and `1`s).
  - Writing raw binary instructions or communicating directly with hardware registers is practically impossible for end users and application programmers.
  - The OS abstracts this low-level hardware complexity into easy-to-use abstractions (files, processes, windows, system calls).
- **Core Responsibilities:**
  - Execution of all user and system processes.
  - Dynamic allocation and de-allocation of system resources (CPU, RAM, I/O devices).
  - File system navigation and persistent storage management.
  - System security, access control, and error detection.

```
+-------------------------------------------------------------+
|                            USER                             |
+-------------------------------------------------------------+
                              |
                              v
+-------------------------------------------------------------+
|         APPLICATION PROGRAMS (Browser, Word, Games)         |
+-------------------------------------------------------------+
                              |
                              v
+-------------------------------------------------------------+
|         SYSTEM PROGRAMS (Shell, Compilers, Drivers)         |
+-------------------------------------------------------------+
                              |
                              v
+-------------------------------------------------------------+
|            OPERATING SYSTEM (Windows, Linux, macOS)         |
+-------------------------------------------------------------+
                              |
                              v
+-------------------------------------------------------------+
|            HARDWARE (CPU, RAM, Disk, I/O Devices)           |
+-------------------------------------------------------------+
```

---

## 1.2 The Real-World Analogy & Need for an OS

### The "Power-On" Scenario
When you press the power button on your laptop, within seconds:
- The screen lights up and displays a login prompt.
- You authenticate with a password or fingerprint.
- Google Chrome opens with multiple tabs.
- Spotify streams music in the background.
- A large file downloads from the internet.
- A document prints on an external printer.

**Who manages all these concurrent activities without data collision or crashes?**  
The **Operating System**. It manages processor scheduling, distributes memory chunks, directs network packets, and controls device drivers simultaneously.

### The "Busy City" Analogy
Imagine a massive metropolitan city without:
- Traffic police
- Traffic lights
- Road signs & lane dividers

*Result:* Absolute chaos, traffic gridlocks, and collisions.  
In a computer, multiple software applications are like vehicles competing for the same roads (CPU, RAM, I/O). The **OS acts as the traffic controller**, ensuring smooth, fair, and safe resource distribution.

### What happens if there is NO Operating System?
1. **Application Overhead:** Every single application software would have to be written with its own custom hardware drivers, custom user interface, disk storage allocation routines, and network communication protocols.
2. **System Incompatibility:** A word processor written for one hard drive brand would not run on a machine with a different drive.
3. **Inability to Run Modern Computers:** Modern multi-core, multitasking hardware simply cannot function without a centralized resource manager.

---

## 1.3 Structure / Components of a Computer System

A complete computer system consists of five distinct layers:

1. **Users:** People, machines, or other computers attempting to solve computing problems.
2. **Application Programs:** Software designed to accomplish user-specific tasks (e.g., Microsoft Word, Excel, DBMS, Games, VLC Media Player, Web Browsers, Adobe Photoshop).
3. **System Programs:** Software that supports application execution and manages system utilities (e.g., Shells, Compilers, Text Editors, File Managers, Device Drivers, Antivirus, Backup Tools).
4. **Operating System:** The core control program that manages computer hardware, coordinates resource access, and prevents errors/improper use (e.g., Microsoft Windows, Linux, Apple macOS, Google Android, Apple iOS).
5. **Hardware:** The physical electronic and electromechanical components (e.g., CPU, RAM, Secondary Storage [HDD/SSD], Keyboard, Mouse, Network Interface Card, Monitor).

---

## 1.4 Fundamental Terminology: Multiprocessing, Multithreading, Kernel, Shell

### 1. Multiprocessing
- **Definition:** A computing system that incorporates **two or more physical Central Processing Units (CPUs)** capable of executing multiple independent processes simultaneously in true hardware parallelism.
- **Goal:** To dramatically increase the system throughput and computing execution speed.
- **Classification:**
  - **Symmetric Multiprocessing (SMP):**
    - All processors share a single common memory (RAM) and system bus.
    - All processors have equal access and identical privileges; no master-slave relationship.
    - Each processor runs its own copy of the operating system kernel and communicates via shared memory.
    - Highly reliable: If one CPU fails, the workload is distributed among remaining CPUs without system failure.
  - **Asymmetric Multiprocessing (AMP):**
    - Configured in a **Master-Slave** architecture.
    - One master processor controls the system, manages data structures, and assigns specific tasks/sub-tasks to subordinate (slave) processors.
    - Simpler to design, but the master processor can become a significant performance bottleneck.

### 2. Multithreading
- **Definition:** The capability of an operating system to execute different parts (threads) of a single process concurrently.
- **Mechanism:** A process is divided into multiple lightweight execution units called **threads**. All threads of a process share the same code segment, data segment, and open files, but maintain their own individual Program Counter (PC), CPU registers, and stack.
- **Goal:** Enhances application responsiveness and optimizes execution speed with minimal resource overhead.

### Comparison Table: Multiprocessing vs. Multithreading

| Feature / Metric | Multiprocessing | Multithreading |
| :--- | :--- | :--- |
| **Basic Concept** | Multiple physical processors (CPUs) executing multiple processes simultaneously. | Multiple execution streams (threads) within a single process. |
| **Hardware Requirement** | Requires multiple physical CPUs or multi-core processors. | Can run on a single CPU core (via time-slicing) or multi-core CPU. |
| **Memory Allocation** | Each process has its own separate, isolated address space. | All threads share the identical address space and memory of the parent process. |
| **Creation & Context Switch Overhead** | High overhead; creating and switching processes requires updating page tables and memory maps. | Low overhead; creating and switching threads is fast and lightweight. |
| **Fault Isolation** | High; if one process crashes, other processes continue running unaffected. | Low; if one thread crashes or causes a segmentation fault, the entire process may terminate. |
| **Communication Mechanism** | Inter-Process Communication (IPC) via message passing, pipes, or shared memory. | Direct communication via shared global variables and shared heap memory. |

---

### 3. The Kernel
- **Definition:** The central, foundational core component of an operating system that maintains complete control over everything in the system.
- **Key Characteristics:**
  - **First in Memory:** It is the very first program loaded into RAM by the bootloader during system startup.
  - **Permanent Resident:** It resides in protected main memory continuously until the machine is powered off.
  - **Hardware Controller:** Directly manages CPU scheduling, physical memory mapping, device interrupts, and I/O communication.

### 4. The Shell
- **Definition:** The outermost layer and user interface of the operating system that wraps around the kernel.
- **Types:**
  - **Command Line Interface (CLI):** Text-based shell (e.g., Bash in Linux, PowerShell/CMD in Windows) where users type commands.
  - **Graphical User Interface (GUI):** Visual interface (e.g., Windows Desktop, macOS Finder, GNOME) using windows, icons, menus, and pointers.
- **Core Functions:**
  1. Prompting the user for input commands.
  2. Parsing and interpreting the user input.
  3. Invoking the appropriate system calls to instruct the kernel.
  4. Handling and formatting the output returned by the kernel.

### 5. System Software vs. Application Programs
- **System Software:** Programs that operate directly with the kernel to provide platform-level services, security management, memory control, and hardware interface (e.g., device drivers, compilers, operating systems).
- **Application Programs:** End-user software designed to perform specific productivity or entertainment tasks (e.g., Microsoft Word, Notepad, Web Browsers).

---

## 1.5 System Calls: Deep-Dive & Comparison (Windows vs. Unix)

### What is a System Call?
- **Definition:** A programmatic mechanism by which a user-level application requests a service from the operating system's kernel.
- **Dual-Mode Operation:** Modern CPUs operate in at least two modes:
  1. **User Mode (Bit 1):** Restricted execution mode where application software runs. Applications cannot directly touch hardware or arbitrary memory.
  2. **Kernel Mode / Supervisor Mode (Bit 0):** Unrestricted execution mode where the OS kernel executes with direct access to hardware instructions.
- **Role of System Calls:** System calls are the **exclusive gatekeepers/entry points** that allow a program to transition safely from User Mode to Kernel Mode via software interrupts (traps).
- **Major Service Categories Provided:**
  - Process Control & Management (create, terminate, wait)
  - File Access, Directory & File System Management
  - Device Handling (I/O reading, writing, configuring)
  - Information Maintenance (system time, PID, alarms)
  - Inter-Process Communication (pipes, shared memory)
  - Protection and Security Management

### Master System Call Comparison Table: Windows vs. Unix

| Functional Category | Specific OS Operation | Microsoft Windows API | Unix / Linux POSIX System Call |
| :--- | :--- | :--- | :--- |
| **Process Control** | Create a new process | `CreateProcess()` | `fork()` / `exec()` |
| | Terminate a process | `ExitProcess()` | `exit()` |
| | Wait for process completion | `WaitForSingleObject()` | `wait()` / `waitpid()` |
| **File Manipulation** | Open / Create a file | `CreateFile()` | `open()` / `creat()` |
| | Read data from file | `ReadFile()` | `read()` |
| | Write data to file | `WriteFile()` | `write()` |
| | Close an open file | `CloseHandle()` | `close()` |
| **Device Management**| Configure console/device | `SetConsoleMode()` | `ioctl()` |
| | Read from input device | `ReadConsole()` | `read()` |
| | Write to output device | `WriteConsole()` | `write()` |
| **Information Maintenance**| Get current process identifier | `GetCurrentProcessId()` | `getpid()` |
| | Set system timer / alarm | `SetTimer()` | `alarm()` |
| | Delay execution (sleep) | `Sleep()` | `sleep()` |
| **Communication** | Create an anonymous pipe | `CreatePipe()` | `pipe()` |
| | Create shared memory object | `CreateFileMapping()` | `shmget()` |
| | Map memory into address space | `MapViewOfFile()` | `mmap()` |
| **Protection & Security**| Set file permissions/security | `SetFileSecurity()` | `chmod()` |
| | Initialize security descriptor | `InitializeSecurityDescriptor()` | `umask()` |
| | Change ownership/group | `SetSecurityDescriptorGroup()` | `chown()` |

---

## 1.6 Major Operating Systems in the Industry

1. **Microsoft Windows:**
   - Series of graphical operating systems developed by Microsoft.
   - Originated in 1985 as a graphical shell operating on top of MS-DOS.
   - **Windows 95** was the first version released as a true standalone operating system with an integrated kernel. Dominates desktop/laptop market share.
2. **Apple macOS:**
   - Developed by Apple Inc. for the Macintosh computer line; successor to Mac OS X.
   - Built on a certified UNIX foundation (Darwin / Mach hybrid kernel).
3. **Linux:**
   - Free and open-source operating system kernel created by Linus Torvalds in 1991.
   - Packaged into distributions (Ubuntu, Debian, RedHat, Arch).
   - Powers the majority of the world's internet servers, supercomputers, cloud infrastructure, and embedded devices.
4. **Google Android:**
   - Mobile operating system developed by Google, based on a modified Linux kernel.
   - Designed primarily for touchscreen mobile devices (smartphones, tablets, smart TVs).
5. **Apple iOS:**
   - Proprietary mobile operating system created by Apple Inc.; successor to iPhone OS.
   - Powers Apple mobile hardware (iPhone, iPad, iPod Touch).

---

## 1.7 12 Core Functions of an Operating System

```
                          +-----------------------------------+
                          |      FUNCTIONS OF AN OS           |
                          +-----------------------------------+
                             |                             |
     +-----------------------+-----------------------+     +-----------------------+
     | 1. User Interface (UI)                        |     | 7. Multitasking       |
     | 2. Application Management                     |     | 8. I/O Management     |
     | 3. Device Management                          |     | 9. Error Handling     |
     | 4. Memory Management                          |     | 10. Batch Management  |
     | 5. Processor (CPU) Management                 |     | 11. Parallel Compute  |
     | 6. File System Management                     |     | 12. Security & Access |
     +-----------------------------------------------+     +-----------------------+
```

1. **User Interface (UI):** Provides graphical (GUI) or command-line (CLI) environments allowing users to configure, launch, and troubleshoot software and hardware.
2. **Application Management:** Loads executable binaries from disk into memory, initializes resources, handles runtime libraries, and monitors process termination.
3. **Device Management:** Tracks all connected peripheral devices using Device Drivers and I/O Controllers. Allocates devices efficiently to requesting processes and de-allocates them when finished.
4. **Memory Management:** Keeps track of every byte of primary memory (RAM). Decides memory allocation and de-allocation strategies (paging, segmentation) for processes.
5. **Processor / Process Management:** Implements scheduling algorithms to determine which process gets CPU execution time, for how long, and in what sequence.
6. **File Management:** Organizes persistent data into hierarchical directory trees. Manages file access rights, metadata, read/write pointers, and block storage mappings.
7. **Multitasking:** Coordinates multiple active programs sharing a single CPU, rapidly switching execution context to give the illusion of simultaneous execution.
8. **I/O Management:** Buffers, caches, and spools data flowing between the CPU and hardware devices (disks, keyboards, network cards).
9. **Error Handling & Messaging:** Continuously detects hardware faults (memory parity errors, bad sectors) and software exceptions (division by zero, illegal memory access) and produces informative diagnostics.
10. **Batch Job Management:** Automates background execution of large, repetitive workloads (e.g., print spooling, payroll generation) without requiring user intervention.
11. **Parallel Processing:** On multi-processor systems, partitions computational tasks across multiple execution units to maximize throughput.
12. **Security & Protection:** Protects system integrity through user authentication (passwords, biometrics), access control lists (ACLs), and hardware memory bounds checking.

---

## 1.8 Why Study Operating Systems?

- **Understand Device Internals:** Gives clear insight into how hardware registers, CPU pipelines, memory buses, and storage devices coordinate.
- **System Troubleshooting:** Empowers engineers to diagnose memory leaks, deadlocks, performance bottlenecks, and kernel crashes.
- **Write High-Performance Code:** Enables programmers to write hardware-efficient, concurrent, and thread-safe software.
- **Informed System Selection:** Helps individuals and enterprise architects choose the optimal OS architecture for specific operational requirements.

---

# Module 2: Types of Operating Systems

Operating systems are classified into eight primary categories based on hardware structure, processing capabilities, and response time guarantees:

```
                            +-------------------------------------+
                            |     TYPES OF OPERATING SYSTEMS      |
                            +-------------------------------------+
                                               |
         +------------------+------------------+------------------+------------------+
         |                  |                  |                  |                  |
     1. Batch           2. Multiprogramming 3. Multiprocessing 4. Multitasking   5. Network (NOS)
         |                  |                  |                  |                  |
     6. Distributed     7. Time-Sharing     8. Real-Time (RTOS)
```

---

## 2.1 Batch Operating System

- **Historical Era:** Highly popular in the 1960s and 1970s (e.g., IBM OS/360).
- **Core Working Concept:**
  - Users **do not interact directly** with the computer system.
  - A user prepares their program offline on an input medium (such as punch cards or magnetic tapes) and submits it to a human **Computer Operator**.
  - The operator collects jobs from various users, sorts them into **batches** with similar requirements (e.g., Fortran programs, COBOL jobs), and feeds the batch into the computer.
- **Advantages:**
  - Maximizes utilization of batch-oriented peripheral devices.
  - Automates sequential execution of large repetitive workloads.
- **Disadvantages:**
  - **High CPU Idle Time:** The CPU sits completely idle while slow mechanical I/O devices load the next job.
  - **No Direct Interaction:** Debugging is painfully slow; programmer receives output hours or days later.
  - **No Priority Control:** A short job must wait behind a massive job in the batch.

---

## 2.2 Multiprogramming Operating System

- **Core Concept:** An extension of batch systems designed to eliminate CPU idle time.
- **Mechanism:**
  - Multiple processes are kept loaded simultaneously in main memory (RAM).
  - Every process requires two types of system time: **CPU Burst Time** (computation) and **I/O Burst Time** (reading/writing disk, waiting for user input).
  - When the currently executing process initiates an I/O operation, the OS immediately switches the CPU to another process in RAM that is ready to compute.
- **Key Benefits:**
  - **High CPU Utilization:** Keeps the CPU busy near 100% of the time.
  - **Reduced Response Time:** Short tasks do not have to wait for long tasks to finish their I/O.
  - Dynamic support for mixed workloads (I/O-bound and CPU-bound processes).

---

## 2.3 Multiprocessing Operating System

- **Core Concept:** Achieves **true hardware parallelism** by incorporating two or more physical CPUs in a single computer system.
- **Working:** Processes are partitioned and distributed across multiple physical CPUs executing concurrently.
- **Two Major Architectures:**
  1. **Symmetric Multiprocessing (SMP):**
     - Every processor has an identical copy of the OS and shares common memory and I/O subsystems.
     - Processors act as peers; any CPU can run any kernel or user task.
     - Workload is dynamically balanced across all available processors.
  2. **Asymmetric Multiprocessing (AMP):**
     - Organized in a **Master-Slave hierarchy**.
     - The **Master CPU** executes the OS kernel and assigns tasks to **Slave CPUs**.
     - Simpler design, but master processor failure crashes the system, and master overload causes bottlenecks.
- **Advantages:**
  - **High Throughput:** More tasks completed per unit time.
  - **Enhanced Reliability / Fault Tolerance:** If one CPU fails, remaining processors pick up the workload.
  - **Cost Effective:** Multiple processors share power supplies, memory, and storage buses.

---

## 2.4 Multitasking (Time-Shared) Operating System

- **Core Concept:** A logical extension of multiprogramming that allows a single user to run multiple application programs concurrently on a single computer.
- **Working:**
  - The OS switches the CPU among multiple active applications (e.g., web browser, music player, document editor) at high speeds.
  - The switching happens so fast (fractions of a second) that the user perceives all programs as executing simultaneously in parallel.
- **Multiprogramming vs. Multitasking Distinction:**
  - *Multiprogramming:* Focuses on maximizing **CPU utilization** by switching jobs when one is blocked on I/O.
  - *Multitasking:* Focuses on maximizing **user responsiveness** and interactivity by rapidly time-slicing the CPU even if processes are not blocked.

---

## 2.5 Network Operating System (NOS)

- **Core Concept:** Specialized software running on dedicated servers designed to manage, secure, and coordinate shared resources (files, databases, printers, network applications) over a Local Area Network (LAN).
- **System Nature:** Known as **Tightly-Coupled Systems** from a network perspective because users are fully aware of host names, individual IP addresses, and underlying network configurations.
- **Examples:** Microsoft Windows Server, Red Hat Enterprise Linux, Novell NetWare.
- **Two Structural Types:**
  1. **Peer-to-Peer NOS:**
     - All connected nodes have equal privileges and share resources mutually.
     - Best suited for small networks with limited devices; simple and inexpensive.
  2. **Client-Server NOS:**
     - Centralized, powerful server manages security, access rights, and data storage for multiple client workstations.
     - Highly scalable and robust, but expensive to deploy and maintain.

---

## 2.6 Distributed Operating System (DOS)

- **Core Concept:** An advanced operating system that manages a collection of independent, autonomous computers connected via a communication network, making them appear to the user as a **single unified computer system**.
- **Key Characteristics:**
  - **Loosely Coupled Systems:** Each computer node possesses its own independent CPU, local memory, and system clock.
  - **Distribution of OS:** The OS itself is divided into modular components distributed across different physical machines.
  - **Location Transparency:** Users access remote files and computing resources without needing to know physical locations.
  - **Fault Tolerance:** If one node crashes, the system dynamically reroutes tasks to operational nodes.

---

## 2.7 Time-Sharing Operating System (TSOS)

- **Core Concept:** Enables **multiple concurrent users** located at different terminals to access a centralized mainframe or server simultaneously.
- **Three Core Pillars:**
  1. **Time Slicing / Quantum:** CPU time is divided into small intervals called **time slices (quantum)** (e.g., 10–50 ms). Each user/process gets the CPU for one quantum before the CPU moves to the next process in a circular queue.
  2. **Multiprogramming:** Multiple active user programs reside in main memory simultaneously.
  3. **Context Switching:** Rapidly saves the exact register/memory state of the current user's program and loads the state of the next user's program.

---

## 2.8 Real-Time Operating System (RTOS)

- **Core Concept:** An operating system specifically designed for applications where computing correctness depends not only on the logical result of computation, but also on the **exact time at which the result is delivered**.
- **Crucial Rule:** Every task has a strict **deadline**. Failing to complete by the deadline can cause catastrophic system failure or make the output completely useless.
- **Two Major Sub-Types:**
  - **Hard Real-Time System:** Zero tolerance for deadline delays. A single missed deadline results in total system failure or loss of life (e.g., Anti-lock Braking Systems [ABS], Aircraft Flight Control, Pacemakers, Missile Guidance Systems).
  - **Soft Real-Time System:** Deadlines are important, but occasional misses degrade quality of service without catastrophic failure (e.g., Video Streaming, Online Gaming, Live Audio Broadcast).

---

## 2.9 Master Comparison Table: All 8 Operating System Types

| OS Type | Primary Objective | User Interaction | Number of CPUs | Key Mechanism / Characteristic | Typical Real-World Example |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **1. Batch OS** | Maximize device utilization for repetitive jobs | None (via human operator) | Single CPU | Jobs grouped into batches using punch cards | IBM OS/360, Early mainframes |
| **2. Multiprogramming** | Maximize CPU utilization | Low to moderate | Single CPU | CPU switches process when current process does I/O | Early Unix, Mainframe OS |
| **3. Multiprocessing** | Maximize computing throughput & speed | High | Multiple CPUs | True hardware parallelism; SMP or Master-Slave AMP | Modern Linux, Windows 11 on Multi-core CPUs |
| **4. Multitasking** | Allow single user to run multiple apps | Very High | Single or Multi-core | Rapid time-sliced switching giving illusion of parallelism | Desktop Windows, macOS, Android |
| **5. Network (NOS)** | Coordinate resource sharing across LAN | High (Network aware) | Multiple nodes | Tightly-coupled; centralized Client-Server or Peer-to-Peer | Windows Server, Novell NetWare |
| **6. Distributed (DOS)**| Unified single-system view over network | High (Transparent) | Multiple nodes | Loosely-coupled autonomous nodes with shared communication | Amoeba, Plan 9, LOCUS |
| **7. Time-Sharing** | Multi-user simultaneous server access | High (Interactive) | Single or Multi-core | Fixed Time Quantum allocation with rapid context switching | UNIX, Multics, CTSS |
| **8. Real-Time (RTOS)** | Guarantee strict, deterministic deadlines | Low to high | Embedded / Multi | Deterministic interrupt handling; Hard vs. Soft deadlines | VxWorks, QNX, FreeRTOS, Car ABS |

---

# Module 3: Operating System Structures & Architectures

## 3.1 Concept of OS System Structure

- **Definition:** The **system structure** of an operating system serves as the architectural blueprint defining how standard components (memory manager, scheduler, file system, device drivers) are partitioned, interconnected, and integrated with the **kernel**.
- **Importance:** Determines system performance, maintainability, fault isolation, security, and portability.

```
                          +-----------------------------------+
                          |      8 OS SYSTEM STRUCTURES       |
                          +-----------------------------------+
                             |                             |
     +-----------------------+-----------------------+     +-----------------------+
     | 1. Simple Structure                           |     | 5. Exo-Kernel         |
     | 2. Monolithic Structure                       |     | 6. Layered Structure  |
     | 3. Micro-Kernel Structure                     |     | 7. Modular Structure  |
     | 4. Hybrid-Kernel Structure                    |     | 8. Virtual Machine    |
     +-----------------------------------------------+     +-----------------------+
```

---

## 3.2 Simple Structure

- **Architecture:** Operating systems that lack well-defined structural boundaries; small, simple, and limited in design.
- **Characteristics:** Applications can bypass the OS and interact directly with basic I/O hardware routines and BIOS.
- **Example:** **MS-DOS** (Microsoft Disk Operating System) and original BIOS.
- **Advantages:**
  - High raw execution speed due to minimal interface abstraction overhead.
  - Very easy to develop and implement on early limited hardware.
- **Disadvantages:**
  - **No Data Hiding / Protection:** Applications can overwrite kernel memory.
  - **System Vulnerability:** A crash or bug in a user program crashes the entire computer.

---

## 3.3 Monolithic Structure

- **Architecture:** The **entire operating system** is compiled and executed as a single massive executable running entirely in **Kernel Mode**.
- **Characteristics:** All OS services (Process Scheduling, Virtual Memory, File Systems, IPC, Network Stacks, Device Drivers) share the same address space.
- **Communication:** Services communicate via direct, blazing-fast C function calls.
- **Examples:** Traditional UNIX, Original Linux Kernel.
- **Advantages:**
  - **Maximum Performance:** Direct internal function calls eliminate context switching and message passing overhead.
  - Easy to design initially as a single monolithic code base.
- **Disadvantages:**
  - **Poor Maintainability:** Modifying one component can cause unexpected side effects across the kernel.
  - **Zero Fault Isolation:** A single bug in any third-party device driver causes a fatal **Kernel Panic** or **Blue Screen of Death (BSOD)**.

---

## 3.4 Micro-Kernel Structure

- **Architecture:** Drastically minimizes the kernel by removing all non-essential services from kernel space and implementing them as independent user-level programs (servers).
- **Kernel Contents:** Contains only the absolute bare essentials:
  - Low-level address space management
  - Basic Inter-Process Communication (IPC)
  - Primitive CPU scheduling
- **User-Space Servers:** File systems, device drivers, network protocol stacks run in **User Mode**.
- **Communication:** Uses structured IPC (message passing) routed through the microkernel.
- **Examples:** **Mach**, **QNX**, **Minix**, **macOS** (Mach foundation).
- **Advantages:**
  - **Extreme Reliability & Security:** If a device driver or file system crashes in user space, the kernel remains completely unharmed and restarts the service.
  - **High Portability:** Porting to a new CPU architecture requires modifying only the tiny microkernel.
  - Easy to extend with new features without touching kernel code.
- **Disadvantages:**
  - **Performance Degradation:** Frequent context switching and message passing overhead between user servers and kernel reduce throughput.

---

## 3.5 Hybrid-Kernel Structure

- **Architecture:** A pragmatic engineering compromise combining the raw execution speed of Monolithic kernels with the modularity and fault-isolation concepts of Microkernels.
- **Mechanism:** Critical performance-sensitive services (such as graphics subsystems and file systems) remain in kernel space, while maintaining a modular microkernel-style architecture.
- **Examples:** **Microsoft Windows NT** (Windows 10, Windows 11), **Apple macOS** (XNU Kernel).
- **Advantages:**
  - Excellent overall performance with wide hardware compatibility.
  - Better isolation and modular debugging than pure monolithic systems.
- **Disadvantages:**
  - Increased architectural complexity; difficult to verify and maintain.

---

## 3.6 Exo-Kernel Structure

- **Architecture:** Designed and developed by researchers at **MIT**.
- **Core Philosophy:** Keep the kernel extremely tiny by **eliminating hardware resource abstractions completely**.
- **Mechanism:**
  - The Exo-kernel only handles secure allocation and hardware multiplexing (protecting resource ownership).
  - Application developers use specialized **Library Operating Systems (LibOS)** to manage physical memory pages and raw disk blocks directly, tailored to their exact application needs.
- **Advantages:**
  - **Peak Application Performance:** Applications can bypass generic OS overhead (e.g., custom database engine managing disk blocks directly).
  - Maximum flexibility for advanced programmers.
- **Disadvantages:**
  - Complex to develop; security relies heavily on application-level LibOS correctness.

---

## 3.7 Layered Structure

- **Architecture:** The operating system is partitioned into $N$ hierarchical layers ($0$ to $N$).
  - **Layer 0 (Bottom):** Physical Computer Hardware.
  - **Layer N (Top):** User Interface.
- **Strict Rule:** Each layer $i$ is built strictly on top of layer $i-1$, and routines at layer $i$ can **only invoke services from lower layers** ($0$ to $i-1$).
- **Advantages:**
  - **Modularity & Easy Debugging:** Layer 1 is debugged and verified first, then Layer 2, etc. If an error occurs, it is isolated to the specific layer under test.
- **Disadvantages:**
  - Difficult to define strict layer boundaries (e.g., memory manager requires disk driver, but disk driver needs memory buffer).
  - **Lower Performance:** A system call must traverse through multiple intermediate layers, adding function call overhead.

---

## 3.8 Modular Structure (Loadable Kernel Modules - LKM)

- **Architecture:** Modern object-oriented approach where the OS has a core kernel, and additional features/services are loaded dynamically as **Loadable Kernel Modules (LKM)** at boot time or during runtime.
- **Mechanism:** Similar to monolithic kernels in performance (modules execute in kernel space), but modular like layered systems because modules communicate via standard interfaces without recompiling the entire kernel.
- **Examples:** **Modern Linux Kernel**, **Sun Solaris**.
- **Advantages:**
  - Dynamic flexibility: Drivers load on-demand when hardware is plugged in (e.g., USB flash drive).
  - Clean modularity with zero message-passing performance penalty.
- **Disadvantages:**
  - A buggy dynamically loaded module running in kernel mode can crash the kernel.

---

## 3.9 Virtual Machine Structure (VM)

- **Architecture:** Software-based abstraction that emulates a complete physical computer system.
- **Mechanism:**
  - A software layer called a **Hypervisor / Virtual Machine Monitor (VMM)** sits on top of host hardware or host OS.
  - It creates multiple isolated **Virtual Machines (VMs)**, each capable of running its own guest operating system and applications simultaneously.
- **Advantages:**
  - **Complete Isolation:** Total security; guest OS crashes do not affect host or other VMs.
  - Optimal hardware resource consolidation for cloud servers and software testing.
- **Disadvantages:**
  - Performance overhead due to hardware virtualization layers.

---

## 3.10 Master Comparison Table: 8 OS Architectures

| Structure Name | Kernel Space Composition | User Space Composition | Performance | Reliability & Fault Isolation | Key Example |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **1. Simple** | No separation; shared address space | Applications touch BIOS directly | Very Fast | Very Poor (User bug crashes system) | MS-DOS, Early BIOS |
| **2. Monolithic** | All OS services (Drivers, FS, Memory, Scheduling) | Only application software | Maximum (Fastest) | Poor (Driver bug causes Kernel Panic) | Traditional UNIX, Linux |
| **3. Micro-Kernel** | Minimal core (IPC, basic memory, CPU scheduling) | Drivers, File Systems, Network Stacks as Servers | Slower (IPC overhead) | Maximum (Driver crash handled safely) | Mach, QNX, Minix |
| **4. Hybrid-Kernel**| Core microkernel + speed-critical drivers/FS | Applications + non-critical services | Fast | Moderate to High | Windows NT (10/11), macOS XNU |
| **5. Exo-Kernel** | Bare hardware multiplexer and protector | Custom LibOS + Applications | Maximum (App-tuned) | Moderate (Relies on LibOS correctness) | MIT Aegis, XOK |
| **6. Layered** | Hierarchically partitioned layers ($0$ to $N$) | User Interface at Layer $N$ | Moderate | High (Layer-by-layer verification) | THE Multiprogramming System |
| **7. Modular (LKM)**| Core kernel + dynamically loaded `.ko` modules | User applications | Fast | High modularity, but module bug can panic | Modern Linux, Solaris |
| **8. Virtual Machine**| Hypervisor / VMM | Independent Guest OS instances + Apps | Moderate | Maximum (Total sandbox isolation) | VMware ESXi, KVM, VirtualBox |

---

# Module 4: Process Management & Lifecycle

## 4.1 Program vs. Process (Definitions & Differences)

- **Program (Passive Entity):** A static file stored on secondary storage (such as a hard drive or SSD) containing a sequence of instructions (e.g., `test.c` or compiled binary `a.out`). It consumes no CPU or RAM resources while sitting on disk.
- **Process (Active Entity):** A **dynamic instance of a program in active execution**. When a program is loaded into main memory (RAM), it becomes an active process with an allocated address space, Program Counter, registers, and resources.

### Comparison Table: Program vs. Process

| Metric | Program | Process |
| :--- | :--- | :--- |
| **Nature** | Passive entity sitting dormant on secondary storage. | Active entity executing in main memory (RAM). |
| **Lifetime** | Permanent (persists until explicitly deleted by user). | Temporary (exists only while executing from start to exit). |
| **Resource Needs** | Requires only disk storage space. | Requires CPU, RAM, I/O devices, and open file descriptors. |
| **State** | Has no execution state. | Moves through states: New, Ready, Running, Waiting, Terminated. |
| **Control Block** | No control block. | Managed via a dedicated Process Control Block (PCB). |

---

## 4.2 Process Memory Layout (Text, Data, Heap, Stack)

When an executable program is loaded into main memory, the operating system assigns it a dedicated virtual address space partitioned into four distinct segments:

```
+-------------------------------------------------------------+  High Memory Address (0xFFFFFFFF)
|                           STACK                             |
|   (Local Variables, Function Parameters, Return Addresses)  |
|                             |                               |
|                             v  (Grows Downward)             |
|                                                             |
|                             ^  (Grows Upward)               |
|                             |                               |
|                            HEAP                             |
|             (Dynamic Memory Allocated via malloc/new)       |
+-------------------------------------------------------------+
|                            DATA                             |
|          - Uninitialized Data (BSS: zero initialized)       |
|          - Initialized Data (Global & Static Variables)     |
+-------------------------------------------------------------+
|                            TEXT                             |
|          (Compiled Executable Machine Code Instructions,    |
|           Program Counter location - Read Only)             |
+-------------------------------------------------------------+  Low Memory Address (0x00000000)
```

1. **Text Segment (Code):**
   - Contains the compiled executable machine code instructions of the program.
   - Pointed to by the **Program Counter (PC)**.
   - Marked as **Read-Only** to prevent accidental self-modification.
2. **Data Segment:**
   - **Initialized Data:** Global and static variables explicitly initialized with non-zero values by the programmer (e.g., `int count = 100;`).
   - **Uninitialized Data (BSS - Block Started by Symbol):** Global and static variables uninitialized or initialized to zero (e.g., `static int buffer[1024];`).
3. **Heap Segment:**
   - Memory dynamically allocated at runtime (e.g., using `malloc()`, `calloc()`, `realloc()` in C, or `new` in C++/Java).
   - **Grows upwards** toward higher memory addresses.
4. **Stack Segment:**
   - Temporary scratchpad memory used for function/method calls.
   - Stores function arguments, return addresses, and local variables.
   - **Grows downwards** toward lower memory addresses.

---

## 4.3 Process Control Block (PCB) & Process Table

- **Process Control Block (PCB):** Also known as a **Task Control Block (TCB)**, it is the primary kernel data structure representing an active process in the operating system.
- **Location of PCB:** Stored in protected kernel memory (often at the top of the process kernel stack), completely inaccessible to user space for security.
- **Process Table:** An array or linked list maintained by the kernel containing a pointer to the PCB of every active process in the system.

### 7 Key Attributes Stored in a PCB

```
+-------------------------------------------------------------+
|                     PROCESS CONTROL BLOCK                   |
+-------------------------------------------------------------+
| 1. Pointer (Stack Pointer to retain context)                |
| 2. Process State (New, Ready, Running, Waiting, Terminated) |
| 3. Process Number (PID - Unique Identifier)                 |
| 4. Program Counter (Address of next instruction to execute) |
| 5. CPU Registers (Accumulator, Index, Stack, General Regs)  |
| 6. Memory Limits (Page Tables, Segment Tables, Base/Limit)  |
| 7. List of Open Files & I/O Status (Allocated devices/files)|
+-------------------------------------------------------------+
```

1. **Pointer:** Stack pointer saving the current stack frame address when the process transitions between states.
2. **Process State:** Current operational lifecycle state of the process (e.g., Ready, Running, Waiting).
3. **Process Number (PID):** A unique integer identifier assigned to distinguish the process from all other processes in the operating system.
4. **Program Counter (PC):** Holds the memory address of the next machine instruction to be fetched and executed by the CPU.
5. **CPU Registers:** Data structure saving the values of hardware registers (accumulator, base registers, index registers, flags) when the process is preempted.
6. **Memory Management Information:** Page tables, segment tables, and base/limit registers defining the boundaries of the process's valid memory space.
7. **List of Open Files & I/O Status:** Array of open file descriptors and list of I/O devices currently assigned to the process.

---

## 4.4 Process Lifecycle & State Transition Models

### 1. The 5-State Process Model

As a process executes, it transitions through five distinct states:

```
                  +---------------- Interrupt ---------------+
                  |                                          |
                  v                                          |
  [ NEW / START ] ---> [ READY ] -------------> [ RUNNING ] ------> [ TERMINATED / EXIT ]
                         ^    (Scheduler Dispatch)   |
                         |                           |
                         +--- I/O or Event Complete -+--- I/O or Event Wait ---> [ WAITING / BLOCKED ]
```

1. **Start / New:** The initial state when a process is first created by the OS but not yet loaded into the Ready Queue in RAM.
2. **Ready:** The process is loaded in main memory (RAM) and is waiting to be allocated CPU time by the Short-Term Scheduler.
3. **Running:** The process has been assigned the CPU by the scheduler dispatcher; its instructions are actively executing.
4. **Waiting / Blocked:** The process cannot execute because it is waiting for an external event (e.g., user keyboard input, disk read completion).
5. **Terminated / Exit:** The process has completed its execution or was killed by the OS; its PCB is freed from memory.

### 2. The 2-State Process Model
- A simplified conceptual model consisting of only two states:
  - **Running:** The process currently holding the CPU.
  - **Not Running:** Processes waiting in a linked list queue for their turn to execute.
- When the running process pauses or terminates, the **Dispatcher** selects a process from the "Not Running" queue.

---

## 4.5 The Dispatcher & Dispatch Latency

- **Definition:** The **Dispatcher** is the low-level kernel module that physically transfers control of the CPU to the process selected by the Short-Term Scheduler.
- **Three Core Responsibilities:**
  1. Switching execution context (saving old registers, loading new registers).
  2. Switching CPU mode from Kernel Mode to User Mode.
  3. Jumping to the exact instruction address indicated by the new process's Program Counter.
- **Dispatch Latency:** The total elapsed time required for the dispatcher to stop one process and start another. It represents pure overhead.

---

## 4.6 Process Scheduling Queues

The operating system manages processes by placing their PCBs into dedicated scheduling queues:

1. **Job Queue:** Holds all processes submitted to the system residing in secondary storage (disk).
2. **Ready Queue:** Holds all processes residing in main memory (RAM) that are ready, waiting for CPU allocation.
3. **Device Queues (I/O Queues):** Dedicated queues for each specific hardware device (e.g., Disk queue, Printer queue) holding processes blocked waiting for that device.

---

## 4.7 Schedulers: Long-Term, Short-Term, and Medium-Term

The operating system utilizes three distinct types of schedulers:

```
[ Secondary Storage / Disk ]
             |
             | (Long-Term Scheduler: Controls Degree of Multiprogramming)
             v
      [ Ready Queue in RAM ] <======================+
             |                                      |
             | (Short-Term Scheduler: Allocates CPU)| (Medium-Term Scheduler:
             v                                      |  Swaps processes in/out)
        [ CPU / Running ]                           |
             |                                      |
             v                                      |
      [ Blocked / Swap Space on Disk ] =============+
```

### Master Scheduler Comparison Table

| Scheduler Type | Also Known As | Primary Function | Execution Frequency | Key Objective |
| :--- | :--- | :--- | :--- | :--- |
| **Long-Term Scheduler** | Job Scheduler | Selects jobs from disk (Job Queue) and loads them into RAM (Ready Queue). | Infrequent (seconds, minutes). | Controls the **Degree of Multiprogramming**; balances I/O-bound and CPU-bound jobs. |
| **Short-Term Scheduler**| CPU Scheduler | Selects a process from the Ready Queue and allocates the CPU. | Extremely frequent (every 10–100 milliseconds). | Maximizes system performance and minimizes waiting time. |
| **Medium-Term Scheduler**| Swapper | Removes processes from RAM to secondary storage (Swap Space) and brings them back later. | Intermediate frequency. | Reduces memory congestion (thrashing) and optimizes process mix. |

---

## 4.8 Context Switching: Mechanism & Overhead

- **Definition:** The computational mechanism of saving the complete execution context (state) of the currently running process in its PCB and restoring the saved context of another process from its PCB so that execution can resume from the exact same instruction.
- **Step-by-Step Context Switch Sequence:**
  1. An interrupt (timer tick or I/O request) occurs in the CPU.
  2. The CPU saves the Program Counter (PC) and hardware registers into the **Old Process's PCB**.
  3. The OS updates the state of the Old Process (to Ready or Waiting) and moves its PCB to the corresponding queue.
  4. The Short-Term Scheduler selects a **New Process** from the Ready Queue.
  5. The Dispatcher loads the saved CPU registers and Program Counter from the **New Process's PCB**.
  6. The CPU mode changes to User Mode and jumps to the new PC address to resume execution.
- **Overhead:** Context switching is **pure system overhead**. While switching occurs, the CPU does zero useful computation for user applications.

---

# Module 5: Process Scheduling Algorithms & Mathematical Problems

## 5.1 Fundamental Scheduling Metrics & Formulas

To analyze and compare process scheduling algorithms, operating systems define precise mathematical metrics:

```
Timeline of Process Execution:
Arrival (AT)                     First CPU (RT)                   Completion (CT)
     |                                 |                                 |
     v                                 v                                 v
-----+---------------------------------+---------------------------------+-----> Time
     |<------- Waiting Time (WT) ----->|<------ Burst Time (BT) -------->|
     |<--------------------- Turnaround Time (TAT) --------------------->|
```

1. **Arrival Time (AT):** The exact timestamp at which a process arrives and enters the Ready Queue.
2. **Burst Time (BT) / Execution Time (ET):** The total duration of CPU execution time required by the process to complete.
3. **Completion Time (CT):** The exact timestamp at which the process finishes its final instruction and terminates.
4. **Turnaround Time (TAT):** The total elapsed time from process arrival to process completion:
   $$\text{TAT} = \text{Completion Time (CT)} - \text{Arrival Time (AT)}$$
   $$\text{Alternatively: } \text{TAT} = \text{Burst Time (BT)} + \text{Waiting Time (WT)}$$
5. **Waiting Time (WT):** The total duration of time a process spends waiting in the Ready Queue:
   $$\text{WT} = \text{Turnaround Time (TAT)} - \text{Burst Time (BT)}$$
6. **Response Time (RT):** The time elapsed from process arrival until it receives the CPU for the **very first time**:
   $$\text{RT} = \text{Time of First CPU Allocation} - \text{Arrival Time (AT)}$$
7. **Special Non-Preemptive Rule:** In non-preemptive scheduling algorithms where a process does not experience CPU preemption after first allocation, $\text{Waiting Time (WT)} = \text{Response Time (RT)}$ (provided there is no intermediate I/O).
8. **Gantt Chart:** A horizontal bar chart illustrating the scheduling and execution timeline of processes across the CPU.

---

## 5.2 Scheduling Categories: Preemptive vs. Non-Preemptive

| Criteria | Preemptive Scheduling | Non-Preemptive Scheduling |
| :--- | :--- | :--- |
| **CPU Control** | The OS can forcefully take the CPU away from a running process when a higher-priority process arrives or a time quantum expires. | Once the CPU is allocated to a process, it cannot be taken away until the process voluntarily terminates or blocks for I/O. |
| **State Transitions** | Running $\rightarrow$ Ready, or Running $\rightarrow$ Waiting. | Running $\rightarrow$ Terminated, or Running $\rightarrow$ Waiting. |
| **Overhead** | Higher overhead due to frequent context switching. | Lower overhead due to minimal context switching. |
| **Starvation Risk** | Starvation possible for long processes in algorithms like SRTF. | Starvation possible if a process enters an infinite loop. |
| **Examples** | Round Robin, SRTF, Preemptive Priority. | FCFS, Non-Preemptive SJF, Non-Preemptive Priority. |

---

## 5.3 First-Come, First-Served (FCFS) Scheduling

- **Principle:** The simplest scheduling algorithm. Processes are assigned CPU execution strictly in the order they arrive in the Ready Queue (FIFO).
- **Type:** Non-Preemptive.
- **Advantages:** Easy to understand and implement using a simple FIFO queue; no complex priority calculations.
- **Disadvantages:**
  - **Convoy Effect:** If a long CPU-bound process arrives first, all short I/O-bound processes are forced to wait behind it, resulting in very high average waiting times.

---

### Problem 1: Standard FCFS (Fully Solved)

#### Input Process Table:
| Process ID | Arrival Time (AT) | Burst Time (BT) |
| :---: | :---: | :---: |
| **P1** | 2 | 2 |
| **P2** | 5 | 6 |
| **P3** | 0 | 4 |
| **P4** | 0 | 7 |
| **P5** | 7 | 4 |

#### Step-by-Step Scheduling Walkthrough:
1. **At $t=0$:** P3 (BT=4) and P4 (BT=7) arrive simultaneously. Tie-breaker rule: P3 is scheduled first.
   - P3 executes from $t=0$ to $t=4$. (CT = 4).
   - During this time, P1 arrives at $t=2$.
2. **At $t=4$:** Ready Queue contains P4 (arrived $t=0$) and P1 (arrived $t=2$).
   - P4 arrived earlier, so P4 executes from $t=4$ to $t=11$. (CT = 11).
   - During this time, P2 arrives at $t=5$ and P5 arrives at $t=7$.
3. **At $t=11$:** Ready Queue contains P1 (arrived $t=2$), P2 (arrived $t=5$), and P5 (arrived $t=7$).
   - P1 arrived earliest, so P1 executes from $t=11$ to $t=13$. (CT = 13).
4. **At $t=13$:** P2 executes from $t=13$ to $t=19$. (CT = 19).
5. **At $t=19$:** P5 executes from $t=19$ to $t=23$. (CT = 23).

#### Gantt Chart:
```
+-------+--------------+-------+--------------+--------+
|  P3   |      P4      |  P1   |      P2      |   P5   |
+-------+--------------+-------+--------------+--------+
0       4              11      13             19       23
```

#### Final Calculated Solution Table:

| Process ID | Arrival Time (AT) | Burst Time (BT) | Completion Time (CT) | Turnaround Time ($\text{TAT}=\text{CT}-\text{AT}$) | Waiting Time ($\text{WT}=\text{TAT}-\text{BT}$) | Response Time ($\text{RT}=\text{First CPU}-\text{AT}$) |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **P1** | 2 | 2 | 13 | $13 - 2 = 11$ | $11 - 2 = 9$ | $11 - 2 = 9$ |
| **P2** | 5 | 6 | 19 | $19 - 5 = 14$ | $14 - 6 = 8$ | $13 - 5 = 8$ |
| **P3** | 0 | 4 | 4 | $4 - 0 = 4$ | $4 - 4 = 0$ | $0 - 0 = 0$ |
| **P4** | 0 | 7 | 11 | $11 - 0 = 11$ | $11 - 7 = 4$ | $4 - 0 = 4$ |
| **P5** | 7 | 4 | 23 | $23 - 7 = 16$ | $16 - 4 = 12$ | $19 - 7 = 12$ |

#### Average Calculations:
- **Average Turnaround Time (Avg TAT):**
  $$\text{Avg TAT} = \frac{11 + 14 + 4 + 11 + 16}{5} = \frac{56}{5} = \mathbf{11.2\text{ ms}}$$
- **Average Waiting Time (Avg WT):**
  $$\text{Avg WT} = \frac{9 + 8 + 0 + 4 + 12}{5} = \frac{33}{5} = \mathbf{6.6\text{ ms}}$$

---

### Problem 2: FCFS with CPU Idle Period (Fully Solved)

#### Input Process Table:
| Process ID | Arrival Time (AT) | Burst Time (BT) |
| :---: | :---: | :---: |
| **P1** | 2 | 2 |
| **P2** | 0 | 1 |
| **P3** | 2 | 3 |
| **P4** | 3 | 5 |
| **P5** | 4 | 5 |

#### Step-by-Step Scheduling Walkthrough:
1. **At $t=0$:** Only P2 is available (AT=0, BT=1). P2 executes from $t=0$ to $t=1$. (CT = 1).
2. **From $t=1$ to $t=2$:** No process is present in the Ready Queue. **The CPU remains IDLE.**
3. **At $t=2$:** P1 (BT=2) and P3 (BT=3) arrive. P1 is scheduled first (FCFS).
   - P1 executes from $t=2$ to $t=4$. (CT = 4).
4. **At $t=4$:** Ready Queue contains P3 (arrived $t=2$), P4 (arrived $t=3$), and P5 (arrived $t=4$).
   - P3 executes from $t=4$ to $t=7$. (CT = 7).
5. **At $t=7$:** P4 executes from $t=7$ to $t=12$. (CT = 12).
6. **At $t=12$:** P5 executes from $t=12$ to $t=17$. (CT = 17).

#### Gantt Chart:
```
+----+------+----+------+----------+----------+
| P2 | IDLE | P1 |  P3  |    P4    |    P5    |
+----+------+----+------+----------+----------+
0    1      2    4      7          12         17
```

#### Final Calculated Solution Table:

| Process ID | Arrival Time (AT) | Burst Time (BT) | Completion Time (CT) | Turnaround Time ($\text{TAT}=\text{CT}-\text{AT}$) | Waiting Time ($\text{WT}=\text{TAT}-\text{BT}$) | Response Time ($\text{RT}=\text{First CPU}-\text{AT}$) |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **P1** | 2 | 2 | 4 | $4 - 2 = 2$ | $2 - 2 = 0$ | $2 - 2 = 0$ |
| **P2** | 0 | 1 | 1 | $1 - 0 = 1$ | $1 - 1 = 0$ | $0 - 0 = 0$ |
| **P3** | 2 | 3 | 7 | $7 - 2 = 5$ | $5 - 3 = 2$ | $4 - 2 = 2$ |
| **P4** | 3 | 5 | 12 | $12 - 3 = 9$ | $9 - 5 = 4$ | $7 - 3 = 4$ |
| **P5** | 4 | 5 | 17 | $17 - 4 = 13$ | $13 - 5 = 8$ | $12 - 4 = 8$ |

#### Average Calculations:
- **Average Turnaround Time (Avg TAT):**
  $$\text{Avg TAT} = \frac{2 + 1 + 5 + 9 + 13}{5} = \frac{30}{5} = \mathbf{6.0\text{ ms}}$$
- **Average Waiting Time (Avg WT):**
  $$\text{Avg WT} = \frac{0 + 0 + 2 + 4 + 8}{5} = \frac{14}{5} = \mathbf{2.8\text{ ms}}$$

---

## 5.4 Shortest Job First (SJF) - Non-Preemptive Scheduling

- **Principle:** The CPU is allocated to the process that has the **smallest CPU Burst Time**.
- **Tie-Breaker:** If two processes have the identical burst time, **FCFS** order is used.
- **Optimality:** SJF is **provably optimal** in giving the minimum average waiting time for a given set of stationary processes.
- **Disadvantage:** Causes **starvation** of longer jobs if short jobs continually enter the Ready Queue.

---

### Problem 3: SJF Non-Preemptive (All Arrival Times = 0) (Fully Solved)

#### Input Process Table:
| Process ID | Arrival Time (AT) | Burst Time (BT) |
| :---: | :---: | :---: |
| **P1** | 0 | 6 |
| **P2** | 0 | 10 |
| **P3** | 0 | 4 |
| **P4** | 0 | 6 |

#### Step-by-Step Scheduling Walkthrough:
1. **At $t=0$:** All four processes are present in the Ready Queue.
   - Burst times: P1=6, P2=10, P3=4, P4=6.
2. **First Process:** P3 has the shortest burst time (BT=4).
   - P3 runs from $t=0$ to $t=4$. (CT = 4).
3. **Second Process:** Remaining processes are P1 (BT=6), P4 (BT=6), and P2 (BT=10).
   - Tie between P1 and P4 (both BT=6). FCFS tie-breaker selects P1.
   - P1 runs from $t=4$ to $t=10$. (CT = 10).
4. **Third Process:** Next shortest is P4 (BT=6).
   - P4 runs from $t=10$ to $t=16$. (CT = 16).
5. **Fourth Process:** P2 (BT=10) runs from $t=16$ to $t=26$. (CT = 26).

#### Gantt Chart:
```
+-------+------------+------------+--------------------+
|  P3   |     P1     |     P4     |         P2         |
+-------+------------+------------+--------------------+
0       4            10           16                   26
```

#### Final Calculated Solution Table:

| Process ID | Arrival Time (AT) | Burst Time (BT) | Completion Time (CT) | Turnaround Time ($\text{TAT}=\text{CT}-\text{AT}$) | Waiting Time ($\text{WT}=\text{TAT}-\text{BT}$) | Response Time ($\text{RT}=\text{First CPU}-\text{AT}$) |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **P1** | 0 | 6 | 10 | $10 - 0 = 10$ | $10 - 6 = 4$ | $4 - 0 = 4$ |
| **P2** | 0 | 10 | 26 | $26 - 0 = 26$ | $26 - 10 = 16$ | $16 - 0 = 16$ |
| **P3** | 0 | 4 | 4 | $4 - 0 = 4$ | $4 - 4 = 0$ | $0 - 0 = 0$ |
| **P4** | 0 | 6 | 16 | $16 - 0 = 16$ | $16 - 6 = 10$ | $10 - 0 = 10$ |

#### Average Calculations:
- **Average Turnaround Time (Avg TAT):**
  $$\text{Avg TAT} = \frac{10 + 26 + 4 + 16}{4} = \frac{56}{4} = \mathbf{14.0\text{ ms}}$$
- **Average Waiting Time (Avg WT):**
  $$\text{Avg WT} = \frac{4 + 16 + 0 + 10}{4} = \frac{30}{4} = \mathbf{7.5\text{ ms}}$$

---

### Problem 4: SJF Non-Preemptive (Staggered Arrival Times) (Fully Solved)

#### Input Process Table:
| Process ID | Arrival Time (AT) | Burst Time (BT) |
| :---: | :---: | :---: |
| **P1** | 0 | 6 |
| **P2** | 4 | 10 |
| **P3** | 4 | 4 |
| **P4** | 8 | 3 |

#### Step-by-Step Scheduling Walkthrough:
1. **At $t=0$:** Only P1 has arrived. Because it is non-preemptive, P1 runs to full completion from $t=0$ to $t=6$. (CT = 6).
   - During this interval, P2 (BT=10) and P3 (BT=4) arrive at $t=4$.
2. **At $t=6$:** Ready Queue contains P2 (BT=10) and P3 (BT=4).
   - Shortest is P3 (BT=4). P3 runs to completion from $t=6$ to $t=10$. (CT = 10).
   - During this interval, P4 (BT=3) arrives at $t=8$.
3. **At $t=10$:** Ready Queue contains P4 (BT=3) and P2 (BT=10).
   - Shortest is P4 (BT=3). P4 runs from $t=10$ to $t=13$. (CT = 13).
4. **At $t=13$:** Only P2 (BT=10) remains. P2 runs from $t=13$ to $t=23$. (CT = 23).

#### Gantt Chart:
```
+------------+-------+-------+--------------------+
|     P1     |  P3   |  P4   |         P2         |
+------------+-------+-------+--------------------+
0            6       10      13                   23
```

#### Final Calculated Solution Table:

| Process ID | Arrival Time (AT) | Burst Time (BT) | Completion Time (CT) | Turnaround Time ($\text{TAT}=\text{CT}-\text{AT}$) | Waiting Time ($\text{WT}=\text{TAT}-\text{BT}$) | Response Time ($\text{RT}=\text{First CPU}-\text{AT}$) |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **P1** | 0 | 6 | 6 | $6 - 0 = 6$ | $6 - 6 = 0$ | $0 - 0 = 0$ |
| **P2** | 4 | 10 | 23 | $23 - 4 = 19$ | $19 - 10 = 9$ | $13 - 4 = 9$ |
| **P3** | 4 | 4 | 10 | $10 - 4 = 6$ | $6 - 4 = 2$ | $6 - 4 = 2$ |
| **P4** | 8 | 3 | 13 | $13 - 8 = 5$ | $5 - 3 = 2$ | $10 - 8 = 2$ |

#### Average Calculations:
- **Average Turnaround Time (Avg TAT):**
  $$\text{Avg TAT} = \frac{6 + 19 + 6 + 5}{4} = \frac{36}{4} = \mathbf{9.0\text{ ms}}$$
- **Average Waiting Time (Avg WT):**
  $$\text{Avg WT} = \frac{0 + 9 + 2 + 2}{4} = \frac{13}{4} = \mathbf{3.25\text{ ms}}$$

---

## 5.5 Shortest Remaining Time First (SRTF) - Preemptive SJF

- **Principle:** The preemptive variation of SJF. The scheduler is invoked whenever a new process arrives in the Ready Queue or a running process finishes.
- **Preemption Rule:** If a newly arrived process has a **strictly shorter remaining burst time** than the currently executing process, the running process is **preempted** and returned to the Ready Queue.

---

### Problem 5: SRTF Preemptive (Fully Solved Step-by-Step)

#### Input Process Table:
| Process ID | Arrival Time (AT) | Burst Time (BT) |
| :---: | :---: | :---: |
| **P1** | 0 | 8 |
| **P2** | 4 | 10 |
| **P3** | 4 | 3 |
| **P4** | 10 | 4 |

#### Step-by-Step Scheduling Walkthrough:
1. **At $t=0$:** Only P1 arrives (Remaining BT = 8). P1 starts execution.
2. **At $t=4$:** P1 has executed for 4 ms $\rightarrow$ P1 Remaining BT = $8 - 4 = 4\text{ ms}$.
   - New arrivals: P2 (BT=10) and P3 (BT=3).
   - Compare remaining times: P1 (rem=4), P2 (rem=10), P3 (rem=3).
   - **P3 has the shortest remaining time (3 ms < 4 ms). P3 PREEMPTS P1!**
3. **From $t=4$ to $t=7$:** P3 executes for 3 ms and finishes at $t=7$. (CT = 7).
4. **At $t=7$:** Ready Queue contains P1 (rem=4) and P2 (rem=10).
   - Shortest is P1 (rem=4). P1 resumes execution from $t=7$.
5. **At $t=10$:** P1 has executed for 3 ms $\rightarrow$ P1 Remaining BT = $4 - 3 = 1\text{ ms}$.
   - New arrival: P4 arrives (BT=4).
   - Compare remaining times: P1 (rem=1), P4 (rem=4), P2 (rem=10).
   - P1 has the shortest remaining time (1 ms), so P1 continues executing until $t=11$. (CT = 11).
6. **At $t=11$:** Ready Queue contains P4 (rem=4) and P2 (rem=10).
   - Shortest is P4 (rem=4). P4 executes from $t=11$ to $t=15$. (CT = 15).
7. **At $t=15$:** Only P2 (rem=10) remains. P2 executes from $t=15$ to $t=25$. (CT = 25).

#### Gantt Chart:
```
+--------------+-------+--------------+--------+--------------------+
|      P1      |  P3   |      P1      |   P4   |         P2         |
+--------------+-------+--------------+--------+--------------------+
0              4       7              11       15                   25
```

#### Final Calculated Solution Table:

| Process ID | Arrival Time (AT) | Burst Time (BT) | Completion Time (CT) | Turnaround Time ($\text{TAT}=\text{CT}-\text{AT}$) | Waiting Time ($\text{WT}=\text{TAT}-\text{BT}$) | Response Time ($\text{RT}=\text{First CPU}-\text{AT}$) |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **P1** | 0 | 8 | 11 | $11 - 0 = 11$ | $11 - 8 = 3$ | $0 - 0 = 0$ |
| **P2** | 4 | 10 | 25 | $25 - 4 = 21$ | $21 - 10 = 11$ | $15 - 4 = 11$ |
| **P3** | 4 | 3 | 7 | $7 - 4 = 3$ | $3 - 3 = 0$ | $4 - 4 = 0$ |
| **P4** | 10 | 4 | 15 | $15 - 10 = 5$ | $5 - 4 = 1$ | $11 - 10 = 1$ |

#### Average Calculations:
- **Average Turnaround Time (Avg TAT):**
  $$\text{Avg TAT} = \frac{11 + 21 + 3 + 5}{4} = \frac{40}{4} = \mathbf{10.0\text{ ms}}$$
- **Average Waiting Time (Avg WT):**
  $$\text{Avg WT} = \frac{3 + 11 + 0 + 1}{4} = \frac{15}{4} = \mathbf{3.75\text{ ms}}$$

---

## 5.6 Round Robin (RR) Scheduling

- **Principle:** Designed specifically for time-sharing systems. Each process in the Ready Queue is allocated a fixed time unit called **Time Quantum (TQ)** in a circular FIFO order.
- **Execution Rules:**
  - If a process finishes before its quantum expires, it voluntarily releases the CPU.
  - If a process is still running when the quantum expires, it is **preempted** and placed at the tail of the Ready Queue.
- **Impact of Time Quantum Size:**
  - If $TQ \rightarrow \infty$: Round Robin degenerates into **FCFS**.
  - If $TQ \rightarrow 0$: Excessive context switching causes massive system overhead (**Processor Sharing**).

---

### Problem 6: Round Robin with TQ = 2ms (Equal Arrival Times = 0) (Fully Solved)

#### Input Process Table:
| Process ID | Arrival Time (AT) | Burst Time (BT) |
| :---: | :---: | :---: |
| **P1** | 0 | 8 |
| **P2** | 0 | 10 |
| **P3** | 0 | 6 |
| **P4** | 0 | 4 |

#### Step-by-Step Scheduling Cycle:
- **Initial Ready Queue ($t=0$):** `[P1, P2, P3, P4]`
- **Cycle 1:**
  - $t=0..2$: P1 runs (rem=6) $\rightarrow$ Queue: `[P2, P3, P4, P1]`
  - $t=2..4$: P2 runs (rem=8) $\rightarrow$ Queue: `[P3, P4, P1, P2]`
  - $t=4..6$: P3 runs (rem=4) $\rightarrow$ Queue: `[P4, P1, P2, P3]`
  - $t=6..8$: P4 runs (rem=2) $\rightarrow$ Queue: `[P1, P2, P3, P4]`
- **Cycle 2:**
  - $t=8..10$: P1 runs (rem=4) $\rightarrow$ Queue: `[P2, P3, P4, P1]`
  - $t=10..12$: P2 runs (rem=6) $\rightarrow$ Queue: `[P3, P4, P1, P2]`
  - $t=12..14$: P3 runs (rem=2) $\rightarrow$ Queue: `[P4, P1, P2, P3]`
  - $t=14..16$: P4 runs (rem=0) $\rightarrow$ **P4 FINISHES at $t=16$ (CT=16)** $\rightarrow$ Queue: `[P1, P2, P3]`
- **Cycle 3:**
  - $t=16..18$: P1 runs (rem=2) $\rightarrow$ Queue: `[P2, P3, P1]`
  - $t=18..20$: P2 runs (rem=4) $\rightarrow$ Queue: `[P3, P1, P2]`
  - $t=20..22$: P3 runs (rem=0) $\rightarrow$ **P3 FINISHES at $t=22$ (CT=22)** $\rightarrow$ Queue: `[P1, P2]`
- **Cycle 4:**
  - $t=22..24$: P1 runs (rem=0) $\rightarrow$ **P1 FINISHES at $t=24$ (CT=24)** $\rightarrow$ Queue: `[P2]`
  - $t=24..26$: P2 runs (rem=2) $\rightarrow$ Queue: `[P2]`
  - $t=26..28$: P2 runs (rem=0) $\rightarrow$ **P2 FINISHES at $t=28$ (CT=28)**

#### Gantt Chart:
```
+----+----+----+----+----+----+----+----+----+----+----+----+----+----+
| P1 | P2 | P3 | P4 | P1 | P2 | P3 | P4 | P1 | P2 | P3 | P1 | P2 | P2 |
+----+----+----+----+----+----+----+----+----+----+----+----+----+----+
0    2    4    6    8    10   12   14   16   18   20   22   24   26   28
```

#### Final Calculated Solution Table:

| Process ID | Arrival Time (AT) | Burst Time (BT) | Completion Time (CT) | Turnaround Time ($\text{TAT}=\text{CT}-\text{AT}$) | Waiting Time ($\text{WT}=\text{TAT}-\text{BT}$) | Response Time ($\text{RT}=\text{First CPU}-\text{AT}$) |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **P1** | 0 | 8 | 24 | $24 - 0 = 24$ | $24 - 8 = 16$ | $0 - 0 = 0$ |
| **P2** | 0 | 10 | 28 | $28 - 0 = 28$ | $28 - 10 = 18$ | $2 - 0 = 2$ |
| **P3** | 0 | 6 | 22 | $22 - 0 = 22$ | $22 - 6 = 16$ | $4 - 0 = 4$ |
| **P4** | 0 | 4 | 16 | $16 - 0 = 16$ | $16 - 4 = 12$ | $6 - 0 = 6$ |

#### Average Calculations:
- **Average Turnaround Time (Avg TAT):**
  $$\text{Avg TAT} = \frac{24 + 28 + 22 + 16}{4} = \frac{90}{4} = \mathbf{22.5\text{ ms}}$$
- **Average Waiting Time (Avg WT):**
  $$\text{Avg WT} = \frac{16 + 18 + 16 + 12}{4} = \frac{62}{4} = \mathbf{15.5\text{ ms}}$$

---

### Problem 7: Round Robin with TQ = 3ms (Staggered Arrival Times) (Fully Solved)

#### Input Process Table:
| Process ID | Arrival Time (AT) | Burst Time (BT) |
| :---: | :---: | :---: |
| **A (P1)** | 0 | 4 |
| **B (P2)** | 1 | 5 |
| **C (P3)** | 2 | 2 |
| **D (P4)** | 3 | 1 |
| **E (P5)** | 4 | 6 |
| **F (P6)** | 6 | 3 |

#### Precise Ready Queue Trace (Crucial for Exam):
*Standard Rule:* At the end of a time slice, newly arrived processes are enqueued into the Ready Queue **before** the currently preempted process is re-added.

1. **At $t=0$:** Process A arrives. Starts executing. `Queue: [A]`
2. **From $t=0$ to $t=3$:** A runs for 3 ms (rem=1).
   - During $t=0..3$: B (at $t=1$), C (at $t=2$), D (at $t=3$) arrive.
   - Enqueue new arrivals `[B, C, D]`, then re-enqueue preempted `A`.  
   - `Queue at t=3: [B, C, D, A]`
3. **From $t=3$ to $t=6$:** B runs for 3 ms (rem=2).
   - During $t=3..6$: E (at $t=4$), F (at $t=6$) arrive.
   - Enqueue new arrivals `[E, F]`, then re-enqueue preempted `B`.  
   - `Queue at t=6: [C, D, A, E, F, B]`
4. **From $t=6$ to $t=8$:** C needs only 2 ms (rem=0). **C FINISHES at $t=8$ (CT=8)**.  
   - `Queue at t=8: [D, A, E, F, B]`
5. **From $t=8$ to $t=9$:** D needs only 1 ms (rem=0). **D FINISHES at $t=9$ (CT=9)**.  
   - `Queue at t=9: [A, E, F, B]`
6. **From $t=9$ to $t=10$:** A needs only 1 ms (rem=0). **A FINISHES at $t=10$ (CT=10)**.  
   - `Queue at t=10: [E, F, B]`
7. **From $t=10$ to $t=13$:** E runs for 3 ms (rem=3). Re-enqueue E.  
   - `Queue at t=13: [F, B, E]`
8. **From $t=13$ to $t=16$:** F needs 3 ms (rem=0). **F FINISHES at $t=16$ (CT=16)**.  
   - `Queue at t=16: [B, E]`
9. **From $t=16$ to $t=18$:** B needs 2 ms (rem=0). **B FINISHES at $t=18$ (CT=18)**.  
   - `Queue at t=18: [E]`
10. **From $t=18$ to $t=21$:** E runs for remaining 3 ms (rem=0). **E FINISHES at $t=21$ (CT=21)**.

#### Gantt Chart:
```
+-------+-------+----+----+----+-------+-------+----+-------+
|   A   |   B   | C  | D  | A  |   E   |   F   | B  |   E   |
+-------+-------+----+----+----+-------+-------+----+-------+
0       3       6    8    9    10      13      16   18      21
```

#### Final Calculated Solution Table:

| Process ID | Arrival Time (AT) | Burst Time (BT) | Completion Time (CT) | Turnaround Time ($\text{TAT}=\text{CT}-\text{AT}$) | Waiting Time ($\text{WT}=\text{TAT}-\text{BT}$) | Response Time ($\text{RT}=\text{First CPU}-\text{AT}$) |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **A (P1)** | 0 | 4 | 10 | $10 - 0 = 10$ | $10 - 4 = 6$ | $0 - 0 = 0$ |
| **B (P2)** | 1 | 5 | 18 | $18 - 1 = 17$ | $17 - 5 = 12$ | $3 - 1 = 2$ |
| **C (P3)** | 2 | 2 | 8 | $8 - 2 = 6$ | $6 - 2 = 4$ | $6 - 2 = 4$ |
| **D (P4)** | 3 | 1 | 9 | $9 - 3 = 6$ | $6 - 1 = 5$ | $8 - 3 = 5$ |
| **E (P5)** | 4 | 6 | 21 | $21 - 4 = 17$ | $17 - 6 = 11$ | $10 - 4 = 6$ |
| **F (P6)** | 6 | 3 | 16 | $16 - 6 = 10$ | $10 - 3 = 7$ | $13 - 6 = 7$ |

#### Average Calculations:
- **Average Turnaround Time (Avg TAT):**
  $$\text{Avg TAT} = \frac{10 + 17 + 6 + 6 + 17 + 10}{6} = \frac{66}{6} = \mathbf{11.00\text{ ms}}$$
- **Average Waiting Time (Avg WT):**
  $$\text{Avg WT} = \frac{6 + 12 + 4 + 5 + 11 + 7}{6} = \frac{45}{6} = \mathbf{7.50\text{ ms}}$$

---

## 5.7 Priority Scheduling (Preemptive & Non-Preemptive)

- **Principle:** Each process is assigned an integer priority value. The CPU is allocated to the process with the highest priority.
- **Priority Determination:** Based on memory requirements, time limits, ratio of average I/O to CPU burst time, or user security class.
- **Standard Convention:** In academic OS curricula, **Lower integer number = Higher priority** (i.e., Priority 1 is higher than Priority 2 or 3).
- **The Starvation (Indefinite Blocking) Problem:** A low-priority process may sit in the Ready Queue forever if higher-priority processes keep arriving.
- **The Solution - Aging:** Gradually increasing the priority of processes that wait in the system for long periods.

---

### Problem 8: Non-Preemptive Priority Scheduling (Fully Solved)

#### Input Process Table:
*(Convention: Lower numerical value = Higher Priority $\rightarrow$ Priority 1 is Highest)*

| Process ID | Arrival Time (AT) | Burst Time (BT) | Priority |
| :---: | :---: | :---: | :---: |
| **A** | 0 | 4 | 2 |
| **B** | 1 | 2 | 1 (High) |
| **C** | 2 | 6 | 3 (Low) |
| **D** | 3 | 3 | 1 (High) |

#### Step-by-Step Scheduling Walkthrough:
1. **At $t=0$:** Only A has arrived. A runs non-preemptively from $t=0$ to $t=4$. (CT = 4).
   - During $t=0..4$, B (Pri=1), C (Pri=3), and D (Pri=1) arrive.
2. **At $t=4$:** Ready Queue contains B (Pri=1), D (Pri=1), and C (Pri=3).
   - B and D both have highest Priority 1. FCFS tie-breaker: B arrived at $t=1$, D at $t=3$.
   - B executes from $t=4$ to $t=6$. (CT = 6).
3. **At $t=6$:** Ready Queue contains D (Pri=1) and C (Pri=3).
   - D has higher priority. D executes from $t=6$ to $t=9$. (CT = 9).
4. **At $t=9$:** C (Pri=3) executes from $t=9$ to $t=15$. (CT = 15).

#### Gantt Chart:
```
+------------+-------+-------+--------------------+
|     A      |   B   |   D   |         C          |
+------------+-------+-------+--------------------+
0            4       6       9                    15
```

#### Final Calculated Solution Table:

| Process ID | Arrival Time (AT) | Burst Time (BT) | Priority | Completion Time (CT) | Turnaround Time ($\text{TAT}=\text{CT}-\text{AT}$) | Waiting Time ($\text{WT}=\text{TAT}-\text{BT}$) | Response Time ($\text{RT}=\text{First CPU}-\text{AT}$) |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **A** | 0 | 4 | 2 | 4 | $4 - 0 = 4$ | $4 - 4 = 0$ | $0 - 0 = 0$ |
| **B** | 1 | 2 | 1 | 6 | $6 - 1 = 5$ | $5 - 2 = 3$ | $4 - 1 = 3$ |
| **C** | 2 | 6 | 3 | 15 | $15 - 2 = 13$ | $13 - 6 = 7$ | $9 - 2 = 7$ |
| **D** | 3 | 3 | 1 | 9 | $9 - 3 = 6$ | $6 - 3 = 3$ | $6 - 3 = 3$ |

#### Average Calculations:
- **Average Turnaround Time (Avg TAT):**
  $$\text{Avg TAT} = \frac{4 + 5 + 13 + 6}{4} = \frac{28}{4} = \mathbf{7.0\text{ ms}}$$
- **Average Waiting Time (Avg WT):**
  $$\text{Avg WT} = \frac{0 + 3 + 7 + 3}{4} = \frac{13}{4} = \mathbf{3.25\text{ ms}}$$

---

### Problem 9: Preemptive Priority Scheduling (Fully Solved Step-by-Step)

#### Input Process Table:
*(Convention: Lower numerical value = Higher Priority $\rightarrow$ Priority 1 is Highest)*

| Process ID | Arrival Time (AT) | Burst Time (BT) | Priority |
| :---: | :---: | :---: | :---: |
| **A** | 0 | 4 | 2 |
| **B** | 1 | 2 | 1 (High) |
| **C** | 2 | 6 | 3 (Low) |
| **D** | 3 | 3 | 1 (High) |

#### Step-by-Step Scheduling Walkthrough:
1. **At $t=0$:** Only A arrives (Pri=2, rem=4). A starts executing.
2. **At $t=1$:** A has executed for 1 ms (rem=3).
   - B arrives with **Priority 1**.
   - Compare: Priority of B (1) is higher than Priority of A (2).
   - **B PREEMPTS A!**
3. **From $t=1$ to $t=3$:** B executes.
   - At $t=2$, C arrives (Pri=3 < B's 1 $\rightarrow$ B continues).
   - At $t=3$, D arrives (Pri=1).
   - At $t=3$, B finishes its 2 ms burst. **B TERMINATES at $t=3$ (CT=3)**.
4. **At $t=3$:** Ready Queue contains D (Pri=1, rem=3), A (Pri=2, rem=3), and C (Pri=3, rem=6).
   - D has the highest priority (Pri=1).
   - D executes from $t=3$ to $t=6$. (No arriving process has higher priority). **D TERMINATES at $t=6$ (CT=6)**.
5. **At $t=6$:** Ready Queue contains A (Pri=2, rem=3) and C (Pri=3, rem=6).
   - A has higher priority (Pri=2). A resumes and executes from $t=6$ to $t=9$. **A TERMINATES at $t=9$ (CT=9)**.
6. **At $t=9$:** Only C (Pri=3, rem=6) remains. C executes from $t=9$ to $t=15$. **C TERMINATES at $t=15$ (CT=15)**.

#### Gantt Chart:
```
+----+-------+-------+-------+--------------------+
| A  |   B   |   D   |   A   |         C          |
+----+-------+-------+-------+--------------------+
0    1       3       6       9                    15
```

#### Final Calculated Solution Table:

| Process ID | Arrival Time (AT) | Burst Time (BT) | Priority | Completion Time (CT) | Turnaround Time ($\text{TAT}=\text{CT}-\text{AT}$) | Waiting Time ($\text{WT}=\text{TAT}-\text{BT}$) | Response Time ($\text{RT}=\text{First CPU}-\text{AT}$) |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **A** | 0 | 4 | 2 | 9 | $9 - 0 = 9$ | $9 - 4 = 5$ | $0 - 0 = 0$ |
| **B** | 1 | 2 | 1 | 3 | $3 - 1 = 2$ | $2 - 2 = 0$ | $1 - 1 = 0$ |
| **C** | 2 | 6 | 3 | 15 | $15 - 2 = 13$ | $13 - 6 = 7$ | $9 - 2 = 7$ |
| **D** | 3 | 3 | 1 | 6 | $6 - 3 = 3$ | $3 - 3 = 0$ | $3 - 3 = 0$ |

#### Average Calculations:
- **Average Turnaround Time (Avg TAT):**
  $$\text{Avg TAT} = \frac{9 + 2 + 13 + 3}{4} = \frac{27}{4} = \mathbf{6.75\text{ ms}}$$
- **Average Waiting Time (Avg WT):**
  $$\text{Avg WT} = \frac{5 + 0 + 7 + 0}{4} = \frac{12}{4} = \mathbf{3.0\text{ ms}}$$

---

## 5.8 Guaranteed Scheduling

- **Core Concept:** A deterministic scheduling philosophy where the OS makes an explicit performance guarantee that each of $n$ active processes will receive an equal share ($\frac{1}{n}$) of total CPU processing capacity.
- **Tracking Mechanism:**
  1. The system tracks the exact amount of time that has elapsed since each process was created.
  2. It computes the **Entitled CPU Time** for each process:
     $$\text{Entitled CPU Time} = \frac{\text{Time Since Creation}}{n}$$
  3. It continuously measures the **Actual CPU Time Consumed** by each process.
  4. It computes the ratio:
     $$\text{Ratio} = \frac{\text{Actual CPU Time Consumed}}{\text{Entitled CPU Time}}$$
- **Scheduling Rule:** The scheduler always allocates the CPU to the process with the **lowest ratio** until its ratio rises to match the others, ensuring absolute mathematical fairness.

---

## 5.9 Lottery Scheduling

- **Core Concept:** A randomized, probabilistic scheduling algorithm where processes compete for system resources (CPU time) by holding **lottery tickets**.
- **Working Mechanism:**
  - The OS issues lottery tickets numbered $1$ to $N$ to active processes.
  - Whenever a scheduling decision is required, the OS randomly generates a winning ticket number.
  - Whichever process holds that winning ticket is granted the CPU for the next time slice.
- **Priority Management:** Important processes receive more tickets, proportionally increasing their statistical probability of winning CPU time (e.g., a process with 70 tickets out of 100 will receive approximately 70% of CPU time).
- **Ticket Transfers & Cooperation:**
  - Cooperating processes can dynamically transfer tickets.
  - *Example:* When a Client process issues a remote request to a Server process and blocks waiting for the answer, the Client can transfer all its tickets to the Server. This accelerates the Server's execution so it finishes the request quickly. When complete, the Server returns the tickets back to the Client.

---

## 5.10 Master Comparison Table: All 7 Scheduling Algorithms

| Algorithm Name | Preemptive? | Primary Scheduling Criteria | Starvation Risk? | Key Advantages | Key Disadvantages |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **1. FCFS** | Non-Preemptive | Arrival Time (FIFO) | No | Simple to implement; low overhead | High average waiting time; **Convoy Effect** |
| **2. SJF** | Non-Preemptive | Shortest Burst Time (BT) | **Yes** (Long jobs starve) | Provably minimum average waiting time | Hard to predict future CPU burst times |
| **3. SRTF** | Preemptive | Shortest Remaining Burst Time | **Yes** (Long jobs starve) | Optimal response time for short jobs | High context switching overhead |
| **4. Round Robin** | Preemptive | FIFO order with fixed Time Quantum (TQ) | **No** (Starvation free) | Fair; excellent response time in time-sharing | High context switch overhead if TQ is too small |
| **5. Priority** | Both (Preemptive / Non-Preemptive) | Assigned Priority Value | **Yes** (Low priority starves) | Matches real-world application importance | Requires **Aging** to prevent indefinite starvation |
| **6. Guaranteed** | Preemptive | Ratio of Actual to Entitled CPU Time | **No** | Mathematically fair CPU distribution | High computational overhead to track ratios |
| **7. Lottery** | Preemptive | Randomized ticket selection | **No** (Every ticket can win) | Simple; supports dynamic ticket transfers | Approximate; not strictly deterministic |

---

# Quick Formula & Concept Cheatsheet for Exam Day

### 1. Fundamental Scheduling Formulas
- **Turnaround Time:**  
  $$\text{TAT} = \text{Completion Time (CT)} - \text{Arrival Time (AT)}$$  
  $$\text{TAT} = \text{Burst Time (BT)} + \text{Waiting Time (WT)}$$
- **Waiting Time:**  
  $$\text{WT} = \text{Turnaround Time (TAT)} - \text{Burst Time (BT)}$$
- **Response Time:**  
  $$\text{RT} = \text{Timestamp of First CPU Allocation} - \text{Arrival Time (AT)}$$
- **Averages:**  
  $$\text{Average TAT} = \frac{\sum \text{TAT}}{N}, \quad \text{Average WT} = \frac{\sum \text{WT}}{N}$$

### 2. Core Operating System Concepts at a Glance
- **Kernel vs. Shell:** Kernel is the core managing hardware in Kernel Mode; Shell is the user interface (CLI/GUI) interpreting commands.
- **Multiprocessing vs. Multithreading:** Multiprocessing uses multiple physical CPUs with separate memory spaces; Multithreading runs multiple threads within a single process sharing memory.
- **SMP vs. AMP:** SMP has peer processors with shared memory; AMP has a Master CPU controlling Slave CPUs.
- **Monolithic vs. Microkernel:** Monolithic runs all services in Kernel Mode (Fast, but unstable); Microkernel runs services in User Mode (Reliable, but slower IPC).
- **Process Memory Layout:** Text (Code, Read-Only) $\rightarrow$ Data (Global/Static) $\rightarrow$ Heap (Dynamic memory, grows up) $\rightarrow$ Stack (Local vars/function calls, grows down).
- **Schedulers:**
  - *Long-Term Scheduler:* Controls Degree of Multiprogramming (Disk $\rightarrow$ RAM).
  - *Short-Term Scheduler:* Allocates CPU (Ready Queue $\rightarrow$ CPU).
  - *Medium-Term Scheduler:* Manages swapping (RAM $\leftrightarrow$ Swap space on disk).
- **Convoy Effect:** Occurs in FCFS when short I/O-bound processes wait behind a long CPU-bound process.
- **Aging:** Technique of gradually increasing the priority of a process waiting in the Ready Queue to prevent **starvation**.
