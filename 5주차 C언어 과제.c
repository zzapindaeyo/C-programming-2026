#include <stdio.h>
#pragma warning(disable: 4996)

int main()
{
    int year;

    printf("year 입력: ");
    scanf("%d", &year);

    int leapyear = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

    if (leapyear)
    {
        printf("윤년입니다.\n");
    }
    else
    {
        printf("평년입니다.\n");
    }

    return 0;
}