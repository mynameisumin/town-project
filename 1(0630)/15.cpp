#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int i, month;

    printf("12월 중 하나 입력 : ");
    scanf("%d", &i);
    if(i >= 3 && i <= 5){
        month = 1;
    }if(i >= 6 && i <= 8){
        month = 2;
    }if(i >= 9 && i <= 11){
        month = 3;
    }if(i == 12 || i == 1 || i == 2){
        month = 4; 
    }
    if(i >= 1 || i <= 12){
        switch(month){
            case 1:
                printf("보옴\n");
                break;
            case 2:
                printf("여름\n");
                break;
            case 3:
                printf("가을\n");
                break;
            case 4:
                printf("겨울\n");
                break;
            default:
                printf("입력이 잘 못 되었습니다.");
                break;
        }
    }
}