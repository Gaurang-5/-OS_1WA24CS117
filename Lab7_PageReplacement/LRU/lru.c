#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FRAMES 3
#define MAX_PAGES 20

typedef struct {
    int frames[MAX_FRAMES];
    int last_used[MAX_FRAMES];
    int page_faults;
    int page_hits;
} VirtualMemory;

// LRU Page Replacement Algorithm
int main() {
    printf("LRU (Least Recently Used) Page Replacement Algorithm\n");
    printf("====================================================\n\n");
    
    int num_frames;
    printf("Enter number of frames: ");
    scanf("%d", &num_frames);
    
    int num_pages;
    printf("Enter number of page references: ");
    scanf("%d", &num_pages);
    
    int page_references[MAX_PAGES];
    printf("\nEnter page reference string:\n");
    for (int i = 0; i < num_pages; i++) {
        printf("Reference %d: ", i + 1);
        scanf("%d", &page_references[i]);
    }
    
    VirtualMemory vm;
    vm.page_faults = 0;
    vm.page_hits = 0;
    
    for (int i = 0; i < num_frames; i++) {
        vm.frames[i] = -1;
        vm.last_used[i] = -1;
    }
    
    printf("\n\nPage Replacement Process (LRU):\n");
    printf("===============================\n");
    printf("Frames available: %d\n\n", num_frames);
    
    for (int i = 0; i < num_pages; i++) {
        int page = page_references[i];
        int found = 0;
        int found_index = -1;
        
        // Check if page is already in frame
        for (int j = 0; j < num_frames; j++) {
            if (vm.frames[j] == page) {
                found = 1;
                found_index = j;
                vm.page_hits++;
                vm.last_used[j] = i;
                break;
            }
        }
        
        if (!found) {
            // Check for empty frame
            int empty_frame = -1;
            for (int j = 0; j < num_frames; j++) {
                if (vm.frames[j] == -1) {
                    empty_frame = j;
                    break;
                }
            }
            
            if (empty_frame != -1) {
                vm.frames[empty_frame] = page;
                vm.last_used[empty_frame] = i;
            } else {
                // Find least recently used frame
                int lru_frame = 0;
                int min_time = vm.last_used[0];
                
                for (int j = 1; j < num_frames; j++) {
                    if (vm.last_used[j] < min_time) {
                        min_time = vm.last_used[j];
                        lru_frame = j;
                    }
                }
                
                printf("  Page %d (LRU) replaced\n", vm.frames[lru_frame]);
                vm.frames[lru_frame] = page;
                vm.last_used[lru_frame] = i;
            }
            
            vm.page_faults++;
        }
        
        printf("Reference %d (Page %d): %s\n", i + 1, page, 
               found ? "HIT - Already in memory" : "FAULT - Page replacement");
        printf("  Frames: ");
        for (int j = 0; j < num_frames; j++) {
            if (vm.frames[j] == -1) {
                printf("[ ] ");
            } else {
                printf("[%d] ", vm.frames[j]);
            }
        }
        printf("\n");
    }
    
    printf("\n\nStatistics:\n");
    printf("===========\n");
    printf("Total page references: %d\n", num_pages);
    printf("Page faults: %d\n", vm.page_faults);
    printf("Page hits: %d\n", vm.page_hits);
    printf("Hit ratio: %.2f%%\n", (vm.page_hits * 100.0) / num_pages);
    printf("Page fault ratio: %.2f%%\n", (vm.page_faults * 100.0) / num_pages);
    
    printf("\n\nAdvantage: Better performance than FIFO\n");
    printf("No Belady's anomaly issue\n");
    
    return 0;
}
