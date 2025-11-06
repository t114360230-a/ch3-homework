#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b,c,d,e,f;
    printf("請輸入帳戶號碼:");
    scanf("%d,",&a);
    printf("請輸入月初帳戶餘額:");
    scanf("%d,",&b);
    printf("請輸入所有消費總額:");
    scanf("%d,",&c);
    printf("請輸入顧客支付總額:");
    scanf("%d,",&d);
    printf("請輸入核准的信用額度:");
    scanf("%d,",&e);
    f=b+c-d;
    if(f<e)
    {   printf("帳戶:%d\n",a);
        printf("信用額度:%d\n",e);
        printf("新餘額:%d\n",f);
        printf("credit limit exceeded");
    };
        
}