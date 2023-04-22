#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void){
    double i, j;

    printf("실수값 입력 : ");
    scanf("%lf", &i);
    if(i < 0){
        j = i * -1;
        printf("%d", j);
    }else{
        j = i;
    }
    printf("입력한 수의 제곱근 : %.6lf\n", sqrt(j));
    return 0;
}