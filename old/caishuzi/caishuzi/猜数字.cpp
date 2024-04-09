#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <Windows.h>
#include <time.h>

void menu()
{
	printf("***********************************\n");
	printf("*********   1.开始游戏   **********\n");
	printf("*********   0.退出游戏   **********\n");
	printf("***********************************\n");
}
void game()
{
	//猜数字游戏实现
	//1-100

	int ret = rand()%100+1;//rand的随机范围是0-32767
	printf("%d\n",ret);
	int guess = 0;

	while (1)
	{
		printf("请输入：");
		scanf("%d", &guess);
		if (guess<ret)
		{
			printf("猜小了\n");
		}
		else if(guess>ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了！恭喜你\n");
			break;
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
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			printf("猜数字\n");
			game();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("输入错误，重新输入\n");
			break;
		}

	} while (input);
}