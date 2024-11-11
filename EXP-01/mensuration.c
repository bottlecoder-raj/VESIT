#include<stdio.h>
int main(){
   
    float L,B,R,H,area,volume,rectangle;// area for circle:volume for cylinder:rect for area of rectangle
    printf("Enter the length: ");
    scanf("%f",&L);

    printf("Enter the breadth: ");
    scanf("%f",&B);
   
    rectangle=L*B;
    printf("Area of rectangle= %f\n",rectangle);//OUTPUT
    printf("\n");

    printf("Enter the radius: ");//INPUT
    scanf("%f",&R);

    area=3.14*R*R;
    printf("Area of circle= %f\n",area);//OUTPUT

    printf("\n");

    printf("Enter the height: ");//INPUT
    scanf("%f",&H);

    volume=area*H;
    printf("Volume of cylinder= %f\n",volume);//OUTPUT




    return 0;
}
