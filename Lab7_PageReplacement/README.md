# Lab 7: Page Replacement Algorithms
**Unit: 4 | Marks: 10**

## Overview
Virtual memory page replacement algorithms to reduce page faults.

## Algorithms Implemented

### 1. FIFO (First In First Out)
- **File:** `FIFO/fifo.c`
- **Description:** Replaces page that has been in memory longest
- **Disadvantage:** Suffers from Belady's anomaly

### 2. LRU (Least Recently Used)
- **File:** `LRU/lru.c`
- **Description:** Replaces page not used for longest time
- **Advantage:** Better performance than FIFO

### 3. Optimal
- **File:** `Optimal/optimal.c`
- **Description:** Replaces page that will not be used for longest time
- **Note:** Theoretical optimal (requires future knowledge)

## Compilation & Execution
```bash
cd [Algorithm_Name]
gcc -o output [filename].c
./output
```

## Output
- Page hit/miss statistics
- Page fault count
- Replacement sequence
- Hit ratio calculation
