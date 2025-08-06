#include<stdio.h>
int main(){
float bill,net;
printf("Enter the bill amount: ");
scanf("%f",&bill);
if(bill<1000)
{
    printf("No discount is applied.\n");
    printf("Net Amount:%.2f",bill);
}
else if(bill>5000){
    printf("10%% Discount applied!\n");
    net=0.10*bill;
    bill=bill-net;
    printf("Net Amount:%.2f",bill);
}
else if(bill>1000 || bill<5000){
    printf("5%% Discount applied!\n");
    net=0.05*bill;
    bill=bill-net;
    printf("Net Amount:%.2f",bill);

}



return 0;
}
