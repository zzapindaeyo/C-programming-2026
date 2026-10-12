#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <windows.h>

int main(void)
{
    //평균점수
    double mid, final, ass;

    printf("중간, 기말, 과제 점수를 입력하세요: ");
    scanf("%lf %lf %lf", &mid, &final, &ass);
    double weighted_score = mid * 0.3 + final * 0.4 + ass * 0.3;
    printf("weighted_score=%.2f\n", weighted_score);

    //BMI
    double hei, wei;

    printf("키와 몸무게를 입력하세요: ");
    scanf("%lf %lf", &hei, &wei);
    double hei_m = hei / 100.0;  
    double bmi = wei / (hei_m * hei_m);
    printf("bmi=%.2f\n", bmi);

    return 0;
}
