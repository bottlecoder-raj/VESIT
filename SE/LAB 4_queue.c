#include<stdio.h>
#include <stdlib.h>

#define max 50
void insert();
void delete();
void display();
int queue_array[max];
int rear = -1;
int front = -1;

int main()
{
    int choice;
    while (1)
    {
        printf("\n---------------------------------------------\n1.Insert \n2.Delete \n3.Display \n4.Quit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            insert();
            break;
             case 2:
          delete();
            break;
             case 3:
            display();
            break;
             case 4:
           exit(1);
            default:
            printf("Wrong choice!\n");
        }
    }
}
void insert(){
    int add_element;
    if(rear == max-1){
        printf("Queue is OVERFLOW!\n");
    }
    else{
            if(front ==-1);
            front =0;
            printf("Insert the element in queue: ");
            scanf("%d",&add_element);
            rear++;
            queue_array[rear]=add_element;

    }
}
void delete(){
    if (front ==-1 || front>rear){
        printf("Queue is UNDERFLOW!\n");
    }
    else{
        printf("Element deleted from queue is: %d\n",queue_array[front]);
        front++;
    }
}
void display(){
    int i;
    if(front == -1 || front>rear ){
        printf("Queue is empty\n");}
        else{
            printf("Queue is: ");
            for(int i =front;i<=rear;i++){
                printf("%d ",queue_array[i]);
                }

        printf("\n");
    }}
