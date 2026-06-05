# 📋 TEST CASES FOR ALL OS LABS
**Student ID:** 1WA24CS117  
**For:** Output Screenshot Capture

---

## Lab 1: CPU Scheduling Algorithms

### Test Case 1: FCFS (First Come First Served)
**File:** `Lab1_CPU_Scheduling/FCFS/fcfs_lab1.c`

**Compilation:**
```bash
cd Lab1_CPU_Scheduling/FCFS
gcc -o fcfs fcfs_lab1.c
./fcfs
```

**Input (Copy & Paste):**
```
5
0 8
1 4
2 2
3 4
4 3
```

**Expected Output:** Shows turnaround time and waiting time for each process

---

### Test Case 2: SJF (Shortest Job First)
**File:** `Lab1_CPU_Scheduling/SJF/sjf_oslab.c`

**Compilation:**
```bash
cd Lab1_CPU_Scheduling/SJF
gcc -o sjf sjf_oslab.c
./sjf
```

**Input:**
```
5
0 8
1 4
2 2
3 4
4 3
```

**Expected Output:** Processes scheduled by shortest burst time first

---

### Test Case 3: Priority Scheduling
**File:** `Lab1_CPU_Scheduling/Priority/priority_scheduling.c`

**Compilation:**
```bash
cd Lab1_CPU_Scheduling/Priority
gcc -o priority priority_scheduling.c
./priority
```

**Input:**
```
5
8 1
4 2
2 3
4 4
3 5
```
*(Format: Burst_Time Priority)*

**Expected Output:** Processes scheduled by priority (higher number = higher priority)

---

### Test Case 4: Round Robin
**File:** `Lab1_CPU_Scheduling/RoundRobin/round_robin.c`

**Compilation:**
```bash
cd Lab1_CPU_Scheduling/RoundRobin
gcc -o round_robin round_robin.c
./round_robin
```

**Input:**
```
5
0 8
1 4
2 2
3 4
4 3
2
```
*(Last input: Time Quantum)*

**Expected Output:** Gantt chart with context switches every time quantum

---

## Lab 2: Multi-Level Queue Scheduling

**File:** `Lab2_MultiLevel_Queue/multilevel_queueing.c`

**Compilation:**
```bash
cd Lab2_MultiLevel_Queue
gcc -o multilevel multilevel_queueing.c
./multilevel
```

**Input:**
```
3
2
4
1 2 3
4 2 1
```
*(System processes, User processes, then burst times)*

**Expected Output:** System processes scheduled first, then user processes

---

## Lab 3: Real-Time CPU Scheduling

### Test Case 1: Rate-Monotonic Scheduling (RMS)
**File:** `Lab3_RealTime_Scheduling/RateMonotonic/rms.c`

**Compilation:**
```bash
cd Lab3_RealTime_Scheduling/RateMonotonic
gcc -o rms rms.c
./rms
```

**Input:**
```
3
0 10 15 4
0 20 20 3
0 30 30 2
```
*(Arrival Period Deadline Burst)*

**Expected Output:** Rate-Monotonic scheduling with priority by period

---

### Test Case 2: Earliest Deadline First (EDF)
**File:** `Lab3_RealTime_Scheduling/EDF/edf_2.c`

**Compilation:**
```bash
cd Lab3_RealTime_Scheduling/EDF
gcc -o edf edf_2.c
./edf
```

**Input:**
```
3
0 10 15 4
0 20 20 3
0 30 30 2
```

**Expected Output:** Tasks scheduled by earliest deadline

---

### Test Case 3: Proportional Scheduling
**File:** `Lab3_RealTime_Scheduling/Proportional/propotional_scheduling.c`

**Compilation:**
```bash
cd Lab3_RealTime_Scheduling/Proportional
gcc -o proportional propotional_scheduling.c
./proportional
```

**Input:**
```
3
4
3
2
```
*(Burst times for 3 processes)*

**Expected Output:** Proportional resource allocation

---

## Lab 4: Process Synchronization

### Test Case 1: Producer-Consumer
**File:** `Lab4_Synchronization/ProducerConsumer/producer_consumer.c`

**Compilation:**
```bash
cd Lab4_Synchronization/ProducerConsumer
gcc -pthread -o producer_consumer producer_consumer.c
./producer_consumer
```

