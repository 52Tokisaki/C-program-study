#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int Fib(int m, int k)
{
	if (m < 0 || k < 2)
	{
		printf("输入非法，请重新输入\n");
	}
	if (m < k - 1)
	{
		return 0;
	}
	else if (m == k - 1)
	{
		return 1;
	}
	else
	{
		int* pFib = (int*)malloc(m * sizeof(int));
		for (int i = 0; i < k - 1; i++)
		{
			pFib[i] = 0;
		}
		pFib[k - 1] = 1;
		pFib[k] = 1;
		//for (int j = k; j <= m; j++)
		//{
		//	pFib[j] = 2 * pFib[j - 1] - pFib[j - k - 1];
		//}
		int j = k + 1 - k - 1;
		for (int i = k + 1; i <= m; i++, j++)
		{
			pFib[i] = 2 * pFib[i - 1] - pFib[j];
		}
		return pFib[m];
	}
}

int main()
{
	int m, k;
	printf("input m and k:\n");
	scanf("%d %d", &m, &k);
	int ret = Fib(m, k);
	printf("%d\n", ret);
	return 0;
}

