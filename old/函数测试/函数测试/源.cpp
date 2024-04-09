//计算器模块实现
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include "mod.h"

//sub减法模块头文件引入测试
//switch函数传址调用测试

void sw(int*pa,int*pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;

}

int main()
{
	int a = 10;
	int b = 20;
	printf("请输入a，b的值\n");
	scanf("%d%d", &a, &b);

	int* pa = &a;
	int* pb = &b;

	printf("%d\n", add(a, b));
	printf("%d\n", sub(a, b));

	sw(pa, pb);
	printf("%d %d\n", a, b);

	return 0;
	
}