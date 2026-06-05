#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PROCESSES 10
#define MAX_RESOURCES 3

typedef struct {
    int process_id;
    int available[MAX_RESOURCES];
    int max[MAX_RESOURCES][MAX_PROCESSES];
    int alloc[MAX_RESOURCES][MAX_PROCESSES];
    int need[MAX_RESOURCES][MAX_PROCESSES];
    int work[MAX_RESOURCES];
    int finish[MAX_PROCESSES];
    int safe_sequence[MAX_PROCESSES];
    int is_safe;
} BankersState;

// Deadlock Detection Algorithm
int main() {
    int n, m;
    printf("Deadlock Detection Algorithm\n");
    printf("=============================\n\n");
    printf("Enter number of processes: ");
    scanf("%d", &n);
    printf("Enter number of resource types: ");
    scanf("%d", &m);
    
    BankersState state;
    memset(&state, 0, sizeof(BankersState));
    
    printf("\nEnter Available resources: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &state.available[i]);
        state.work[i] = state.available[i];
    }
    
    printf("\nEnter Maximum resource requirement matrix (per process):\n");
    for (int i = 0; i < n; i++) {
        printf("Process %d: ", i);
        for (int j = 0; j < m; j++) {
            scanf("%d", &state.max[j][i]);
        }
    }
    
    printf("\nEnter Allocated resource matrix (per process):\n");
    for (int i = 0; i < n; i++) {
        printf("Process %d: ", i);
        for (int j = 0; j < m; j++) {
            scanf("%d", &state.alloc[j][i]);
        }
    }
    
    // Calculate Need matrix
    printf("\n\nNeed Matrix (Max - Allocated):\n");
    printf("==============================\n");
    for (int i = 0; i < n; i++) {
        printf("Process %d: ", i);
        for (int j = 0; j < m; j++) {
            state.need[j][i] = state.max[j][i] - state.alloc[j][i];
            printf("%d ", state.need[j][i]);
        }
        printf("\n");
    }
    
    // Deadlock Detection Algorithm
    printf("\n\nDeadlock Detection Process:\n");
    printf("===========================\n");
    
    int processes_left = n;
    int detected = 0;
    int deadlock_processes[MAX_PROCESSES];
    int deadlock_count = 0;
    
    for (int i = 0; i < n; i++) {
        state.finish[i] = 0;
    }
    
    while (processes_left > 0) {
        int found = 0;
        
        for (int i = 0; i < n; i++) {
            if (!state.finish[i]) {
                int can_proceed = 1;
                
                for (int j = 0; j < m; j++) {
                    if (state.need[j][i] > state.work[j]) {
                        can_proceed = 0;
                        break;
                    }
                }
                
                if (can_proceed) {
                    printf("Process %d can proceed (Resources available)\n", i);
                    for (int j = 0; j < m; j++) {
                        state.work[j] += state.alloc[j][i];
                    }
                    state.safe_sequence[n - processes_left] = i;
                    state.finish[i] = 1;
                    found = 1;
                    processes_left--;
                    break;
                }
            }
        }
        
        if (!found) {
            printf("\n⚠️  DEADLOCK DETECTED!\n");
            detected = 1;
            
            for (int i = 0; i < n; i++) {
                if (!state.finish[i]) {
                    deadlock_processes[deadlock_count++] = i;
                    printf("Process %d is deadlocked\n", i);
                }
            }
            break;
        }
    }
    
    printf("\n\nDeadlock Detection Result:\n");
    printf("==========================\n");
    
    if (detected) {
        printf("Status: DEADLOCK DETECTED\n");
        printf("Processes involved in deadlock: ");
        for (int i = 0; i < deadlock_count; i++) {
            printf("%d ", deadlock_processes[i]);
        }
        printf("\n");
    } else {
        printf("Status: NO DEADLOCK\n");
        printf("Safe sequence: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", state.safe_sequence[i]);
        }
        printf("\n");
    }
    
    return 0;
}
