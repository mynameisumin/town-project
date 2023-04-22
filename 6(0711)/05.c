#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{   
    int i, j, sum;
    int arr[i][j];

    for(i=0; i<2; i++)
    {
        //scanf("%d", &arr[i][j]);
        for(j=0; j<5; j++)
        {
            scanf("%d", &arr[i][j]);
             sum += arr[i][j];
        }
    }
    
    printf("sum : %d\n", sum); 

    return 0;
}