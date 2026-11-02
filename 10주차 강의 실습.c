#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define SIZE 10
#pragma warning(disable:4996)

int main()
{
    int num[SIZE];
    int max, min;
    int sum = 0;

    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        num[i] = rand() % 101;
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%2d번 학생 : %3d점\n", i + 1, num[i]);
    }

    max = num[0];
    min = num[0];

    for (int i = 0; i < SIZE; i++)
    {
        if (num[i] > max) max = num[i];
        if (num[i] < min) min = num[i];
        sum += num[i];
    }

    printf("최댓값: %d점\n", max);
    printf("최솟값: %d점\n", min);
    printf("평균: %.2f점\n", (double)sum / SIZE);

    return 0;
}
