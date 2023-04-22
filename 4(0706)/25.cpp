#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//임의 두 정 수 입력해 그 사이 모든 수 합 
//while이용
//두 정수 순서 바뀌어도 가능하게
//1 50 / 50 1 같은 값 나오게
int main(void)
{
    int num1, num2, i, sum;

    printf("임의의 두 정수 입력 : ");
    scanf("%d%d", &num1, &num2);

    if(num1 < num2){ 
        for(i=(num1+1); i<num2; i++){
            printf("%d ", i);
            sum += i;
        }
        printf("\n");
        printf("sum : %d\n", sum);
    }else if(num1>num2){
        for(i=(num2+1); i<num1; i++){
            printf("%d ", i);
            sum += i;
        }
        printf("\n");
        printf("sum : %d\n", sum);
    }
}