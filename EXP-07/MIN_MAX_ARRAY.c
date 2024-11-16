#include <stdio.h>

int main(){
    
int x[10]={33,444,55,66,77,88,98,92,34,86};
int min=100,max=1;
for(int i=0;i<10;i++){
    if(min>x[i]){
        min=x[i];
    }
   
}
for(int i=0;i<10;i++){
    if(max<x[i]){
        max=x[i];
    }
  
}

printf("min=%d\t max=%d",min,max);

    return 0;
}
