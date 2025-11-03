#include <stdio.h>
#include <unistd.h>     // for fork(), sleep()
#include <sys/wait.h>   // for wait()

int main()
{
    int i = 0, pid;

    printf("\nReady for fork\n");

    pid = fork();   // create child process

    if (pid == 0)
    {
        // Child process section
        printf("\nChild process started (PID = %d, PPID = %d)\n", getpid(), getppid());
        sleep(4);   // simulate some work
        for (i = 0; i < 10; i++)
            printf("\nChild counting: %d", i);
        printf("\nChild process ends\n");
    }
    else if (pid > 0)
    {
        // Parent process section
        printf("\nI am the parent (PID = %d, Child PID = %d)\n", getpid(), pid);
        wait(NULL);   // wait for the child to finish
        printf("\nParent process ends\n");
    }
    else
    {
        // Error handling
        printf("\nFork failed!\n");
        return 1;
    }

    return 0;
}
