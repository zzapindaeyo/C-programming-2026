#include <stdio.h>

void project1() {
    int grade;
    printf("학년을 입력하세요 : ");
    scanf("%d", &grade);

    //if (grade == 1) {
    //    printf("1학년입니다.\n");
    //}
    //else if (grade == 2) {
    //    printf("2학년입니다.\n");
    //}
    //else if (grade == 3) {
    //    printf("3학년입니다.\n");
    //}
    //else {
    //    printf("잘못된 값을 입력함\n");
    //}
    //
    switch (grade) {
    case 1:
        printf("1학년입니다.\n");
        break;
    case 2:
        printf("2학년입니다.\n");
        break;
    case 3
        printf("3학년입니다.\n");
        break;
    default:
        printf("잘못된 값을 입력함\n");
        break;
    }
}


void project2() {
    int year;
    int month;
    int days;

    printf("연도 입력 : ");
    scanf("%d", &year);

    printf("월 입력(1~12) : ");
    scanf("%d", &month);

    switch (month) {
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days = 29;
        }
        else {
            days = 28;
            break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    default:
        days = 31;
        break;
        }

        printf("%d년 %d월은 %d일까지 있습니다.\n", year, month, days);
    }

}


int main() {
    project1();
    project2();
    
    return 0;
}
