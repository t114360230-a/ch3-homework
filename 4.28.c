#include <stdio.h>
#include<stdlib.h>

int main() {
    int code;
    double weeklySalary, hours, rate, grossSales, piecePay;
    
    printf("輸入員工類別代碼 (1=經理, 2=時薪工, 3=抽佣工, 4=零工): ");
    scanf("%d", &code);

    switch (code) {
        case 1:
            printf("輸入經理固定週薪: ");
            scanf("%lf", &weeklySalary);
            printf("本週薪資 = %.2f\n", weeklySalary);
            break;
        case 2:
            printf("輸入每小時工資: ");
            scanf("%lf", &rate);
            printf("輸入本週工時: ");
            scanf("%lf", &hours);
            if (hours <= 40)
                weeklySalary = rate * hours;
            else
                weeklySalary = 40 * rate + (hours - 40) * rate * 1.5;
            printf("本週薪資 = %.2f\n", weeklySalary);
            break;
        case 3:
            printf("輸入本週銷售總額: ");
            scanf("%lf", &grossSales);
            weeklySalary = 250 + grossSales * 0.057;
            printf("本週薪資 = %.2f\n", weeklySalary);
            break;
        case 4:
            printf("輸入每件工資: ");
            scanf("%lf", &piecePay);
            printf("輸入本週完成件數: ");
            scanf("%lf", &hours); // reuse hours for count
            weeklySalary = piecePay * hours;
            printf("本週薪資 = %.2f\n", weeklySalary);
            break;
        default:
            printf("輸入錯誤！\n");
            break;
    }

    return 0;
}
