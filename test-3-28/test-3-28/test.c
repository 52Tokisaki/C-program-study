#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

void BitReverse(int n)
{
	if (n < 10)
	{
		printf("%d", n);
	}
	else
	{
		printf("%d", n % 10);
		BitReverse(n / 10);
	}

}
int main()
{
	int n = 0;
	printf("������һ��1000-2999������\n");
	scanf("%d", &n);
	BitReverse(n);
	return 0;
}