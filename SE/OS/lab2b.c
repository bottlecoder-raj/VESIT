#include <stdio.h>
#include <unistd.h>

int main()
{
    char *temp[3];
    temp[0] = "ls";             // command
    temp[1] = "-l";             // argument
    temp[2] = (char *)0;        // marks end of argument list

    execv("/bin/ls", temp);     // execute /bin/ls with arguments
    printf("this will not print\n"); // will NOT execute if execv() succeeds
}
