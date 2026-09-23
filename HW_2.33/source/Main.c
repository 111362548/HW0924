#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    float total_miles;      // 每日總里程
    float cost_per_gallon;  // 油價/加侖
    float miles_per_gallon; // 每加侖里程
    float parking_fees;     // 停車費
    float tolls;            // 過路費
    float daily_cost;       // 每日總費用

    printf("請輸入每日行駛總英哩數：");
    scanf("%f", &total_miles);

    printf("請輸入每加侖汽油費用：");
    scanf("%f", &cost_per_gallon);

    printf("請輸入每加侖平均行駛英哩數：");
    scanf("%f", &miles_per_gallon);

    printf("請輸入每日停車費：");
    scanf("%f", &parking_fees);

    printf("請輸入每日過路費：");
    scanf("%f", &tolls);

    daily_cost = (total_miles / miles_per_gallon) * cost_per_gallon + parking_fees + tolls;

    printf("\n您每日開車上班的總費用為：$%.2f\n", daily_cost);

    return 0;
}