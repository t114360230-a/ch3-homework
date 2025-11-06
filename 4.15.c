#include <stdio.h>
#include<stdlib.h>
#include <math.h> 

int main() {
    double principal = 5000.0; 
    double rates[] = {0.10, 0.105, 0.11, 0.115, 0.12}; 
    int years = 15;
    int i;

    printf("本金 = %.2f\n", principal);
    printf("投資年限 = %d 年\n\n", years);
    printf("年利率\t15年後本利和(複利)\n");

    for (i = 0; i < 5; i++) {
        double amount = principal * pow(1 + rates[i], years); 
        printf("%.1f%%\t%.2f\n", rates[i] * 100, amount);
    }

    return 0;
}
