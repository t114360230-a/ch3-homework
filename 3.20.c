#include<stdio.h>
#include<stdlib.h>

int main(){
    float a,b,c;
    while(1)
    {   
        printf("enter g of hours worked(-1 to end):");
        scanf("%f",&a);
        if(a<0){
            break;
        }
        printf("enter hourly rate of the worker:");
        scanf("%f",&b);
        if(a>40){
            c=40*b+(a-40)*b*1.5;
        }
        else{
            c=a*b;
        }
            
        printf("salery is : %.2f \n",c);
    };

}