#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


double SphereVolume(double);

int main(void)
{
    int r;

    printf("구 반지름 입력 : ");
    scanf("%d", &r);
    printf("구의 부피 : %.2f\n", SphereVolume(r));

    return 0;
}
double SphereVolume(double r)
{
    double SV;
    SV=(4.0/3.0)*3.14*r*r*r;
    
    return SV;
}