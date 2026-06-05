# Lab 3: Real-Time CPU Scheduling Algorithms
**Unit: 2 | Marks: 10**

## Overview
Real-Time CPU scheduling algorithms for time-critical systems.

## Algorithms Implemented

### 1. Rate-Monotonic Scheduling (RMS)
- **File:** `RateMonotonic/rms`
- **Description:** Tasks with shorter periods get higher priority

### 2. Earliest Deadline First (EDF)
- **File:** `EDF/edf_2.c`
- **Description:** Task with nearest deadline gets highest priority

### 3. Proportional Scheduling
- **File:** `Proportional/propotional_scheduling.c`
- **Description:** Scheduling based on proportional allocation

## Compilation & Execution
```bash
cd [Algorithm_Name]
gcc -o output [filename].c
./output
```

## Output
- Task scheduling sequence
- Deadline compliance
- System utilization
- Feasibility analysis
