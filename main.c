#include <stdio.h>
#pragma warning(disable: 4996)

void exerc1(void)
{
	int n, r, abs_r;
	double x = 1.0;

	printf("n, r을 입력하세요 : ");
	scanf("%d %d", &n, &r);

	if (r < 0) abs_r = -r;
	else abs_r = r;

	for (int i = 0; i < abs_r; i++)
	{
		x *= n;
	}
	if (r < 0) x = 1.0 / x;

	printf("%d의 %d승은 %f 입니다.\n", n, r, x);
}

void exerc2(void)
{
	int n;
	int result = 1;
	printf("n을 입력하세요. ");
	scanf("%d", &n);
	for (int i = n; i > 0; i--) result *= i;
	printf("%d의 factorial = %d입니다.\n", n, result);
}

void exerc3(void)
{
	int n;
	int result = 0;
	int n_1 = 1;
	int n_2 = 0;

	printf("n을 입력하세요. ");
	scanf("%d", &n);

	if (n == 0) result = n_2;
	else if (n == 1) result = n_1;
	else {
		for (int i = 2; i <= n; i++)
		{
			result = n_1 + n_2;
			n_2 = n_1;
			n_1 = result;
		}
	}
	printf("%d 번째 숫자는 %d 입니다.\n", n, result);
}

void exerc4(void)
{
	int sum = 0;
	double avg;
	int score;
	int i = 0;

	while (1) {
		printf("input score : ");
		scanf("%d", &score);
		if (score == -1) break;
		sum += score;
		i++;
		printf("run\n");
	}

	if (i == 0) {
		printf("입력된 점수가 없습니다.\n");
		return;
	}
	avg = sum / (double)i;
	printf("avg = %lf\n", avg);
}

void exerc5(void)
{
	char star = '*';
	int line;
	printf("input line : ");
	scanf("%d", &line);
	for (int i = 0; i < line; i++) {
		int star_count = i * 2 + 1;

		for (int j = 0; j < star_count; j++) printf("%c", star);
		printf("\n");
	}
}

void printStar(void)
{
	char star = '*';
	int line;
	printf("input line : ");
	scanf("%d", &line);
	for (int i = 0; i < line; i++) {
		int space_count = line - i - 1;
		int star_count = i * 2 + 1;

		for (int j = 0; j < space_count; j++) printf(" ");
		for (int j = 0; j < star_count; j++) printf("%c", star);
		printf("\n");
	}
}

int main()
{
	//exerc1();
	//exerc2();
	//exerc3();
	//exerc4();
	exerc5();
	//printStar();

	return 0;
}