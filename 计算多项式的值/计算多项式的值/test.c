#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int AddPoly()
{
	int n = 0;
	int x = 0;
	printf("����������n:\n");
	scanf("%d", &n);
	int* pa = (int*)malloc(n * sizeof(int));
	printf("������x:\n");
	scanf("%d", &x);
	printf("�뽫a0��an-1�������룺\n");
	int sum = 0;
	int y = 1;//y���ڴ��x��i�η�
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &pa[i]);
		sum += y * pa[i];
		y *= x;
	}
	return sum;
}
int main()
{
	int ret = AddPoly();
	printf("%d\n", ret);
	return 0;
}