#include<stdio.h>

int main(void)
{
	int a, b;

	scanf_s("%d", &a);
	scanf_s("%d", &b);

	if (a > 0 && b > 0)
		printf("1");
	else if (a > 0 && b < 0)
		printf("2");
	else if (a < 0 && b < 0)
		printf("3");
	else if (a > 0 && b < 0)
		printf("4");

	else
		;

	return 0;
}