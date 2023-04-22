#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2월 : 28일
// 1, 3, 5, 7, 8, 10, 12월 : 31일
// 4, 6, 9, 11월 : 30일
int main(void){
    int i, year, month, date, day;

    printf("연 월 일 입력 : ");
    scanf("%d %d %d", &year, &month, &date);

    for(i=1; i<=month; i++){
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
        day += 31;
        else if(i==2){
            day += 28;
        }
        else{
            day += 30;
        }
    }
        printf("%d년 %d월 %d일은 올해의 %d번째 날 입니다.\n", year, month, date, day);
    
    return 0;
}