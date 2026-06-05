# Lab 5: Deadlock Management
**Unit: 3 | Marks: 10**

## Overview
Deadlock detection and avoidance algorithms in operating systems.

## Algorithms Implemented

### 1. Banker's Algorithm
- **File:** `BankersAlgorithm/Banker_deadlock_detection.c`
- **Description:** Deadlock avoidance algorithm - checks if resource allocation is safe
- **Concepts:** Safe state, resource allocation matrix, need matrix

### 2. Deadlock Detection
- **File:** `DeadlockDetection/Banker_deadlock_detection.c`
- **Description:** Detects deadlock situations and reports processes involved
- **Concepts:** Wait-for graph, cycle detection, recovery

## Key Features
- Safe sequence generation
- Resource availability tracking
- Maximum resource declaration
- Allocation history

## Compilation & Execution
```bash
cd [Algorithm_Name]
gcc -o output Banker_deadlock_detection.c
./output
```

## Output
- Safe/Unsafe state indication
- Safe sequence (if exists)
- Deadlock detection report
- Process resource allocation
