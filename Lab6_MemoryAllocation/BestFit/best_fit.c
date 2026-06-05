#include <stdio.h>
#include <stdlib.h>

#define MAX_BLOCKS 10

typedef struct {
    int process_id;
    int size;
} Process;

typedef struct {
    int partition_size[MAX_BLOCKS];
    int num_partitions;
} Memory;

// Best-Fit Memory Allocation Algorithm
int main() {
    int n;
    printf("Best-Fit Memory Allocation Algorithm\n");
    printf("=====================================\n\n");
    printf("Enter number of memory partitions: ");
    scanf("%d", &n);
    
    Memory mem;
    mem.num_partitions = n;
    
    printf("\nEnter partition sizes:\n");
    for (int i = 0; i < n; i++) {
        printf("Partition %d size: ", i + 1);
        scanf("%d", &mem.partition_size[i]);
    }
    
    printf("\n\nMemory Layout Before Allocation:\n");
    printf("=================================\n");
    for (int i = 0; i < n; i++) {
        printf("Partition %d: [Free: %d KB]\n", i + 1, mem.partition_size[i]);
    }
    
    int total_free = 0;
    for (int i = 0; i < n; i++) {
        total_free += mem.partition_size[i];
    }
    printf("Total Free Memory: %d KB\n", total_free);
    
    // Process allocation requests
    int processes;
    printf("\n\nEnter number of processes to allocate: ");
    scanf("%d", &processes);
    
    int allocated_count = 0;
    printf("\n\nProcess Allocation (Best-Fit Strategy):\n");
    printf("=======================================\n");
    
    for (int i = 0; i < processes; i++) {
        int size;
        printf("\nProcess %d - Size needed: ", i + 1);
        scanf("%d", &size);
        
        int best_partition = -1;
        int min_waste = 999999;
        
        // Find partition with smallest waste space that fits
        for (int j = 0; j < n; j++) {
            if (mem.partition_size[j] >= size) {
                int waste = mem.partition_size[j] - size;
                if (waste < min_waste) {
                    min_waste = waste;
                    best_partition = j;
                }
            }
        }
        
        if (best_partition != -1) {
            printf("✓ Allocated to Partition %d\n", best_partition + 1);
            printf("  Space before: %d KB -> after: %d KB\n", 
                   mem.partition_size[best_partition], 
                   mem.partition_size[best_partition] - size);
            printf("  Internal waste: %d KB\n", mem.partition_size[best_partition] - size);
            mem.partition_size[best_partition] -= size;
            allocated_count++;
        } else {
            printf("✗ Allocation failed - insufficient memory\n");
        }
    }
    
    printf("\n\nMemory Layout After Allocation:\n");
    printf("================================\n");
    for (int i = 0; i < n; i++) {
        printf("Partition %d: [Free: %d KB]\n", i + 1, mem.partition_size[i]);
    }
    
    int remaining_free = 0;
    for (int i = 0; i < n; i++) {
        remaining_free += mem.partition_size[i];
    }
    
    printf("\nAllocation Summary:\n");
    printf("===================\n");
    printf("Processes allocated: %d/%d\n", allocated_count, processes);
    printf("Total free memory: %d KB\n", remaining_free);
    printf("Memory utilization: %.2f%%\n", 
           ((total_free - remaining_free) * 100.0) / total_free);
    printf("Advantage over Worst-Fit: Better space utilization\n");
    
    return 0;
}
