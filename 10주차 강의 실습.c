#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#pragma warning(disable:4996)

int main()
{
	int num[30];
	srand(time(NULL));
	for (int i = 0; i < 30; i++) num[i] = rand() % 101;
	for (int i = 0; i < 30; i++)
	{
		if (i % 10 == 0) printf("\n");
		printf("%3d ", num[i]);
	}

}