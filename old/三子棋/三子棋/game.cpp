#define _CRT_SECURE_NO_WARNINGS

#include "game.h"



void menu()
{
	printf("****************************\n");
	printf("*******  1. 开始游戏  ******\n");
	printf("*******  0. 退出游戏  ******\n");
	printf("****************************\n");
}


void clearboard(char board[ROW][COL], int row, int col)//清空棋盘
{
	int i = 0;
	int j = 0;

	for ( i = 0; i < ROW; i++)
	{
		for ( j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}


void Displayboard(char board[ROW][COL], int row, int col)//打印棋盘
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col-1)
				printf("|");
		}
		printf("\n");
		if (i < row-1)
		{
			for ( j = 0; j < col; j++)
			{
				printf("---");
					if (j < col - 1)
						printf("|");
			}
			
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋\n");
	while (1)
	{
		printf("请输入下棋的坐标：\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("坐标已经被占用，请重新输入\n");
		}
		else
			printf("输入有误，请重新输入\n");
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋：\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y]==' ')
		{
			board[x][y] = '#';
			break;
		}
	}
	
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;//棋盘满了
		}
	}
	return 1;//棋盘没满
}

char IsWin(char board[ROW][COL], int row, int col)
{
	//判断行
	int i = 0;
	for ( i = 0; i < row; i++)
	{
		if (board[i][0]==board[i][1]&& board[i][1] == board[i][2]&& board[i][0] !=' ')
		{
			return board[i][0];
		}
	}

	//判断列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}

	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//判断平局
	int rec = IsFull(board, row, col);
	if (rec == 1)
	{
		return 'q';
	}
	
	//继续
	return 'c';
}