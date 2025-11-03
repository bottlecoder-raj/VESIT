#include <stdio.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

#define MSGSIZE 16   // buffer size for message

int main()
{
    char *msg = "hello world";
    char inbuff[MSGSIZE];
    int p[2], pid;

    pipe(p);       // create pipe

    pid = fork();  // create child process

    if (pid > 0)
    {
        // Parent process
        close(p[0]);  // close read end
        write(p[1], msg, strlen(msg) + 1);  // include null terminator
        close(p[1]);  // done writing
        wait(NULL);   // wait for child to finish
    }
    else if (pid == 0)
    {
        // Child process
        close(p[1]);  // close write end
        read(p[0], inbuff, MSGSIZE);
        printf("Child received: %s\n", inbuff);
        close(p[0]);  // done reading
    }
    else
    {
        // fork() failed
        printf("Fork failed!\n");
        return 1;
    }

    return 0;
}
