#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0;
	char a[33] = "00000000000000000000000000000000\0";
	int i = 31;
	printf("input n:\n");
	scanf("%d", &n);
	while (n)
	{
		if (n % 2 == 0)
		{
			a[i] = '0';
		}
		else
		{
			a[i] = '1';
		}
		n /= 2;
		i--;
	}
	printf("二进制为%s\n", a);
	return 0;
}