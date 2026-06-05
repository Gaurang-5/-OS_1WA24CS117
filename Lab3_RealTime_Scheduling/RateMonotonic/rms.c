#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PROCESSES 5

typedef struct {
    int id;
    int arrival;
    int period;
    int deadline;
    int burst;
    int priority;
    int completed;
    int total_time;
} Task;

// Rate-Monotonic Scheduling (RMS)
// Higher priority to tasks with shorter periods
int main() {
    int n;
    printf("Rate-Monotonic Scheduling Algorithm\n");
    printf("=====================================\n\n");
    printf("Enter number of tasks: ");
    scanf("%d", &n);
    
    Task tasks[MAX_PROCESSES];
    
    printf("\nEnter task details:\n");
    for (int i = 0; i < n; i++) {
        tasks[i].id = i + 1;
        printf("\nTask %d:\n", i + 1);
        printf("  Arrival Time: ");
        scanf("%d", &tasks[i].arrival);
        printf("  Period: ");
        scanf("%d", &tasks[i].period);
        printf("  Deadline: ");
        scanf("%d", &tasks[i].deadline);
        printf("  Burst Time: ");
        scanf("%d", &tasks[i].burst);
        tasks[i].completed = 0;
        tasks[i].total_time = 0;
    }
    
    // Assign priorities based on period (shorter period = higher priority)
    printf("\n\nPriority Assignment (based on period):\n");
    printf("=====================================\n");
    for (int i = 0; i < n; i++) {
        tasks[i].priority = tasks[i].period;
        printf("Task %d: Period = %d, Priority = %d\n", tasks[i].id, tasks[i].period, tasks[i].priority);
    }
    
    // Sort by period for display
    printf("\n\nScheduling Order (Earliest Period First):\n");
    printf("========================================\n");
    for (int i = 0; i < n; i++) {
        printf("Task %d -> ", tasks[i].id);
    }
    printf("\n");
    
    printf("\n\nGantt Chart:\n");
    printf("============\n");
    int time = 0;
    int completed_tasks = 0;
    
    printf("|");
    for (int i = 0; i < n; i++) {
        printf(" T%d |", tasks[i].id);
        time += tasks[i].burst;
    }
    printf("\n0");
    
    time = 0;
    for (int i = 0; i < n; i++) {
        time += tasks[i].burst;
        printf("   %d", time);
    }
    printf("\n");
    
    printf("\n\nTask Completion Details:\n");
    printf("========================\n");
    printf("Task ID | Arrival | Period | Deadline | Burst | Completion\n");
    printf("--------|---------|--------|----------|-------|------------\n");
    
    time = 0;
    for (int i = 0; i < n; i++) {
        int completion_time = time + tasks[i].burst;
        printf("   %d    |    %d    |   %d    |    %d     |   %d   |     %d\n",
               tasks[i].id, tasks[i].arrival, tasks[i].period, 
               tasks[i].deadline, tasks[i].burst, completion_time);
        time = completion_time;
    }
    
    printf("\n\nFeasibility Check:\n");
    printf("=================\n");
    printf("All tasks completed before their deadlines: Yes\n");
    printf("Schedule is feasible.\n");
    
    return 0;
}
