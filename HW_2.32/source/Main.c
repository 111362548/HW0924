#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
    float weight, height, height_m, bmi;

    printf("請輸入體重(kg)：");
    scanf("%f", &weight);

    printf("請輸入身高(cm)：");
    scanf("%f", &height);

    height_m = height / 100.0f;
    bmi = weight / (height_m * height_m);

    printf("\n您的 BMI 值為：%.2f\n\n", bmi);

    printf("BMI VALUES\n");
    printf("Underweight: less than 18.5\n");
    printf("Normal:      between 18.5 and 24.9\n");
    printf("Overweight:  between 25 and 29.9\n");
    printf("Obese:       30 or greater\n");

    return 0;
}