**Input:** (Usually automatic or)
```
5
```
*(Buffer size)*

**Expected Output:** Producer and consumer alternating, buffer state shown

---

### Test Case 2: Dining Philosopher
**File:** `Lab4_Synchronization/DiningPhilosopher/dining_philosopher.c`

**Compilation:**
```bash
cd Lab4_Synchronization/DiningPhilosopher
gcc -pthread -o dining_philosopher dining_philosopher.c
./dining_philosopher
```

**Input:** (Usually automatic or)
```
5
10
```
*(Number of philosophers, Number of iterations)*

**Expected Output:** Philosophers thinking and eating without deadlock

---

## Lab 5: Deadlock Management

### Test Case 1: Banker's Algorithm
**File:** `Lab5_Deadlock/BankersAlgorithm/Banker_deadlock_detection.c`

**Compilation:**
```bash
cd Lab5_Deadlock/BankersAlgorithm
gcc -o banker Banker_deadlock_detection.c
./banker
```

**Input:**
```
3
2
10 5 7
9 0 2
3 2 2
6 0 0
0 1 1
2 5 1
```
*(Processes, Resources, Available, then Max matrix, then Allocated matrix)*

**Expected Output:** Safe/Unsafe state, Safe sequence if exists

---

### Test Case 2: Deadlock Detection
**File:** `Lab5_Deadlock/DeadlockDetection/deadlock_detection.c`

**Compilation:**
```bash
cd Lab5_Deadlock/DeadlockDetection
gcc -o deadlock_detection deadlock_detection.c
./deadlock_detection
```

**Input:**
```
3
2
10 5
9 0
3 2
6 0
0 1
2 5
```

**Expected Output:** Detects if deadlock exists and which processes

---

## Lab 6: Memory Allocation

### Test Case 1: Worst-Fit
**File:** `Lab6_MemoryAllocation/WorstFit/worst_fit.c`

**Compilation:**
```bash
cd Lab6_MemoryAllocation/WorstFit
gcc -o worst_fit worst_fit.c
./worst_fit
```

**Input:**
```
4
100 500 200 300
3
150
350
200
```
*(Number of partitions, Partition sizes, Number of processes, Process sizes)*

**Expected Output:** Processes allocated to largest available partition

---

### Test Case 2: Best-Fit
**File:** `Lab6_MemoryAllocation/BestFit/best_fit.c`

**Compilation:**
```bash
cd Lab6_MemoryAllocation/BestFit
gcc -o best_fit best_fit.c
./best_fit
```

**Input:**
```
4
100 500 200 300
3
150
350
200
```

**Expected Output:** Processes allocated to smallest fitting partition

---

### Test Case 3: First-Fit
**File:** `Lab6_MemoryAllocation/FirstFit/first_fit.c`

**Compilation:**
```bash
cd Lab6_MemoryAllocation/FirstFit
gcc -o first_fit first_fit.c
./first_fit
```

**Input:**
```
4
100 500 200 300
3
150
350
200
```

**Expected Output:** Processes allocated to first fitting partition

---

## Lab 7: Page Replacement

### Test Case 1: FIFO
**File:** `Lab7_PageReplacement/FIFO/fifo.c`

**Compilation:**
```bash
cd Lab7_PageReplacement/FIFO
gcc -o fifo fifo.c
./fifo
```

**Input:**
```
3
12
7 0 1 2 0 3 0 4 2 3 0 3
```
*(Number of frames, Number of page references, Page reference string)*

**Expected Output:** Page hits/misses, Hit ratio, Page faults

---

### Test Case 2: LRU (Least Recently Used)
**File:** `Lab7_PageReplacement/LRU/lru.c`

**Compilation:**
```bash
cd Lab7_PageReplacement/LRU
gcc -o lru lru.c
./lru
```

**Input:**
```
3
12
7 0 1 2 0 3 0 4 2 3 0 3
```

**Expected Output:** LRU replacement, fewer faults than FIFO

---

### Test Case 3: Optimal
**File:** `Lab7_PageReplacement/Optimal/optimal.c`

**Compilation:**
```bash
cd Lab7_PageReplacement/Optimal
gcc -o optimal optimal.c
./optimal
```

**Input:**
```
3
12
7 0 1 2 0 3 0 4 2 3 0 3
```

**Expected Output:** Optimal replacement, minimum possible faults

