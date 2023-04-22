#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//do~while문 이용해 다음 식 계산하는 프로그램 
//최초 5000 초과할 때 그때의 n 값 얼마인지 계산
//sum=2제곱+4제곱+6제곱+8제곱...+n제곱
int main(void)
{
    int i=0, sum=0;
    int n;
    do{
        i++;
        if(i%2==0){
            n = (i)*(i);
            sum += n;
            printf("sum: %4d num: %2d\n", sum, (i));
        }
    }while(sum<5000);  
       //n구하게끔 하는거
    printf("n: %d\n", i);

    return 0;
}
    