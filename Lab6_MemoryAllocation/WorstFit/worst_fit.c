#include <stdio.h>
#include <stdlib.h>

#define MAX_BLOCKS 10
#define MEMORY_SIZE 100

typedef struct {
    int process_id;
    int size;
    int allocated_at;
} Block;

typedef struct {
    Block memory[MAX_BLOCKS];
    int free_spaces[MAX_BLOCKS];
    int num_blocks;
    int num_free;
} MemoryManager;

// Worst-Fit Memory Allocation Algorithm
int main() {
    int n;
    printf("Worst-Fit Memory Allocation Algorithm\n");
    printf("======================================\n\n");
    printf("Enter number of memory partitions: ");
    scanf("%d", &n);
    
    MemoryManager mm;
    mm.num_blocks = n;
    mm.num_free = n;
    
    printf("\nEnter partition sizes:\n");
    for (int i = 0; i < n; i++) {
        printf("Partition %d size: ", i + 1);
        scanf("%d", &mm.free_spaces[i]);
    }
    
    printf("\n\nMemory Layout Before Allocation:\n");
    printf("=================================\n");
    for (int i = 0; i < n; i++) {
        printf("Partition %d: [Free: %d KB]\n", i + 1, mm.free_spaces[i]);
    }
    
    int total_free = 0;
    for (int i = 0; i < n; i++) {
        total_free += mm.free_spaces[i];
    }
    printf("Total Free Memory: %d KB\n", total_free);
    
    // Process allocation requests
    int processes;
    printf("\n\nEnter number of processes to allocate: ");
    scanf("%d", &processes);
    
    int allocated_count = 0;
    printf("\n\nProcess Allocation (Worst-Fit Strategy):\n");
    printf("========================================\n");
    
    for (int i = 0; i < processes; i++) {
        int size;
        printf("\nProcess %d - Size needed: ", i + 1);
        scanf("%d", &size);
        
        int worst_partition = -1;
        int max_free = -1;
        
        // Find partition with largest free space that fits
        for (int j = 0; j < n; j++) {
            if (mm.free_spaces[j] >= size && mm.free_spaces[j] > max_free) {
                max_free = mm.free_spaces[j];
                worst_partition = j;
            }
        }
        
        if (worst_partition != -1) {
            printf("✓ Allocated to Partition %d\n", worst_partition + 1);
            printf("  Space before: %d KB -> after: %d KB\n", 
                   mm.free_spaces[worst_partition], 
                   mm.free_spaces[worst_partition] - size);
            mm.free_spaces[worst_partition] -= size;
            allocated_count++;
        } else {
            printf("✗ Allocation failed - insufficient memory\n");
        }
    }
    
    printf("\n\nMemory Layout After Allocation:\n");
    printf("================================\n");
    for (int i = 0; i < n; i++) {
        printf("Partition %d: [Free: %d KB]\n", i + 1, mm.free_spaces[i]);
    }
    
    int remaining_free = 0;
    for (int i = 0; i < n; i++) {
        remaining_free += mm.free_spaces[i];
    }
    
    printf("\nAllocation Summary:\n");
    printf("===================\n");
    printf("Processes allocated: %d/%d\n", allocated_count, processes);
    printf("Total free memory: %d KB\n", remaining_free);
    printf("External Fragmentation: %.2f%%\n", 
           (float)(remaining_free * 100) / total_free);
    
    return 0;
}
