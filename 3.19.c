#include<stdio.h>
#include<stdlib.h>

int main(){
    float a,b,c,d;
    while (1)
    {
       printf("enter loan principal(-1 to end):");
        scanf("%f",&a);
         if(a<0){
            break;
        }
        printf("enter interest rate:");
        scanf("%f",&b);
        printf("enter term of the loan in days:");
        scanf("%f",&c);
        d=a*b*c/365;
        printf("interest charge is : %.2f \n",d);
    }
    
    
}