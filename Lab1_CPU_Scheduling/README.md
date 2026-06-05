# Lab 1: CPU Scheduling Algorithms
**Unit: 1 | Marks: 10**

## Overview
CPU Scheduling algorithms to find turnaround time and waiting time.

## Algorithms Implemented

### 1. FCFS (First Come First Served)
- **File:** `FCFS/fcfs_lab1.c`
- **Description:** Non-preemptive algorithm that executes processes in arrival order

### 2. SJF (Shortest Job First)
- **File:** `SJF/sjf_oslab.c`
- **Description:** Selects process with shortest burst time for execution

### 3. Priority Scheduling
- **File:** `Priority/priority_scheduling.c`
- **Description:** Executes processes based on priority levels

### 4. Round Robin (RR)
- **File:** `RoundRobin/round_robin.c`
- **Description:** Preemptive algorithm with time quantum for each process

## Compilation & Execution
```bash
cd [Algorithm_Name]
gcc -o output [filename].c
./output
```

## Output
- Turnaround Time
- Waiting Time
- Average Turnaround Time
- Average Waiting Time
- Gantt Chart visualization
