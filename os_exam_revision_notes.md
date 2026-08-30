# Operating System Exam Revision Notes: Fundamentals & Structures

## Module 1: Introduction to OS, Functions & System Calls

### OS Fundamentals & Role
* **Definition**: An Operating System (OS) is an intermediary interface between the computer user and the hardware [1].
* **Primary Purpose**: Provides an environment in which a user can execute programs in a convenient and efficient manner [1].
* **Resource Manager Role**: Hardware only understands machine code (0s and 1s) [1]. The OS acts as a manager responsible for process execution, resource allocation, CPU management, memory allocation, and file management [1].

### Consequences of Operating Without an OS
* Every application would need to include its own user interface (UI) and low-level code to handle underlying hardware like disk storage and network interfaces [2].
* A modern computer system cannot function without an operating system [2].

### Computer System Hierarchy
* **Users**: People interacting with the system [1].
* **Application Software**: User-level programs such as word processors, spreadsheets, web browsers, and games [1, 7].
* **System Software / Utilities**: Low-level programs including shells, device drivers, compilers, file managers, text editors, and antivirus software [1, 6, 7].
* **Operating System**: Special control program providing the hardware-software interface [1].
* **Hardware Layer**: Physical components including CPU, Memory, I/O devices, and Machine Language execution levels [1].

### Core Concepts: Kernel vs. Shell
* **Kernel**:
  * The central architectural component loaded first after the bootloader during startup [5].
  * Remains continuously resident in primary memory until system shutdown [5].
  * Manages CPU, memory, I/O devices, and hardware-application interfaces [5].
* **Shell**:
  * The outer interface of the operating system (Command Line Interface - CLI or Graphical User Interface - GUI) [6].
  * Prompts user for input, interprets user/application commands for the kernel, and formats system output [6].
* **System Software vs. Application Software**:
  * *System Software*: Interacts directly with the kernel to perform memory management, security, and low-level administration [6, 7].
  * *Application Software*: High-level programs used by end users to accomplish specific tasks [7].

### System Calls & Services
* **Definition**: A programmatic interface through which execution programs request low-level services from the operating system kernel [7, 8].
* **Execution Mode**: System calls serve as the sole entry points into kernel operations and are executed strictly in kernel mode [8].
* **Provided Service Categories**: Process creation/management, main memory management, file access and directory manipulation, I/O device handling, network communications, and system protection [8, 9].

### Comparative Table: Windows vs. UNIX System Call APIs
| Service Category | Windows API Call | UNIX System Call | Key Functionality |
| :--- | :--- | :--- | :--- |
| **Process Control** | `CreateProcess()`, `ExitProcess()`, `WaitForSingleObject()` | `fork()`, `exit()`, `wait()` | Spawning, terminating, and synchronizing process execution [9, 10]. |
| **File Manipulation** | `CreateFile()`, `ReadFile()`, `WriteFile()` | `open()`, `read()`, `write()`, `close()` | Managing file descriptors, I/O operations, and storage access [9, 10]. |
| **Device Management** | `SetConsoleMode()`, `ReadConsole()`, `WriteConsole()` | `ioctl()`, `read()`, `write()` | Requesting access and controlling physical/virtual hardware devices [9, 10]. |
| **Information Maintenance** | `GetCurrentProcessID()`, `SetTimer()`, `Sleep()` | `getpid()`, `alarm()`, `sleep()` | Retrieving system state, process IDs, and managing timing functions [9, 10]. |
| **Communication** | `CreatePipe()`, `CreateFileMapping()`, `MapViewOfFile()` | `pipe()`, `shmget()`, `mmap()` | Establishing Inter-Process Communication (IPC) via pipes and shared memory [9, 10]. |
| **Protection** | `SetFileSecurity()`, `InitializeSecurityDescriptor()` | `chmod()`, `umask()`, `chown()` | Controlling access permissions and security descriptors [9, 10]. |

