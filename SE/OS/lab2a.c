#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int pid = fork();

    if(pid == 0)
    {
        printf("\n I am the child");
        printf("\n I am the parent : %d", getppid());
        printf("\n I am the child : %d\n", getpid());
    }
    else
    {
        wait(NULL); // wait for child to finish
        printf("\n I am the parent ");
        printf("\n I am the parents parent : %d", getppid());
        printf("\n I am the parent : %d\n", getpid());
    }
    return 0;
}
