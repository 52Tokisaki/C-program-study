#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("***********************************\n");
	printf("*****    1.play   0.exit      *****\n");
	printf("***********************************\n");
}
void Init_Board(char board[R][C],int r,int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Display_Board(char board[R][C], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < C - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		for (j = 0; j < C; j++)
		{
			printf("___");
			if (j < C - 1)
			{
				printf("|");
			}
		}
		printf("\n");
	}
}
void Player_Move(char board[R][C],int r,int c)
{
	int x = 0;
	int y = 0;
	printf("玩家走：\n");
	printf("请输入要走的坐标：\n");
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= R && y >= 1 && y <= C)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用,请再次输入：\n");
			}
		}
		else
		{
			printf("坐标非法，请再次输入:\n");
		}
	}
}
void Computer_Move(char board[R][C], int r, int c)
{
	int x = 0;
	int y = 0;
	printf("电脑走:\n");
	while (1)
	{
		x = rand() % r;
		y = rand() % c;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[R][C],int r,int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char Judge(char board[R][C], int r, int c)
{
	for (int i = 0; i < c; i++)
	{
		if (board[i][0] == board[i][1] && board[i] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	for (int j = 0; j < c; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (1 == IsFull(board,r,c))
	{
		return 'e';
	}
	return 'c';
}