### 12 Key OS Functions
1. **User Interface (UI)**: Provides graphical or text-based interfaces for system configuration and control [12].
2. **Application Management**: Controls application launching, execution monitoring, and lifecycle termination [12].
3. **Device Management**: Tracks connected hardware, handles allocation/deallocation, and grants access privileges [12].
4. **Memory Management**: Monitors primary RAM space and manages allocation/deallocation for running processes [12, 13].
5. **Processor/Process Management**: Determines CPU execution order and time sharing in multiprogramming setups (Process Scheduling) [13].
6. **File Management**: Organizes files into structured directory hierarchies and manages access permissions [13].
7. **Multitasking**: Allocates CPU time slices across multiple active programs [13].
8. **I/O Management**: Directs data streams to and from attached input/output devices [13, 14].
9. **Error Reporting**: Dispatches operational error codes and diagnostic alerts to applications and users [14].
10. **Batch Job Management**: Offloads non-interactive background jobs (e.g., spooling print jobs) [14].
11. **Parallel Processing**: Distributes processing workloads across multi-CPU hardware setups [14].
12. **Security Management**: Protects resources and enforces user authorization policies [6, 7].

---

## Module 2: Types of Operating Systems

### Detailed Breakdown & Mechanics of 8 OS Types
* **1. Batch Operating System**:
  * Popularized in the 1970s; users do not interact directly with computers [15].
  * Offline jobs are submitted via punch cards to an operator who groups jobs with similar requirements into batches [15, 16].
  * Processes batches sequentially to maximize processing speed [15].
* **2. Multiprogramming Operating System**:
  * Keeps the CPU busy at all times by storing multiple programs in main memory [16, 17].
  * When a running process pauses for I/O operations, the CPU switches to another memory-resident program [16].
* **3. Multiprocessing Operating System**:
  * Leverages two or more physical CPUs to execute multiple processes simultaneously in parallel, enhancing throughput and fault tolerance [2, 17, 18, 19].
  * *Symmetric Multiprocessing (SMP)*: All CPUs run identical OS copies, sharing RAM and I/O equally while dynamically balancing workloads [3, 20].
  * *Asymmetric Multiprocessing (AMP)*: Uses a master CPU to control system scheduling while slave CPUs execute specific assigned tasks [3, 4, 20, 21].
* **4. Multitasking Operating System**:
  * Extends multiprogramming to allow a single user to run multiple applications concurrently (e.g., browser, music player, editor) [21, 22].
  * Switches rapidly between tasks via CPU time sharing to create the illusion of parallel execution [21, 22, 23].
* **5. Network Operating System (NOS)**:
  * Manages and coordinates shared resources (files, printers, apps) across tightly coupled nodes on a network (e.g., Windows Server, Linux, NetWare) [23, 24, 25].
  * *Peer-to-Peer*: Allows direct resource sharing across smaller LAN setups [24].
  * *Client/Server*: Uses centralized servers to manage user access and network services [24, 25].
* **6. Distributed Operating System**:
  * Modular OS components loaded across autonomous, loosely coupled physical machines connected via shared networks [25, 26].
  * Each independent node maintains its own CPU and RAM while communicating seamlessly across protocols [26].
* **7. Time-Sharing Operating System (TSOS)**:
  * Allocates fixed time slices (quanta) to multiple interactive user programs in a cyclic queue [26, 27].
  * Employs rapid context switching to deliver immediate user response times [27, 28].
* **8. Real-Time Operating System (RTOS)**:
  * Engineered for tasks with strict execution deadlines; failure to complete within specified time limits causes system failure [28, 29].
  * Utilized in safety-critical domains such as automotive Anti-lock Braking Systems (ABS), medical equipment, and military missile control [29].

### Master Comparative Table of OS Types
| OS Type | Execution Mechanism | Coupling & Structure | Primary Performance Metric | Key Application / Example |
| :--- | :--- | :--- | :--- | :--- |
| **Batch OS** | Offline batch grouping of similar punch-card jobs [15, 16] | Single processor, offline submission [15, 16] | Batch throughput [15] | Historical mainframe processing [15] |
| **Multiprogramming OS** | CPU switches tasks during I/O waiting periods [16] | Single CPU with RAM-resident tasks [16, 17] | CPU utilization [16] | Mainframe batch/interactive systems [16, 17] |
| **Multiprocessing OS** | Concurrent parallel process execution on multiple CPUs [17, 18] | Multi-CPU (SMP shared memory / AMP master-slave) [3, 4, 20] | Throughput & fault tolerance [18, 19] | Supercomputing & enterprise servers [2, 18] |
| **Multitasking OS** | Rapid CPU time sharing among single-user tasks [21, 22] | Single or multi-core desktop systems [22] | User interactive response time [22, 23] | Desktop OS (Windows, macOS, Linux) [10, 11, 22] |
| **Network OS (NOS)** | Centralized or peer resource coordination across network [23, 24] | Tightly coupled network nodes [23, 24] | Network connectivity & file sharing [23, 24] | Windows Server, Novell NetWare [23] |
| **Distributed OS** | OS components divided across autonomous machines [25, 26] | Loosely coupled independent systems [26] | Scalability & resource sharing [25, 26] | Distributed cluster computing [25, 26] |
| **Time-Sharing OS** | Cyclic time slices / quanta with context switching [26, 27] | Multi-user central processing terminals [26, 27] | Minimal user response time [26, 27] | Multi-user mainframes & servers [27] |
| **Real-Time OS (RTOS)** | Deterministic scheduling with rigid execution deadlines [28, 29] | Embedded processors / microcontrollers [28, 29] | Millisecond deadline accuracy [28, 29] | ABS, medical gear, military guidance [29] |

