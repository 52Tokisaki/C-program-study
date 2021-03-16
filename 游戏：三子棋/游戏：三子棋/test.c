#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game()
{
	char ret = 0;
	char board[R][C] = { 0 };
	Init_Board(board, R, C);
	Display_Board(board, R, C);
	while (1)
	{
		Player_Move(board, R, C);
		Display_Board(board, R, C);
		ret = Judge(board, R, C);
		if (ret != 'c')
		{
			break;
		}
		Computer_Move(board, R, C);
		Display_Board(board, R, C);
		ret = Judge(board, R, C);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家获胜\n");
	}
	else if (ret == '#')
	{
		printf("电脑获胜\n");
	}
	else
	{
		printf("平局\n");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("输入错误，请再次输入:\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}