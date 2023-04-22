#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findPrimeNum(int);

int main(void)
{
    int i=0;
    int num[99];
    //int n=2;
//배열저장
    for(int n=2; n<=100; n++){
        num[i]=n;
        i++;
    }
    // for(int i=0;i<98;i++)
    // {
    //     num[i]=n;
    //     n++;
    //     printf("%d ",num[i]);
    // }
//소수 검사
    for(int i=0;i<98;i++)
    {
        //printf("%d ", findPrimeNum(num[i]));
        if(findPrimeNum(num[i]))
        {
            //printf("%d ",num[i]);   
            if(findPrimeNum(num[i]+2)){
                printf("%d.%d;", num[i], num[i]+2);
            }         
        }
    }

    return 0;

}

int findPrimeNum(int n)
{
    
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
   // printf("%d \n", n);
            return n;
    
}