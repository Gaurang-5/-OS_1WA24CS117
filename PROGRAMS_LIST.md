# 📸 ALL PROGRAMS REQUIRING OUTPUT SCREENSHOTS

**Total Programs: 18**

---

## Lab 1: CPU Scheduling (4 Programs)
1. **FCFS** - `Lab1_CPU_Scheduling/FCFS/fcfs_lab1.c`
2. **SJF** - `Lab1_CPU_Scheduling/SJF/sjf_oslab.c`
3. **Priority Scheduling** - `Lab1_CPU_Scheduling/Priority/priority_scheduling.c`
4. **Round Robin** - `Lab1_CPU_Scheduling/RoundRobin/round_robin.c`

---

## Lab 2: Multi-Level Queue (1 Program)
5. **Multi-Level Queue Scheduling** - `Lab2_MultiLevel_Queue/multilevel_queueing.c`

---

## Lab 3: Real-Time CPU Scheduling (3 Programs)
6. **RMS (Rate-Monotonic Scheduling)** - `Lab3_RealTime_Scheduling/RateMonotonic/rms.c`
7. **EDF (Earliest Deadline First)** - `Lab3_RealTime_Scheduling/EDF/edf_2.c`
8. **Proportional Scheduling** - `Lab3_RealTime_Scheduling/Proportional/propotional_scheduling.c`

---

## Lab 4: Process Synchronization (2 Programs)
9. **Producer-Consumer** - `Lab4_Synchronization/ProducerConsumer/producer_consumer.c`
10. **Dining Philosopher** - `Lab4_Synchronization/DiningPhilosopher/dining_philosopher.c`

---

## Lab 5: Deadlock Management (2 Programs)
11. **Banker's Algorithm** - `Lab5_Deadlock/BankersAlgorithm/Banker_deadlock_detection.c`
12. **Deadlock Detection** - `Lab5_Deadlock/DeadlockDetection/deadlock_detection.c`

---

## Lab 6: Memory Allocation (3 Programs)
13. **Worst-Fit** - `Lab6_MemoryAllocation/WorstFit/worst_fit.c`
14. **Best-Fit** - `Lab6_MemoryAllocation/BestFit/best_fit.c`
15. **First-Fit** - `Lab6_MemoryAllocation/FirstFit/first_fit.c`

---

## Lab 7: Page Replacement (3 Programs)
16. **FIFO (First In First Out)** - `Lab7_PageReplacement/FIFO/fifo.c`
17. **LRU (Least Recently Used)** - `Lab7_PageReplacement/LRU/lru.c`
18. **Optimal** - `Lab7_PageReplacement/Optimal/optimal.c`

---

## ✅ QUICK COMPILATION & EXECUTION CHECKLIST

| # | Lab | Program | File | Compile Command |
|---|-----|---------|------|-----------------|
| 1 | 1 | FCFS | fcfs_lab1.c | `gcc -o fcfs fcfs_lab1.c` |
| 2 | 1 | SJF | sjf_oslab.c | `gcc -o sjf sjf_oslab.c` |
| 3 | 1 | Priority | priority_scheduling.c | `gcc -o priority priority_scheduling.c` |
| 4 | 1 | Round Robin | round_robin.c | `gcc -o round_robin round_robin.c` |
| 5 | 2 | Multi-Level | multilevel_queueing.c | `gcc -o multilevel multilevel_queueing.c` |
| 6 | 3 | RMS | rms.c | `gcc -o rms rms.c` |
| 7 | 3 | EDF | edf_2.c | `gcc -o edf edf_2.c` |
| 8 | 3 | Proportional | propotional_scheduling.c | `gcc -o proportional propotional_scheduling.c` |
| 9 | 4 | Producer-Consumer | producer_consumer.c | `gcc -pthread -o producer_consumer producer_consumer.c` |
| 10 | 4 | Dining Philosopher | dining_philosopher.c | `gcc -pthread -o dining_philosopher dining_philosopher.c` |
| 11 | 5 | Banker's | Banker_deadlock_detection.c | `gcc -o banker Banker_deadlock_detection.c` |
| 12 | 5 | Deadlock Detection | deadlock_detection.c | `gcc -o deadlock_detection deadlock_detection.c` |
| 13 | 6 | Worst-Fit | worst_fit.c | `gcc -o worst_fit worst_fit.c` |
| 14 | 6 | Best-Fit | best_fit.c | `gcc -o best_fit best_fit.c` |
| 15 | 6 | First-Fit | first_fit.c | `gcc -o first_fit first_fit.c` |
| 16 | 7 | FIFO | fifo.c | `gcc -o fifo fifo.c` |
| 17 | 7 | LRU | lru.c | `gcc -o lru lru.c` |
| 18 | 7 | Optimal | optimal.c | `gcc -o optimal optimal.c` |

---

## 📷 SCREENSHOT FILENAMES

Save screenshots with these exact names in `outputs/` folder:

1. `Lab1_FCFS_output.png`
2. `Lab1_SJF_output.png`
3. `Lab1_Priority_output.png`
4. `Lab1_RoundRobin_output.png`
5. `Lab2_MultiLevel_output.png`
6. `Lab3_RMS_output.png`
7. `Lab3_EDF_output.png`
8. `Lab3_Proportional_output.png`
9. `Lab4_ProducerConsumer_output.png`
10. `Lab4_DiningPhilosopher_output.png`
11. `Lab5_Banker_output.png`
12. `Lab5_DeadlockDetection_output.png`
13. `Lab6_WorstFit_output.png`
14. `Lab6_BestFit_output.png`
15. `Lab6_FirstFit_output.png`
16. `Lab7_FIFO_output.png`
17. `Lab7_LRU_output.png`
18. `Lab7_Optimal_output.png`

---

## 🚀 EXECUTION ORDER

**Priority order for testing:**

### Phase 1 (CPU Scheduling - Labs 1-3)
1. Lab 1 - FCFS
2. Lab 1 - SJF
3. Lab 1 - Priority
4. Lab 1 - Round Robin
5. Lab 2 - Multi-Level Queue
6. Lab 3 - RMS
7. Lab 3 - EDF
8. Lab 3 - Proportional

### Phase 2 (Synchronization & Deadlock - Labs 4-5)
9. Lab 4 - Producer-Consumer
10. Lab 4 - Dining Philosopher
11. Lab 5 - Banker's Algorithm
12. Lab 5 - Deadlock Detection

### Phase 3 (Memory & Paging - Labs 6-7)
13. Lab 6 - Worst-Fit
14. Lab 6 - Best-Fit
15. Lab 6 - First-Fit
16. Lab 7 - FIFO
17. Lab 7 - LRU
18. Lab 7 - Optimal

---

## 📝 STEPS FOR EACH PROGRAM

1. **Navigate to folder:** `cd Lab[X]_[Topic]/[Algorithm]/`
2. **Compile:** Use gcc command from table above
3. **Run:** `./program_name`
4. **Enter test input:** Use values from `TEST_CASES.md`
5. **Capture screenshot:** Show complete output
6. **Save:** `outputs/Lab[X]_[Algorithm]_output.png`
7. **Repeat** for all 18 programs

---

## ✨ FINAL SUBMISSION

After capturing all 18 screenshots:

```bash
cd /Users/gaurangbhatia/operating_system/OS_1WA24CS117
git add outputs/
git commit -m "Add all 18 lab output screenshots"
git push origin main
```

---

**Status: Ready to capture outputs for all 18 programs!**
