#define _CRT_SECURE_NO_WARNINGS

#include "game.h"





void game()
{
	//创建棋盘数租
	char board[ROW][COL];

	//初始化棋盘
	clearboard(board, ROW, COL);

	//打印棋盘
	Displayboard(board, ROW, COL);

	char ret = 0;
	while (1)
	{

		//玩家移动
		PlayerMove(board, ROW, COL);

		Displayboard(board, ROW, COL);

		ret=IsWin(board, ROW, COL);//判断输赢状态
		if (ret != 'c')
			break;

		//电脑移动
		ComputerMove(board, ROW, COL);

		Displayboard(board, ROW, COL);

		ret = IsWin(board, ROW, COL);//判断输赢状态
		if (ret != 'c')
			break;
	}
	if (ret == '*')
		printf("玩家赢了\n");
	else if (ret == '#')
		printf("电脑赢了\n");
	else
		printf("平局\n");

	Displayboard(board, ROW, COL);

	printf("此局结束，新游戏\n");

	
}


int main()
{
	int input = 1;
	srand((unsigned int)time(NULL));
	do
	{
	
		printf("三子棋游戏\n");
		menu();
		printf("请输入：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏已退出\n");
			break;
		default:
			printf("输入错误，重新输入\n");

		}
		} while (input);
	


	return 0;
}