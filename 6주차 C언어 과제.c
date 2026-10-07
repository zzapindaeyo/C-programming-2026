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
    case 3:
        printf("3학년입니다.\n");
        break;
    default:
        printf("잘못된 값을 입력함\n");
        break;
    }
}


void project2() {
    printf("연도를 입력하세요 : ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d년은 윤년입니다. 2월은 29일까지 있습니다.\n", year);
    }
    else {
        printf("%d년은 평년입니다. 2월은 28일까지 있습니다.\n", year);
    }
}


int main() {
    project1();
    project2();
    return 0;
}