#include <stdio.h>

int stack[100], ch, n, top, x,i;
void push(void);
void pop(void);
void display(void);

int main(){

top = -1;
printf("Enter size of Stack [Max = 100] : ");
scanf("%d",&n);
printf("\n Stack Operations using array :");
printf("\n----------------------------------");
printf("\n\t 1. PUSH \n\t 2. POP \n\t 3. DISPLAY \n\t 4. EXIT");

do{


    printf("\n Enter the choice : ");
    scanf("%d",&ch);
    switch(ch){
    case 1: push();
    break;
    case 2: pop();
    break;
    case 3: display();
    break;
    case 4: printf("\t EXIT POINT......\n\n");
    break;
    default: printf("\n\t Please enter a valid choice. { 1 , 2 , 3, 4 }");
    }
}
while(ch!=4);
return 0;
}

void push(){
if(top>=n-1){
    printf("\n\t Stack is OVERFLOW");
}
else{
    printf("Enter a value to be pushed : ");
    scanf("%d",&x);
    top++;
    stack[top]=x;
}
}


void pop(){
if(top<=-1){
    printf("\n\t Stack is UNDERFLOW.");
}
else{
    printf("\n\tThe popped elements is %d",stack[top]);
    top--;
}
}



void display(){
    if(top>=0){
        printf("\n The elements in STACK\n");
        for(i=top; i>=0; i--){
            printf("\n %d",stack[i]);

        }
        }else{
            printf("\n The STACK is empty");
        }

    }



