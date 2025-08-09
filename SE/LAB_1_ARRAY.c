
#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
int size;
int arr[20];
void create(){
     printf("Enter size of array :");
    scanf("%d",&size);
    arr[size];
    for(int i=1;i<=size;i++){
    printf("Enter element %d: ",i);
    scanf("%d",&arr[i-1]);

    }
}

void display(){
printf("\n\nArray elemnts:[");
    arr[size];
    for(int j=0;j<size;j++){
        printf("%d ",arr[j]);
    }
    printf("]\n");

}
void insert(){
     size=size+1;
    arr[size];
    int pos,val;
    printf("Enter position to insert element:");
    scanf("%d",&pos);
    printf("Enter value to insert:");
    scanf("%d",&val);
    for(int i=size;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=val;

}
void update(){
arr[size];
int pos;
printf("Enter position to update:");
scanf("%d",&pos);
printf("Enter value to update:");
scanf("%d",&arr[pos]);
}
void del(){
    int pos;
     printf("\nSet the positon of the element:");
    scanf("%d",&pos);
    for(int i=pos;i<size;i++){
    arr[i]=arr[i+1];
    }
    size=size-1;

}
int main() {
int menu;
while(1){
printf("--------------------------------------------------------------------\nChoose to proceed:\n1.Create\n2.Display\n3.Insert\n4.Delete\n5.Update\n6.Exit\n");
printf("Enter number to proceed:");
scanf("%d",&menu);
switch(menu){
    case 1:
        create();
        break;
    case 2:
        display();
        break;
    case 3:
       insert();
        break;
    case 4:
        del();
        break;
    case 6:
        goto label;
        break;
    case 5:
        update();
        break;
    default:
        printf("Invalid input!!!\n");
        break;

}
}

label:return 0;
}
