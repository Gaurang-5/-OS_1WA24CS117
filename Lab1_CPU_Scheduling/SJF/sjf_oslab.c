#include <stdio.h>
#include <limits.h>

struct Process
{
    int pid;   
    int at;    
    int bt;    
    int ct;    
    int tat;   
    int wt;    
    int rt;    
};

void nonPreemptiveSJF(struct Process p[], int n)
{
    int time = 0;
    int done = 0;

    int visited[20] = {0};

    while (done < n)
    {
        int idx = -1;
        int min = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (p[i].at <= time && !visited[i] && p[i].bt < min)
            {
                min = p[i].bt;
                idx = i;
            }
        }

        if (idx != -1)
        {
            p[idx].rt = time - p[idx].at;

            time += p[idx].bt;

            p[idx].ct = time;
            p[idx].tat = p[idx].ct - p[idx].at;
            p[idx].wt = p[idx].tat - p[idx].bt;

            visited[idx] = 1;
            done++;
        }
        else
        {
            time++;
        }
    }
}

void preemptiveSJF(struct Process p[], int n)
{
    int time = 0;
    int done = 0;

    int rem[20];
    int started[20] = {0};

    for (int i = 0; i < n; i++)
        rem[i] = p[i].bt;

    while (done < n)
    {
        int idx = -1;
        int min = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (p[i].at <= time && rem[i] > 0 && rem[i] < min)
            {
                min = rem[i];
                idx = i;
            }
        }

        if (idx != -1)
        {
            if (!started[idx])
            {
                p[idx].rt = time - p[idx].at;
                started[idx] = 1;
            }

            rem[idx]--;
            time++;

            if (rem[idx] == 0)
            {
                p[idx].ct = time;
                p[idx].tat = p[idx].ct - p[idx].at;
                p[idx].wt = p[idx].tat - p[idx].bt;
                done++;
            }
        }
        else
        {
            time++;
        }
    }
}

void print(struct Process p[], int n)
{
    printf("\nPID AT BT CT TAT WT RT\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d  %d  %d  %d  %d  %d  %d\n",
               p[i].pid,
               p[i].at,
               p[i].bt,
               p[i].ct,
               p[i].tat,
               p[i].wt,
               p[i].rt);
    }
}

int main()
{
    struct Process p[20];

    int n;
    int choice;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter PID AT BT\n");

    for (int i = 0; i < n; i++)
        scanf("%d %d %d", &p[i].pid, &p[i].at, &p[i].bt);

    printf("\n1. SJF Non Preemptive\n");
    printf("2. SJF Preemptive (SRTF)\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            nonPreemptiveSJF(p, n);