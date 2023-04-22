#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int i, j, even, odd, even_sum, odd_sum;

    for(i=1; i <= 100; i++)
    {
        if(i%2 == 0)
        {
            even_sum += i;
        }if(i%2 == 1)
        {
            odd_sum += i;
        }

    }
    printf("짝수의 합 : %d\n", even_sum);
    printf("홀수의 합 : %d\n", odd_sum);

    return 0;
}