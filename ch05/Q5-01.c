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
	printf("������ �Է��ϼ���. : ");
	scanf("%d", &x);
	printf("%d�� �������� ���� %d���Դϴ�.\n", x, factorial(x));
}