#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
    int pid;
    pid = fork();                // Create a child process

    if (pid == 0)
    {
        printf("\n fork program started");
        execlp("/bin/ls", "ls", NULL);   // Replace child with 'ls' program
    }
    else
    {
        printf("\nend");
    }
}
