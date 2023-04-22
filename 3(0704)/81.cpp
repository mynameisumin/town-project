#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//초 입력해서 시:분:초로 표시하는 프로그램
int main(void)
{
    int sec, hour, min, minute, second;
    printf("계산할 초를 입력하시오 : ");
    scanf("%d", &sec);

    min=sec/60; 
	hour=min/60; 
	second=sec%60; 
	min=min%60; 

    printf("%02d초=%02d시:%02d분:%02d초", sec, hour, min, second);
}