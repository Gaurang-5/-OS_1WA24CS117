# Lab 4: Process Synchronization
**Unit: 3 | Marks: 10**

## Overview
Synchronization problems in operating systems demonstrating inter-process communication and mutual exclusion.

## Problems Implemented

### 1. Producer-Consumer Problem
- **File:** `ProducerConsumer/producer_consumer.c`
- **Description:** Demonstrates synchronization between producer and consumer using semaphores
- **Concepts:** Bounded buffer, mutual exclusion, semaphores

### 2. Dining Philosopher's Problem
- **File:** `DiningPhilosopher/dining_philosopher.c`
- **Description:** Five philosophers eating and thinking, resource allocation problem
- **Concepts:** Deadlock prevention, semaphores, starvation prevention

## Compilation & Execution
```bash
cd [Problem_Name]
gcc -pthread -o output [filename].c
./output
```

## Output
- Process execution trace
- Synchronization events
- Resource allocation pattern
- Deadlock avoidance demonstration
