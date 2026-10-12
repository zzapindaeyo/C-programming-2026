#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <windows.h>
#include <stdio.h>

void exerc1(void)
{
    double inch, cm;

    printf("inch를 입력하세요: ");
    scanf("%lf", &inch);

    cm = inch * 2.54;

    printf("%.2f inch = %.2f cm\n", inch, cm);
}

void exerc2(void)
{
    double C, F;

    printf("섭씨를 입력하세요: ");
    scanf("%lf", &C);

    F = C * 9.0 / 5.0 + 32.0;

    printf("%.2f C = %.2f F\n", C, F);
}

void exerc3(void)
{
    double radius, area;
    double pi = 3.141592;

    printf("원의 반지름을 입력하세요: ");
    scanf("%lf", &radius);

    area = pi * radius * radius;

    printf("원의 넓이 = %.2f\n", area);
}
void exerc4(void)
{
    int total;
    scanf("%d", &total);
    
    int hours = total / 3600;
    total %= 3600;
    int minutes = total / 60;
    total %= 60;
    int seconds = total / 60;
    total %= 60;

    printf("%d hours %d mins %d sec\n", hours, minutes, seconds);

}

void exerc5(void)
{
    int score1 = 75;
    int attendance = 85;
    int passed = score1 >= 60 && attendance >= 80;
}

void exerc6(void)
{
#define READ  0x01
#define WRITE 0x02
#define EXEC  0x04

    unsigned int permission = READ | WRITE;
    permission |= EXEC;
    printf("permission = 0x%02X\n", permission);
    return 0;
}

void exerc7(void)
{
    int year;
    scanf("%d", &year);
    printf("%d", (year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
    return 0;
}


int main(void)
{
    exerc1();
    exerc2();
    exerc3();
    exerc4();
    exerc5();
    exerc6();
    exerc7();

    return 0;
}
