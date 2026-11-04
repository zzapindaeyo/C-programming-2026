#include <stdio.h>
#include "myheader.h"

double power(double n, int r)
{
	double x = 1.0;
	int abs_r = (r < 0) ? -r : r;

	for (int i = 0; i < abs_r; i++)
		x *= n;

	if (r < 0) x = 1.0 / x;
	return x;
}

int factorial(int n)
{
	if (n <= 1) return 1;
	else return n * factorial(n - 1);
}

int fibonacci(int n)
{
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else return fibonacci(n - 1) + fibonacci(n - 2);
}

int combination(int n, int r)
{
	int result = 1;
	for (int i = 1; i <= r; i++)
		result = result * (n - r + i) / i;
	return result;
}

void printStar(int line)
{
	for (int i = 0; i < line; i++) {
		int space_count = line - i - 1;
		int star_count = i * 2 + 1;

		for (int j = 0; j < space_count; j++) printf(" ");
		for (int j = 0; j < star_count; j++) printf("*");
		printf("\n");
	}
}