# Lab 6: Memory Allocation Techniques
**Unit: 4 | Marks: 10**

## Overview
Contiguous memory allocation techniques for process management.

## Algorithms Implemented

### 1. Worst-Fit
- **File:** `WorstFit/worst_fit.c`
- **Description:** Allocates process to partition with largest free space
- **Advantage:** Better for large processes

### 2. Best-Fit
- **File:** `BestFit/best_fit.c`
- **Description:** Allocates process to smallest partition that fits
- **Advantage:** Minimizes wasted space

### 3. First-Fit
- **File:** `FirstFit/first_fit.c`
- **Description:** Allocates process to first partition with sufficient space
- **Advantage:** Faster allocation

## Compilation & Execution
```bash
cd [Algorithm_Name]
gcc -o output [filename].c
./output
```

## Output
- Memory allocation map
- Hole fragmentation statistics
- Wasted memory percentage
- Allocation sequence
