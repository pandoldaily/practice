
#include "game.h"


void menu()
{
	printf("************************************\n");
	printf("*********    1.开始游戏    *********\n");
	printf("*********    0.退出游戏    *********\n");
	printf("************************************\n");
}

void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	//初始化棋盘
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');

	//打印雷盘
	//Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);

	//生成雷
	Setmine(mine, ROW, COL, minenum);
	Displayboard(mine, ROW, COL);

	//排查雷
	Findmine(mine, show, ROW, COL, minenum);

}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		printf("扫雷游戏\n");
		menu();
		printf("请输入：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始！\n");
			game();
			break;
		case 0:
			printf("游戏退出，谢谢游玩\n");
			break;
		default:
			printf("输入有误，重新输入\n");
			break;
		}


	} while (input);
}