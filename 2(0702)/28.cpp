#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double bmi, height, weight;

    printf("키 입력 : ");
    scanf("%lf", &height);
    height = height / 100;

    printf("몸무게 입력 : ");
    scanf("%lf", &weight);

    bmi = weight / (height * height);

    printf("당신의 BMI는 %.1f입니다.\n", bmi);
    if (bmi >= 30)
    printf("비만");
    if (bmi >= 25 && bmi <= 29)
    printf("과체중");
    if (bmi >= 20 && bmi <= 24)
    printf("정상");
    if (bmi <= 20)
    printf("저체중");
    printf("\n");

}