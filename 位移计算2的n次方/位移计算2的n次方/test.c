#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		printf("%d\n", 1 << n);
	}
	return 0;
}