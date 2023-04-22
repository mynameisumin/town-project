#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char food;

    printf("(C) coffee\n");
    printf("(D) doughnut\n");
    printf("(H) hamburger\n");
    printf("(P) pizza\n");
    printf("(S) spaghetti\n");
    printf("(T) tea\n");
    printf("(Q) quit\n");
    printf("what do you want?\n");
    scanf("%s", &food);

    switch(food){
        case 'C':
            printf("(C) coffee\n");
            break;
        case 'D':
            printf("(D) doughnut\n");
            break;
        case 'H':
            printf("(H) hamburger\n");
            break;
        case 'P':
             printf("(P) pizza\n");
            break;
        case 'T':
            printf("(T) tea\n");
            break;
        case 'Q':
            printf("(Q) quit\n");
            break;
        default:
            break;
    }
    return 0;
}