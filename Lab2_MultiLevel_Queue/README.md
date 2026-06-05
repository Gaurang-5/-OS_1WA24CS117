# Lab 2: Multi-Level Queue Scheduling
**Unit: 1 | Marks: 10**

## Overview
Multi-level queue scheduling algorithm considering system and user processes with different priority levels.

## Implementation
- **File:** `multilevel_queueing.c`
- **Description:** All processes in the system are divided into two categories:
  - System processes (higher priority)
  - User processes (lower priority)
  - Uses FCFS scheduling for each queue

## Key Features
- Two priority levels
- System processes executed before user processes
- Separate queue for each priority level
- Preemption based on priority

## Compilation & Execution
```bash
gcc -o multilevel multilevel_queueing.c
./multilevel
```

## Output
- Process scheduling sequence
- Turnaround time for each process
- Average waiting time