---

## Module 3: Operating System Structures & Architectures

### Architectural Mechanics, Advantages & Disadvantages of 8 OS Structures
1. **Simple Structure**:
   * *Mechanics*: Small, simple structure without separated functional levels; user applications can directly invoke BIOS/hardware routines (e.g., MS-DOS) [30, 31, 32].
   * *Advantages*: Provides high application speed due to minimal interface overhead [32].
   * *Disadvantages*: Lacks data hiding and module protection; a single application error can crash the entire OS [32].
2. **Monolithic Structure**:
   * *Mechanics*: Combines all OS services (process, memory, file management, drivers) into a single kernel-mode binary block [33, 34].
   * *Advantages*: High-speed performance due to direct kernel function calls [33].
   * *Disadvantages*: Maintenance is complex; a bug in any module can crash the entire system [34].
3. **Micro-Kernel Structure**:
   * *Mechanics*: Strips non-essential services from kernel space, running them as user-space programs and leaving only core IPC/memory routines in the kernel (e.g., macOS Mach core) [34, 35, 36].
   * *Advantages*: Highly portable, secure, and reliable; user-space service crashes do not crash the kernel [35].
   * *Disadvantages*: Inter-module IPC communication increases overhead and degrades performance [35].
4. **Hybrid-Kernel Structure**:
   * *Mechanics*: Combines the monolithic execution speed with the modular isolation of microkernels [36, 37].
   * *Advantages*: Delivers fast processing while isolating critical services [37].
   * *Disadvantages*: Increased overall architectural complexity [37, 38].
5. **Exo-Kernel Structure**:
   * *Mechanics*: Developed at MIT; minimizes kernel abstractions, granting user applications direct control over raw hardware allocations [38, 39].
   * *Advantages*: Enables custom application-level optimizations and hardware performance [39].
   * *Disadvantages*: Complex design; poorly written application code can compromise system security [39, 40].
6. **Layered Structure**:
   * *Mechanics*: Organizes the OS into $N$ layers; Layer 0 represents physical hardware and Layer $N$ represents the user interface [40, 41].
   * *Advantages*: Modular design simplifies debugging, verification, and component updates [41].
   * *Disadvantages*: Layer-traversal overhead reduces processing speed; strict lower-layer dependency requires careful design [41].
7. **Modular Structure**:
   * *Mechanics*: Uses a core monolithic kernel that dynamically loads object modules (file systems, drivers) at boot or runtime (e.g., Sun Solaris) [42, 43].
   * *Advantages*: Highly flexible and customizable without altering the primary kernel code [42, 43].
   * *Disadvantages*: Slightly lower performance than raw simple structures due to module API communication overhead [43].
8. **Virtual Machine Structure**:
   * *Mechanics*: Uses a hypervisor to emulate physical hardware, running completely isolated guest OS environments on host hardware [43, 44, 45].
   * *Advantages*: Complete isolation and sandbox security; ideal for hardware consolidation and testing [44, 45].
   * *Disadvantages*: Emulation overhead leads to lower execution speed compared to native hardware [44, 45].

