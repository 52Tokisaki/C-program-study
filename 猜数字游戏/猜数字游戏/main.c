#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("*****************************\n");
	printf("*****1.������ 0.�˳���Ϸ*****\n");
	printf("*****************************\n");
}
void game()
{
	int ret = 0;
	ret = rand() % 100 + 1;
	int guess = 0;
	printf("�������:\n");
	while (1)
	{
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ��������ٴ�ѡ��\n");
			break;
		}
	} while (input);
}