#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void move(char x, char y)
{
	static i = 0;
	i++;
	printf("第%d次把%c移到%c上\n", i, x, y);
}
void Hanoi(int n, char a, char b, char c)
{
	if (n == 1)
	{
		move(a, c);
	}
	else
	{
		Hanoi(n - 1, a, c, b);//先借助c把n-1个移到b上
		move(a, c);//把第n个从a移到c上
		Hanoi(n - 1, b, a, c);//把b和a位置互换，即把剩下n-1个从b移到c上
	}
}
int main()
{
	int n = 0;
	printf("please input n:\n");
	scanf("%d", &n);
	Hanoi(n, 'A', 'B', 'C');
	return 0;
}