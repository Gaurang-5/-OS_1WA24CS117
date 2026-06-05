#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FRAMES 3
#define MAX_PAGES 20

typedef struct {
    int frames[MAX_FRAMES];
    int page_faults;
    int page_hits;
    int frame_pointer;
} VirtualMemory;

// FIFO Page Replacement Algorithm
int main() {
    printf("FIFO Page Replacement Algorithm\n");
    printf("================================\n\n");
    
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
    vm.frame_pointer = 0;
    
    for (int i = 0; i < num_frames; i++) {
        vm.frames[i] = -1;
    }
    
    printf("\n\nPage Replacement Process (FIFO):\n");
    printf("=================================\n");
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
            vm.frames[vm.frame_pointer] = page;
            vm.frame_pointer = (vm.frame_pointer + 1) % num_frames;
            vm.page_faults++;
        }
        
        printf("Reference %d (Page %d): %s\n", i + 1, page, 
               found ? "HIT - Already in memory" : "FAULT - Page replaced");
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
    
    printf("\n\nNote: FIFO may suffer from Belady's anomaly\n");
    printf("(increasing frames can increase page faults)\n");
    
    return 0;
}
