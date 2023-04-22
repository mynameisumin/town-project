#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int PrintTomorrow(int y, int m, int d);

int main(void)
{
    int  year, mon, date;

    printf("연, 월, 일을 순차적으로 입력해주세요 : ");
    scanf("%d%d%d", &year, &mon, &date);

    PrintTomorrow(year, mon, date);


    return 0;
}

int PrintTomorrow(int y, int m, int d)
{
    static int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (y % 4 == 0 && y % 100 != 0)
    {
        days[2] = 29;
    }
    else if (y % 400 == 0)
    {
        days[2] = 29;
    }
    if (d > days[m] || m < 1 || m > 12 || y < 0)
    {
        printf("날짜 입력 오류!\n");
        return -1;
    }

    d++;
    if (d>days[m])
    {
        d = 1;
        m++;
        if (m == 13)
        {
            m = 1;
            y++;
        }
    }
    printf("다음날은 %d년 %d월 %d일 입니다\n", y, m, d);
    if (days[2] == 29)
    {
        days[2] = 28;
    }

    return 0;
}