# Operating Systems Lab — Programs and Outputs

This repository contains C programs for Operating Systems lab exercises. Below is an index mapping each source file to the lab question (from the syllabus) and an output image demonstrating expected output.

**Index**

- **FCFS (First-Come First-Serve)**: Question: "Write a C program to simulate FCFS scheduling and compute turnaround and waiting time." File: [operating_system/OS_1WA24CS117/fcfs_lab1.c](fcfs_lab1.c) — Output: [operating_system/OS_1WA24CS117/FCFS_op.png](FCFS_op.png)
- **SJF (Shortest Job First)**: Question: "Write a C program to simulate SJF scheduling and compute turnaround and waiting time." File: [operating_system/OS_1WA24CS117/sjf_oslab.c](sjf_oslab.c) — Output: [operating_system/OS_1WA24CS117/sjf_output.svg](sjf_output.svg)
- **Priority Scheduling**: Question: "Write a C program to simulate Priority scheduling." File: [operating_system/OS_1WA24CS117/priority_scheduling.c](priority_scheduling.c) — Output: [operating_system/OS_1WA24CS117/priority_scheduling_output.svg](priority_scheduling_output.svg)
- **Round Robin**: Question: "Write a C program to simulate Round Robin (experiment with different quantum sizes)." File: [operating_system/OS_1WA24CS117/round_robin.c](round_robin.c) — Output: [operating_system/OS_1WA24CS117/round_robin_output.svg](round_robin_output.svg)
- **Multi-Level Queue Scheduling**: Question: "Write a C program to simulate multi-level queue scheduling (system vs user processes)." File: [operating_system/OS_1WA24CS117/multilevel_queueing.c](multilevel_queueing.c) — Output: [operating_system/OS_1WA24CS117/multilevel queueing.png](multilevel%20queueing.png)
- **Rate Monotonic Scheduling (RMS)**: Question: "Write a C program to simulate Rate-Monotonic scheduling." File: [operating_system/OS_1WA24CS117/rms.c](rms.c) — Output: [operating_system/OS_1WA24CS117/RMS output.png](RMS%20output.png)
- **Earliest Deadline First (EDF)**: Question: "Write a C program to simulate EDF scheduling." File: [operating_system/OS_1WA24CS117/edf_2.c](edf_2.c) — Output: [operating_system/OS_1WA24CS117/EDF output.png](EDF%20output.png)
- **Proportional (Lottery) Scheduling**: Question: "Write a C program to simulate Proportional (lottery) scheduling." File: [operating_system/OS_1WA24CS117/propotional_scheduling.c](propotional_scheduling.c) — Output: [operating_system/OS_1WA24CS117/Proportional_Scheduling_output.png](Proportional_Scheduling_output.png)
- **Producer-Consumer (semaphores)**: Question: "Write a C program to simulate the Producer-Consumer problem using semaphores." File: [operating_system/OS_1WA24CS117/producer_consumer.c](producer_consumer.c) — Output: [operating_system/OS_1WA24CS117/Producer Consumer output.png](Producer%20Consumer%20output.png)
- **Dining Philosophers**: Question: "Write a C program to simulate Dining-Philosophers problem." File: [operating_system/OS_1WA24CS117/dining_philosopher.c](dining_philosopher.c) — Output: [operating_system/OS_1WA24CS117/Dining Philosopher output (2).png](Dining%20Philosopher%20output%20(2).png)
- **Banker's Algorithm (deadlock avoidance)**: Question: "Write a C program to simulate Banker's algorithm for deadlock avoidance." File: [operating_system/OS_1WA24CS117/bankers_algorithm.c](bankers_algorithm.c) — Output: [operating_system/OS_1WA24CS117/bankers_algo_outpyt.png](bankers_algo_outpyt.png)
- **Deadlock Detection**: Question: "Write a C program to simulate deadlock detection." File: [operating_system/OS_1WA24CS117/deadlock_detection.c](deadlock_detection.c) — Output: [operating_system/OS_1WA24CS117/deadlock_detection_output.png](deadlock_detection_output.png)

---

Notes:

- I created simple placeholder SVG output images for programs that did not have an existing output image (`sjf_oslab`, `priority_scheduling`, `round_robin`). These are meant to be replaced with screenshots produced by running the programs; they show a sample output header so you can see the mapping.
- Many source files compile with warnings on macOS (e.g., `int main()` without `(void)`, use of deprecated `sem_init`). I can apply small fixes to silence warnings if you want.

If you want, I can:

- Run each program and capture actual terminal output (then convert to real screenshots).
- Replace the placeholder SVGs with real screenshots (requires running programs and capturing output).
- Apply small source fixes (e.g., change `int main()` to `int main(void)`, silence unused parameter warnings).

Tell me which of the above you'd like next.