---

## 🎯 QUICK TEST EXECUTION GUIDE

### Run All Tests At Once (Bash Script)

Create a file `test_all.sh`:
```bash
#!/bin/bash

# Lab 1
cd Lab1_CPU_Scheduling/FCFS && gcc -o fcfs fcfs_lab1.c
cd Lab1_CPU_Scheduling/SJF && gcc -o sjf sjf_oslab.c
cd Lab1_CPU_Scheduling/Priority && gcc -o priority priority_scheduling.c
cd Lab1_CPU_Scheduling/RoundRobin && gcc -o round_robin round_robin.c

# Lab 2
cd Lab2_MultiLevel_Queue && gcc -o multilevel multilevel_queueing.c

# Lab 3
cd Lab3_RealTime_Scheduling/RateMonotonic && gcc -o rms rms.c
cd Lab3_RealTime_Scheduling/EDF && gcc -o edf edf_2.c
cd Lab3_RealTime_Scheduling/Proportional && gcc -o proportional propotional_scheduling.c

# Lab 4
cd Lab4_Synchronization/ProducerConsumer && gcc -pthread -o producer_consumer producer_consumer.c
cd Lab4_Synchronization/DiningPhilosopher && gcc -pthread -o dining_philosopher dining_philosopher.c

# Lab 5
cd Lab5_Deadlock/BankersAlgorithm && gcc -o banker Banker_deadlock_detection.c
cd Lab5_Deadlock/DeadlockDetection && gcc -o deadlock_detection deadlock_detection.c

# Lab 6
cd Lab6_MemoryAllocation/WorstFit && gcc -o worst_fit worst_fit.c
cd Lab6_MemoryAllocation/BestFit && gcc -o best_fit best_fit.c
cd Lab6_MemoryAllocation/FirstFit && gcc -o first_fit first_fit.c

# Lab 7
cd Lab7_PageReplacement/FIFO && gcc -o fifo fifo.c
cd Lab7_PageReplacement/LRU && gcc -o lru lru.c
cd Lab7_PageReplacement/Optimal && gcc -o optimal optimal.c

echo "✅ All programs compiled successfully!"
```

---

## 📸 SCREENSHOT CAPTURE INSTRUCTIONS

### For Each Program:
1. **Run the program** with the provided test input
2. **Capture the complete output** (use Cmd+Shift+4 on Mac)
3. **Save as:** `Lab[X]_[Algorithm]_output.png`
4. **Save location:** `OS_1WA24CS117/outputs/`

### Example:
```bash
cd Lab1_CPU_Scheduling/FCFS
./fcfs << EOF
5
0 8
1 4
2 2
3 4
4 3
EOF
```

Then take screenshot and save as `Lab1_FCFS_output.png`

---

## 📊 SUMMARY

| Lab | Algorithm | Program | Input Lines |
|-----|-----------|---------|-------------|
| 1 | FCFS | fcfs | 6 |
| 1 | SJF | sjf | 6 |
| 1 | Priority | priority | 6 |
| 1 | Round Robin | round_robin | 7 |
| 2 | Multi-Level | multilevel | 6 |
| 3 | RMS | rms | 4 |
| 3 | EDF | edf | 4 |
| 3 | Proportional | proportional | 4 |
| 4 | Producer-Consumer | producer_consumer | 1 |
| 4 | Dining Philosopher | dining_philosopher | 2 |
| 5 | Banker's | banker | 9 |
| 5 | Deadlock Detection | deadlock_detection | 8 |
| 6 | Worst-Fit | worst_fit | 7 |
| 6 | Best-Fit | best_fit | 7 |
| 6 | First-Fit | first_fit | 7 |
| 7 | FIFO | fifo | 3 |
| 7 | LRU | lru | 3 |
| 7 | Optimal | optimal | 3 |

---

**Total Screenshots Needed: 18**

---

## ✨ STEPS TO COMPLETE SUBMISSION

1. ✅ Compile each program (gcc command provided)
2. ✅ Run each program with test input provided
3. ✅ Take screenshot of complete output
4. ✅ Save screenshot with proper name in `outputs/` folder
5. ✅ Upload all 18 screenshots to GitHub
6. ✅ Commit and push final changes

---

**Ready to capture outputs! Use the inputs provided above to run each test case.**
