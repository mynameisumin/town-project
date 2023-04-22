#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int, int);
int lcm(int, int);

int main(void)
{
    int n1, n2;

    printf("두 정수 입력 : ");
    scanf("%d %d", &n1, &n2);
    printf("최대공약수 : %d\n", gcd(n1,n2));
    printf("최소공배수 : %d\n", lcm(n1,n2));

    return 0;
}
int gcd(int n1, int n2)
{
    int i, gcd=0;
    for(i=1; i<=n1&&i<=n2; i++)
    {
        if(n1%i==0 && n2%i==0)
            gcd=i;
    }
    return gcd;
}
int lcm(int n1, int n2)
{
    int i, gcd;
    for(i=1; i<=n1&&i<=n2; i++)
    {
        if(n1%i==0&&n2%i==0)
            gcd = i;
    }
    return (n1*n2)/gcd;
}