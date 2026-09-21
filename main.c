#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	float inch, Celsius;
	float cm, ;
	float Fahrenheit;

	scanf("%f %f", &inch, &Celsius);
	printf("%f %f", inch, Celsius);

	cm = inch * 2.54;
	Fahrenheit = (Celsius * 1.8) + 32;

	printf("%.1f\n", cm);
	printf("%.1f\n", Fahrenheit);

	return 0;
}