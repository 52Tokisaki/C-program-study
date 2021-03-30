#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Find_num(int pa[3][4], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;//最后一列元素
	while (x <= *px - 1 && y >= 0)
	{
		if (k > pa[x][y])//k比第一行都大，则行++
		{
			x++;
		}
		else if (k < pa[x][y])//k比最后一列都小，则列--
		{
			y--;
		}
		else
		{
			printf("找到了,下标是%d %d\n",x,y);
			break;
		}
	}
	if (x > *px - 1 || y < 0)//跳出循环，可能是找到了break，也可能是没找到走出while循环的条件范围
	{
		printf("找不到\n");
	}
}
int main()
{
	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{10,11,12,13} };
	int x = 3;
	int y = 4;
	int k = 0;
	printf("input k:\n");
	scanf("%d", &k);
	Find_num(arr, k, &x, &y);
	return 0;
}