#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void move(char x, char y)
{
	static i = 0;
	i++;
	printf("��%d�ΰ�%c�Ƶ�%c��\n", i, x, y);
}
void Hanoi(int n, char a, char b, char c)
{
	if (n == 1)
	{
		move(a, c);
	}
	else
	{
		Hanoi(n - 1, a, c, b);//�Ƚ���c��n-1���Ƶ�b��
		move(a, c);//�ѵ�n����a�Ƶ�c��
		Hanoi(n - 1, b, a, c);//��b��aλ�û���������ʣ��n-1����b�Ƶ�c��
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