### Master Comparative Architecture Table
| Architecture | Kernel Space Bounds | Performance / Speed | Security & Isolation | System Example |
| :--- | :--- | :--- | :--- | :--- |
| **Simple** | Minimal / Unsegmented [30, 31] | Very High (Direct BIOS) [32] | Very Low (App crash crashes OS) [32] | MS-DOS [31] |
| **Monolithic** | Large (All services included) [33] | High (Direct function calls) [33] | Low (Module bug affects entire OS) [34] | Traditional UNIX / Linux [11, 33] |
| **Micro-Kernel** | Minimal Core Only [34, 35] | Moderate (IPC communication penalty) [35] | High (Isolated user-space services) [35] | macOS / Mach core [10, 35] |
| **Hybrid-Kernel** | Balanced Kernel/User Split [36] | High [37] | High [37] | Windows NT, macOS [10, 36] |
| **Exo-Kernel** | Minimal Allocation Core [38] | Maximum (Direct hardware access) [38, 39] | App-Dependent (High risk if app buggy) [39, 40] | MIT Exokernel [38] |
| **Layered** | $N$-Tier Hierarchical Split [40] | Moderate / Low (Layer traversal) [41] | High (Strict layer encapsulation) [40, 41] | THE Operating System [40] |
| **Modular** | Core + Dynamic Modules [42] | High (Dynamic linking) [43] | Moderate/High (Module isolation) [42, 43] | Sun Solaris [42] |
| **Virtual Machine** | Host Kernel + Hypervisor [44] | Moderate (Emulation overhead) [44, 45] | Highest (Sandboxed VM isolation) [44, 45] | VMware, KVM, VirtualBox [44] |

---

## Module 4: Process Management, Memory Layout & Life Cycle

### Program vs. Process
* **Program**: A passive entity consisting of compiled static instructions stored in a text file or storage device [45, 46].
* **Process**: An active dynamic entity representing a program in execution, progressing sequentially in main memory [45, 46].

### Memory Segment Layout of a Process
* **Stack**: Holds temporary data including function/method parameters, return addresses, and local variables [47, 48].
* **Heap**: Dynamically allocated memory requested by the process during runtime [47, 48].
* **Data**: Stores static and global variables [48].
* **Text**: Contains active machine instructions, CPU register contents, and the Program Counter (PC) holding the next instruction address [47, 48].

### Process Control Block (PCB) & Process Table
* **PCB Storage**: Stored in protected kernel memory (typically at the start of the process kernel stack) [48, 49].
* **Process Table**: An array of PCBs maintained by the kernel representing all active processes [49].
* **7 Core PCB Data Fields**:
  1. *Pointer*: Stack pointer preserving execution context during state transitions [49, 50].
  2. *Process State*: Current lifecycle phase [50].
  3. *Process ID (PID)*: Unique numeric identifier [50].
  4. *Program Counter*: Memory address of the next instruction [50].
  5. *Registers*: Saved values of CPU registers restored during rescheduling [50, 51].
  6. *Memory Limits*: Page/segment tables and memory allocation boundaries [50, 51].
  7. *List of Open Files*: Handles for active files associated with the process [50, 51].

### Process Life Cycle & State Models
* **5-State Life Cycle Model**:
  1. *Start / New*: Initial creation state [52, 53].
  2. *Ready*: Resides in main RAM waiting for CPU allocation [52, 53].
  3. *Running*: Assigned to CPU; executing instructions [53].
  4. *Waiting*: Blocked waiting for I/O completion or external resources [53].
  5. *Terminated / Exit*: Execution finished; awaiting memory removal [53].
* **2-State Model**: Categorizes processes into *Running* and *Not Running* queues [54].
* **Role of the Dispatcher**: Kernel module that receives the process selected by the short-term scheduler, performs context switching, sets user mode, and jumps to the program location [54, 55].

### Process Scheduling Queues
* **Job Queue**: Tracks all processes entering the computer system [57, 58].
* **Ready Queue**: Holds processes residing in main memory ready for CPU scheduling [58].
* **Device Queues**: Holds processes blocked awaiting specific I/O devices [58].

### Comparative Table of Schedulers
| Scheduler Type | Alias / Category | Primary Function | Execution Frequency |
| :--- | :--- | :--- | :--- |
| **Long-Term Scheduler** | Job Scheduler | Admits programs from disk into main RAM ready queue [59, 60] | Low (Seconds/Minutes) [59] |
| **Short-Term Scheduler** | CPU Scheduler | Selects ready process from RAM and allocates CPU [60] | High (Milliseconds) [60] |
| **Medium-Term Scheduler** | Swapping Scheduler | Swaps processes between RAM and disk storage to optimize memory load [60, 61] | Medium [60, 61] |

