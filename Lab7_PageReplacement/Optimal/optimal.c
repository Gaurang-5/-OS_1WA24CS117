#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FRAMES 3
#define MAX_PAGES 20

typedef struct {
    int frames[MAX_FRAMES];
    int page_faults;
    int page_hits;
} VirtualMemory;

// Optimal Page Replacement Algorithm
int main() {
    printf("Optimal Page Replacement Algorithm\n");
    printf("===================================\n\n");
    
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
    }
    
    printf("\n\nPage Replacement Process (Optimal):\n");
    printf("===================================\n");
    printf("Frames available: %d\n\n", num_frames);
    
    for (int i = 0; i < num_pages; i++) {
        int page = page_references[i];
        int found = 0;
        
        // Check if page is already in frame
        for (int j = 0; j < num_frames; j++) {
            if (vm.frames[j] == page) {
                found = 1;
                vm.page_hits++;
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
            } else {
                // Find page that will not be used for longest time
                int optimal_frame = 0;
                int max_future_distance = -1;
                
                for (int j = 0; j < num_frames; j++) {
                    int future_distance = 999999;
                    
                    for (int k = i + 1; k < num_pages; k++) {
                        if (page_references[k] == vm.frames[j]) {
                            future_distance = k - i;
                            break;
                        }
                    }
                    
                    if (future_distance > max_future_distance) {
                        max_future_distance = future_distance;
                        optimal_frame = j;
                    }
                }
                
                printf("  Page %d (not used for %d references) replaced\n", 
                       vm.frames[optimal_frame], max_future_distance);
                vm.frames[optimal_frame] = page;
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
    
    printf("\n\nNote: This is the OPTIMAL algorithm\n");
    printf("- Minimum possible page faults\n");
    printf("- Requires future knowledge (not practical)\n");
    printf("- Used as a benchmark for comparison\n");
    
    return 0;
}
