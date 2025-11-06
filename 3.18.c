#include<stdio.h>
#include<stdlib.h>

int main(){
    float a,b;
    while(1)
    {   
        printf("enter sales in dollars(-1 to end):");
        scanf("%f",&a);
        if(a<0){
            break;
        }
        b=200+a*0.09;
        printf("salery is : %.2f \n",b);
    };
    
}