### Context Switching Mechanics
* Mechanism saving the current CPU state into its PCB and restoring the saved state from the next process's PCB [28, 61, 62].
* Enables time sharing across multiple processes on a single CPU [61, 62].

---

## Module 5: CPU Scheduling Algorithms & Mathematical Metrics

### Core Metrics & Formulas
* **Arrival Time (AT)**: Timestamp when process enters the ready queue [63, 64].
* **Burst Time (BT) / Execution Time (ET)**: CPU processing duration required for completion [63, 64].
* **Completion Time (CT)**: Timestamp when process execution terminates [64].
* **Turn-Around Time (TAT)**: Total time elapsed between arrival and completion.
  $$\text{TAT} = \text{CT} - \text{AT} = \text{BT} + \text{WT}$$ [64, 65]
* **Waiting Time (WT)**: Total time spent waiting in the ready queue.
  $$\text{WT} = \text{TAT} - \text{BT}$$ [64, 65]
* **Response Time (RT)**: Time from arrival until the first CPU allocation.
  $$\text{RT} = \text{First CPU Allocation Time} - \text{AT}$$ [64, 65]
* **Gantt Chart**: Visual timeline bar chart mapping CPU process allocations [65, 66].

### Preemptive vs. Non-Preemptive Scheduling
* **Non-Preemptive**: Once allocated, the CPU remains assigned to the process until execution finishes or it requests I/O [56].
* **Preemptive**: The OS can forcefully interrupt and swap running processes based on timers or priorities [56, 57].

### 7 CPU Scheduling Algorithms Detailed Analysis
1. **First-Come, First-Served (FCFS)**: Non-preemptive; allocates CPU in arrival order [66, 67]. Simple but causes long average waiting times (Convoy Effect) [67].
2. **Shortest Job First (SJF)**: Non-preemptive; allocates CPU to the process with the shortest burst time [70, 71]. Minimizes average waiting time but risks starvation for longer processes [73, 74].
3. **Shortest Remaining Time First (SRTF)**: Preemptive version of SJF; preempts running tasks if a newly arrived process has a shorter remaining burst time [71, 72].
4. **Round Robin (RR)**: Preemptive scheduling using a fixed time quantum ($q$); cycles through the ready queue to ensure fairness and eliminate starvation, though frequent context switching adds overhead [77, 78, 79].
5. **Priority Scheduling**: Schedules processes based on explicit priority ranks (preemptive or non-preemptive); lower-priority processes may suffer starvation unless aging techniques are used [81].
6. **Guaranteed Scheduling**: Guarantees equal CPU time ($1/n$) to all $n$ active processes [82, 83].
   $$\text{Entitled CPU Time} = \frac{\text{Time Since Creation}}{n}$$ [83]
7. **Lottery Scheduling**: Allocates lottery tickets to processes and selects a winning ticket at random; permits ticket transfers between client and server processes [83, 84].

### Master Comparative Table of Scheduling Algorithms
| Algorithm | Preemptive Mode | Selection Criteria | Key Advantages | Disadvantages | Starvation Risk |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **FCFS** | Non-Preemptive [66] | Arrival Time [66] | Simple, fair execution order [66, 67] | High average waiting time [67] | No [67] |
| **SJF** | Non-Preemptive [71] | Shortest Burst Time [70] | Minimum average waiting time [73, 74] | Requires advance burst estimates [70, 71] | Yes (for long tasks) [73, 74] |
| **SRTF** | Preemptive [71, 72] | Shortest Remaining Time [71, 72] | Optimal response for short tasks [72] | Context switch overhead [72] | Yes [72] |
| **Round Robin** | Preemptive [77, 78] | Time Quantum ($q$) + FIFO [77, 78] | Equal allocation, no starvation [78] | Frequent context switches [79] | No [78] |
| **Priority** | Preemptive & Non-Preemptive [81] | Priority Level [81] | Supports task criticalities [81] | Low-priority blocking [81] | Yes [81] |
| **Guaranteed** | Preemptive [82, 83] | Lowest Actual/Entitled Ratio [83] | Equal $1/n$ CPU guarantee [82, 83] | CPU tracking overhead [83] | No [82, 83] |
| **Lottery** | Preemptive [83, 84] | Random Ticket Draw [83, 84] | Flexible ticket transfers [84] | Probabilistic guarantees [84] | No [84] |
