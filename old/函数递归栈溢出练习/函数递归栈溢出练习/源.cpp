#include<string.h>
#include<stdio.h>

int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);//return结果递归my_strlen()
	else
		return 0;
}

int main()
{
	char arr[] = "bit";

	printf("%d\n", my_strlen(arr));

	printf("%d\n", strlen(arr));
	return 0;
}