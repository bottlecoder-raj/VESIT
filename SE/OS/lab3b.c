#include<unistd.h>
#include<sys/ipc.h>
#include<sys/sem.h>
#include<stdio.h>
int main()
{
    int semid,key,nsem,flag;
    // Define a unique key for the semaphore set
    key=(key_t)0X200f;
    // Define flags: IPC_CREAT ensures creation, 0666 sets permissions
    flag=IPC_CREAT|0666;
    // Define the number of semaphores in the set
    nsem=1;
    // semget attempts to create the semaphore set and returns the ID (semid)
    semid=semget(key,nsem,flag);
    printf("Created a semaphore with id: %d \n",semid);
}
