#include <stdio.h>
#include <stdbool.h>

int main() {
    int p, r;
    
    // 1. Initial Setup: Ask for system dimensions
    printf("Enter number of processes: ");
    scanf("%d", &p);
    printf("Enter number of resource types: ");
    scanf("%d", &r);

    // Variable Length Arrays (VLAs) based on user input
    int allocation[p][r];
    int available[r];
    int work[r];
    bool finish[p];

    // 2. Take shared input: Available Resources and Current Allocation
    printf("\n--- Enter Available Resources ---\n");
    for(int i = 0; i < r; i++) {
        printf("Resource R%d: ", i);
        scanf("%d", &available[i]);
    }

    printf("\n--- Enter Current Allocation Matrix ---\n");
    for(int i = 0; i < p; i++) {
        printf("Process P%d: ", i);
        for(int j = 0; j < r; j++) {
            scanf("%d", &allocation[i][j]);
        }
    }

    // 3. Main Menu Loop
    while(1) {
        printf("\n==================================\n");
        printf("      Deadlock Simulation Menu      \n");
        printf("==================================\n");
        printf("1. Banker's Algorithm (Avoidance)\n");
        printf("2. Deadlock Detection\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        
        int choice;
        scanf("%d", &choice);

        switch(choice) {
            case 1: {
                printf("\n--- Banker's Algorithm (Avoidance) ---\n");
                int max[p][r];
                int need[p][r];
                int safe_sequence[p];

                // Take Max matrix input specifically for Banker's
                printf("Enter Maximum Requirement Matrix:\n");
                for(int i = 0; i < p; i++) {
                    printf("Process P%d: ", i);
                    for(int j = 0; j < r; j++) {
                        scanf("%d", &max[i][j]);
                        // Calculate Need matrix immediately
                        need[i][j] = max[i][j] - allocation[i][j];
                    }
                }

                // Initialize Work and Finish arrays
                for(int i = 0; i < r; i++) work[i] = available[i];
                for(int i = 0; i < p; i++) finish[i] = false;

                // Safety Algorithm Loop
                int count = 0;
                while(count < p) {
                    bool found = false;
                    for(int i = 0; i < p; i++) {
                        if(!finish[i]) {
                            int j;
                            for(j = 0; j < r; j++) {
                                if(need[i][j] > work[j]) break;
                            }
                            if(j == r) { // If all needs can be satisfied
                                for(int k = 0; k < r; k++) work[k] += allocation[i][k];
                                safe_sequence[count++] = i;
                                finish[i] = true;
                                found = true;
                            }
                        }
                    }
                    if(!found) {
                        printf("\n>> System is in an UNSAFE state. Deadlock possible.\n");
                        break;
                    }
                }

                if(count == p) {
                    printf("\n>> System is in a SAFE state.\n>> Safe Sequence: ");
                    for(int i = 0; i < p; i++) printf("P%d ", safe_sequence[i]);
                    printf("\n");
                }
                break;
            }
            
            case 2: {
                printf("\n--- Deadlock Detection Algorithm ---\n");
                int request[p][r];
                
                // Take Request matrix input specifically for Detection
                printf("Enter Current Request Matrix:\n");
                for(int i = 0; i < p; i++) {
                    printf("Process P%d: ", i);
                    for(int j = 0; j < r; j++) {
                        scanf("%d", &request[i][j]);
                    }
                }

                // Initialize Work and Finish arrays
                for(int i = 0; i < r; i++) work[i] = available[i];
                for(int i = 0; i < p; i++) {
                    finish[i] = true; // Assume finished unless they hold allocations
                    for(int j = 0; j < r; j++) {
                        if(allocation[i][j] != 0) {
                            finish[i] = false;
                            break;
                        }
                    }
                }

                // Detection Algorithm Loop
                bool progress;
                do {
                    progress = false;
                    for(int i = 0; i < p; i++) {
                        if(!finish[i]) {
                            int j;
                            for(j = 0; j < r; j++) {
                                if(request[i][j] > work[j]) break;
                            }
                            if(j == r) { // If requests can be fulfilled
                                for(int k = 0; k < r; k++) work[k] += allocation[i][k];
                                finish[i] = true;
                                progress = true;
                            }
                        }
                    }
                } while(progress);

                // Check final results
                bool is_deadlocked = false;
                printf("\n>> Result: ");
                for(int i = 0; i < p; i++) {
                    if(!finish[i]) {
                        if(!is_deadlocked) printf("System is DEADLOCKED.\n>> Processes involved: ");
                        printf("P%d ", i);
                        is_deadlocked = true;
                    }
                }
                if(!is_deadlocked) {
                    printf("System is NOT deadlocked.\n");
                } else {
                    printf("\n");
                }
                break;
            }
            
            case 3:
                printf("Exiting program...\n");
                return 0;
                
            default:
                printf("Invalid choice! Please enter 1, 2, or 3.\n");
        }
    }
    return 0;
}