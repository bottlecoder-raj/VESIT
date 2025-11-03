#include <stdio.h>
void main()
{
    int arrival[10], burst[10], start[10], finish[10], wait[10], turn[10];
    int i, j, n, sum = 0;
    float totalwait = 0.0, totalturn = 0.0;
    float avgwait = 0.0, avgturn = 0.0;

    start[0] = 0; // First process starts at time 0

    printf("Enter number of Process: ");
    scanf("%d", &n);

    // Input arrival and burst times
    for (i = 0; i < n; i++)
    {
        printf("\nEnter process %d Arrival and Burst time: ", (i + 1));
        scanf("%d %d", &arrival[i], &burst[i]);
    }

    // Calculate start times
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < i; j++)
        {
            sum = sum + burst[j];
        }
        start[i] = sum;
    }

    // Calculate finish, wait, and turnaround times
    for (i = 0; i < n; i++)
    {
        finish[i] = burst[i] + start[i];
        wait[i] = start[i] - arrival[i];
        turn[i] = burst[i] + wait[i];
    }

    // Compute total and average
    for (i = 0; i < n; i++)
    {
        totalwait += wait[i];
        totalturn += turn[i];
    }
    avgwait = totalwait / n;
    avgturn = totalturn / n;

    // Print table
    printf("\n Arrival  Burst  Start  Finish  Wait  Turn\n");
    for (i = 0; i < n; i++)
    {
        printf("%7d %6d %6d %7d %5d %5d\n", arrival[i], burst[i], start[i], finish[i], wait[i], turn[i]);
    }

    printf("\nAverage waiting time = %.2f", avgwait);
    printf("\nAverage turnaround time = %.2f\n", avgturn);

 }
