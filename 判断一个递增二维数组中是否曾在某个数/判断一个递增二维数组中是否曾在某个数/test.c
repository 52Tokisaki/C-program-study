#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Find_num(int pa[3][4], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;//���һ��Ԫ��
	while (x <= *px - 1 && y >= 0)
	{
		if (k > pa[x][y])//k�ȵ�һ�ж�������++
		{
			x++;
		}
		else if (k < pa[x][y])//k�����һ�ж�С������--
		{
			y--;
		}
		else
		{
			printf("�ҵ���,�±���%d %d\n",x,y);
			break;
		}
	}
	if (x > *px - 1 || y < 0)//����ѭ�����������ҵ���break��Ҳ������û�ҵ��߳�whileѭ����������Χ
	{
		printf("�Ҳ���\n");
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