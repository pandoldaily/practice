
#include "game.h"


void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < rows; i++)
	{
		for ( j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("——————扫雷游戏——————\n");
	printf("  ");
	for (j = 1; j <= col; j++)
	{
		printf("%d ",j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ",i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("——————扫雷游戏——————\n");
}

void Setmine(char mine[ROWS][COLS], int row, int col, int mines)
{
	while (mines)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			mines--;
		}
	}
}

//static
//1 修饰局部变量
//2 修饰全局变量
//3 修饰函数

static int getminecount(char mine[ROWS][COLS], int x, int y)//static只能在此源文件使用(静态函数)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] +
		mine[x - 1][y + 1] + mine[x][y - 1]
		+ mine[x][y + 1] + mine[x + 1][y - 1] +
		mine[x + 1][y] + mine[x + 1][y + 1] - '0' * 8;
}

void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int mines)
{
	//接收坐标
	//判断坐标
		//1 是雷
		//2 不是雷
	int x = 0;
	int y = 0;
	int win = row * col - mines;
	while (win)
	{
		printf("请输入排雷坐标：\n");
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= row && y>0 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				Displayboard(mine, ROW, COL);
				printf("很遗憾，爆炸了!\n游戏结束\n");
				break;
			}
			else
			{
				int count = getminecount(mine, x, y);
				show[x][y] = count + '0';
				win--;

				//x,y外部获取，找雷单独封装递归

				/*if (count == 0)
				{
					show[x-1][y-1] = getminecount(mine, x-1, y-1) + '0';
					show[x-1][y] = getminecount(mine, x-1, y) + '0';
					show[x-1][y+1] = getminecount(mine, x-1, y+1) + '0';
					show[x][y-1] = getminecount(mine, x, y-1) + '0';
					show[x][y+1] = getminecount(mine, x, y+1) + '0';
					show[x+1][y-1] = getminecount(mine, x+1, y-1) + '0';
					show[x+1][y] = getminecount(mine, x+1, y) + '0';
					show[x+1][y+1] = getminecount(mine, x+1, y+1) + '0';
				}*/
				//Displayboard(mine, ROW, COL);

				Displayboard(show, ROW, COL);
				
			}
		}
		else
		{
			printf("坐标有误，重新输入\n");
		}
		
	}
	if (win == 0)
	{
		printf("恭喜你，排雷成功！！");
		Displayboard(mine, ROW, COL);
	}
}