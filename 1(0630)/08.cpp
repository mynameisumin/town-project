#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//입력된 정수가 3의 배수인지 아닌지 

int main(void){
    int i;

    printf("정수 입력 : ");
    scanf("%d",&i);
    if(i%3 == 0){
        printf("입력된 수 : %d\n", i);
        printf("3의 배수\n");
    }else{
        printf("입력된 수 : %d\n", i); 
        printf("3의 배수 아님\n");
    }
    return 0;

}
