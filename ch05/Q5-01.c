#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;

	return sum;
}

int main(void)
{
	int x;
	printf("정수를 입력하세요. : ");
	scanf("%d", &x);
	printf("%d의 순차곱셈 값은 %d이입니다.\n", x, factorial(x));
}