# 📋 OS Lab Submission Guide - Output Screenshots Required
**Student ID:** 1WA24CS117  
**College:** BMS College of Engineering, Bangalore

---

## ✅ Submission Checklist

### ✓ Code Organization - COMPLETED
- [x] Lab 1: CPU Scheduling (FCFS, SJF, Priority, Round Robin)
- [x] Lab 2: Multi-Level Queue Scheduling
- [x] Lab 3: Real-Time CPU Scheduling (RMS, EDF, Proportional)
- [x] Lab 4: Process Synchronization (Producer-Consumer, Dining Philosopher)
- [x] Lab 5: Deadlock Management (Banker's Algorithm, Detection)
- [x] Lab 6: Memory Allocation (Worst-Fit, Best-Fit, First-Fit)
- [x] Lab 7: Page Replacement (FIFO, LRU, Optimal)
- [x] README files created for each lab
- [x] GitHub repository updated and pushed

---

## 📸 REQUIRED OUTPUT SCREENSHOTS FOR SUBMISSION

### Lab 1: CPU Scheduling (10 Marks)
**Required Screenshots (4):**
1. **FCFS Output** - `outputs/Lab1_FCFS_output.png`
   - Show: Process IDs, Arrival Time, Burst Time, Completion Time, Turnaround Time, Waiting Time
   - Show: Gantt Chart visualization
   - Show: Average Turnaround Time and Average Waiting Time

2. **SJF Output** - `outputs/Lab1_SJF_output.png`
   - Show: Same metrics as FCFS
   - Verify: Lower average waiting time compared to FCFS

3. **Priority Scheduling Output** - `outputs/Lab1_Priority_output.png`
   - Show: Process priority values
   - Show: Scheduling order based on priority

4. **Round Robin Output** - `outputs/Lab1_RoundRobin_output.png`
   - Show: Time Quantum value used
   - Show: Context switches
   - Show: Ready queue state at each step

---

### Lab 2: Multi-Level Queue Scheduling (10 Marks)
**Required Screenshot (1):**
1. **Multi-Level Queue Output** - `outputs/Lab2_MultiLevel_output.png`
   - Show: System processes queue (higher priority)
   - Show: User processes queue (lower priority)
   - Show: Queue execution sequence
   - Show: Turnaround time and waiting time for each queue

---

### Lab 3: Real-Time CPU Scheduling (10 Marks)
**Required Screenshots (3):**
1. **Rate-Monotonic Scheduling (RMS) Output** - `outputs/Lab3_RMS_output.png`
   - Show: Task periods and priorities
   - Show: Priority assignment (shorter period = higher priority)
   - Show: Scheduling feasibility

2. **Earliest Deadline First (EDF) Output** - `outputs/Lab3_EDF_output.png`
   - Show: Task deadlines
   - Show: Execution order based on earliest deadline
   - Show: Deadline compliance

3. **Proportional Scheduling Output** - `outputs/Lab3_Proportional_output.png`
   - Show: Proportional allocation ratios
   - Show: Resource distribution
   - Show: Utilization statistics

---

### Lab 4: Process Synchronization (10 Marks)
**Required Screenshots (2):**
1. **Producer-Consumer Output** - `outputs/Lab4_ProducerConsumer_output.png`
   - Show: Buffer state (produced items)
   - Show: Producer waiting when buffer full
   - Show: Consumer waiting when buffer empty
   - Show: Semaphore operations (wait/signal)
   - Show: Final state of buffer

2. **Dining Philosopher's Output** - `outputs/Lab4_DiningPhilosopher_output.png`
   - Show: Philosopher states (thinking/eating)
   - Show: Fork availability
   - Show: No deadlock occurring
   - Show: No starvation occurring
   - Show: Execution trace for multiple rounds

---

### Lab 5: Deadlock Management (10 Marks)
**Required Screenshots (2):**
1. **Banker's Algorithm Output** - `outputs/Lab5_Banker_output.png`
   - Show: Available resources
   - Show: Maximum demand matrix
   - Show: Allocated resources matrix
   - Show: Need matrix calculation
   - Show: Safe sequence (if safe)
   - Show: Safe/Unsafe state conclusion

2. **Deadlock Detection Output** - `outputs/Lab5_DeadlockDetection_output.png`
   - Show: Resource allocation graph
   - Show: Allocation matrix
   - Show: Request matrix
   - Show: Deadlock detection result
   - Show: Processes involved in deadlock (if any)

---

### Lab 6: Memory Allocation (10 Marks)
**Required Screenshots (3):**
1. **Worst-Fit Output** - `outputs/Lab6_WorstFit_output.png`
   - Show: Memory layout before allocation
   - Show: Allocation strategy (largest hole selected)
   - Show: Memory layout after allocation
   - Show: Fragmentation analysis
   - Show: Wasted space percentage

2. **Best-Fit Output** - `outputs/Lab6_BestFit_output.png`
   - Show: Memory layout before allocation
   - Show: Allocation strategy (smallest hole selected)
   - Show: Memory layout after allocation
   - Show: Comparison with Worst-Fit (better space utilization)

3. **First-Fit Output** - `outputs/Lab6_FirstFit_output.png`
   - Show: Memory layout before allocation
   - Show: Allocation strategy (first sufficient hole)
   - Show: Memory layout after allocation
   - Show: Execution time comparison

---

### Lab 7: Page Replacement Algorithms (10 Marks)
**Required Screenshots (3):**
1. **FIFO Output** - `outputs/Lab7_FIFO_output.png`
   - Show: Page reference string
   - Show: Page replacement sequence
   - Show: Page hits and misses
   - Show: Total page faults
   - Show: Hit ratio (%)

2. **LRU Output** - `outputs/Lab7_LRU_output.png`
   - Show: Page reference string
   - Show: LRU replacement decisions
   - Show: Page hits and misses
   - Show: Total page faults (fewer than FIFO)
   - Show: Hit ratio comparison

3. **Optimal Output** - `outputs/Lab7_Optimal_output.png`
   - Show: Page reference string
   - Show: Optimal replacement decisions
   - Show: Minimum possible page faults
   - Show: Hit ratio (highest among all)
   - Show: Comparison table with FIFO and LRU

---

## 📊 SUMMARY OF REQUIRED OUTPUTS

| Lab | Topic | Algorithms | Outputs Needed |
|-----|-------|-----------|-----------------|
| 1 | CPU Scheduling | FCFS, SJF, Priority, RR | 4 screenshots |
| 2 | Multi-Level Queue | Multi-Level | 1 screenshot |
| 3 | Real-Time Scheduling | RMS, EDF, Proportional | 3 screenshots |
| 4 | Synchronization | Producer-Consumer, Dining Philosopher | 2 screenshots |
| 5 | Deadlock | Banker's, Detection | 2 screenshots |
| 6 | Memory Allocation | Worst-Fit, Best-Fit, First-Fit | 3 screenshots |
| 7 | Page Replacement | FIFO, LRU, Optimal | 3 screenshots |
| **TOTAL** | | | **18 screenshots** |

---

## 📷 HOW TO CAPTURE OUTPUTS

### For Console Output:
```bash
# Run program and capture output to file
./output > output.txt 2>&1

# Take screenshot of terminal
# Save as: Lab[X]_[Algorithm]_output.png
```

### For Visual Outputs:
- Use any screenshot tool (macOS: Cmd+Shift+4, Linux: Screenshot app)
- Save in high quality (PNG format recommended)
- Include complete output visible in screenshot

### Save Location:
```
OS_1WA24CS117/outputs/
├── Lab1_FCFS_output.png
├── Lab1_SJF_output.png
├── Lab1_Priority_output.png
├── Lab1_RoundRobin_output.png
├── Lab2_MultiLevel_output.png
├── Lab3_RMS_output.png
├── Lab3_EDF_output.png
├── Lab3_Proportional_output.png
├── Lab4_ProducerConsumer_output.png
├── Lab4_DiningPhilosopher_output.png
├── Lab5_Banker_output.png
├── Lab5_DeadlockDetection_output.png
├── Lab6_WorstFit_output.png
├── Lab6_BestFit_output.png
├── Lab6_FirstFit_output.png
├── Lab7_FIFO_output.png
├── Lab7_LRU_output.png
└── Lab7_Optimal_output.png
```

---

## ✨ SUBMISSION INSTRUCTIONS

1. **Compile all programs** without errors or warnings
2. **Run each program** and capture output screenshots
3. **Save screenshots** in `outputs/` folder with appropriate names
4. **Update GitHub** with all code and screenshots
5. **Create a submission report** summarizing all outputs
6. **Submit to course portal** with GitHub link

---

## 📝 VERIFICATION CHECKLIST

- [ ] All 7 labs implemented and working
- [ ] All code properly organized in folders
- [ ] README files present for each lab
- [ ] All 18 output screenshots captured
- [ ] Screenshots clearly show all required information
- [ ] GitHub repository updated with all files
- [ ] No compilation errors or warnings
- [ ] Algorithms produce correct output
- [ ] Comparisons between algorithms shown
- [ ] Submission report generated

---

## 🔗 GitHub Repository
**URL:** https://github.com/Gaurang-5/-OS_1WA24CS117.git  
**Branch:** main  
**Status:** ✅ Updated and Pushed

---

**Submission Date:** June 2026  
**Total Marks:** 70
