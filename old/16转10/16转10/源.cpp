#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <math.h>

//int convertion(char* str, int len)
//{
//    int i = len - 1;
//    
//    if (*str != '\0')
        /*if (str[len - 1 - i] == 'a')
            return 10 * 2 ^ i + convertion(str, len - 1);
        if (str[len - 1 - i] == 'b')
            return 11 * 2 ^ i + convertion(str, len - 1);
        if (str[len - 1 - i] == 'c')
            return 12 * 2 ^ i + convertion(str, len - 1);
        if (str[len - 1 - i] == 'd')
            return 13 * 2 ^ i + convertion(str, len - 1);
        if (str[len - 1 - i] == 'e')
            return 14 * 2 ^ i + convertion(str, len - 1);
        if (str[len - 1 - i] == 'f')
            return 15 * 2 ^ i + convertion(str, len - 1);
        if (str[len - 1 - i] >= 0 && str[i] <= 9)
            return str[len - 1 - i] * 2 ^ i + convertion(str, len - 1);*/
//
//
//    if (str[len - 1 - i] == '\0')
//        return 0;
//}


int convertion(char* str, int len)
{
    int sum = 0;
    int i = len - 1;  
    while (*str != '\0')
    {
        if (str[len - 1 - i] == 'a')
        {
            sum += 10 * pow(16, i);
            i--;
            continue;
        } 
        if (str[len - 1 - i] == 'b')
        {
            sum += 11 * pow(16, i);
            i--;
            continue;
        }
        if (str[len - 1 - i] == 'c')
        {
            sum += 12 * pow(16, i);
            i--;
            continue;
        }
        if (str[len - 1 - i] == 'd')
        {
            sum += 13 * pow(16, i);
            i--;
            continue;
        }
        if (str[len - 1 - i] == 'e')
        {
            sum += 14 * pow(16, i);
            i--;
            continue;
        }
        if (str[len - 1 - i] == 'f')
        {
            sum += 15 * pow(16, i);
            i--;
            continue;
        }
        /*if (str[len - 1 - i] >= 0 && str[len - 1 - i] <= 9)
        {
            sum += str[len - 1 - i] * pow(16, i);
            i--;
            continue;
        }*/
        if (str[len - 1 - i] == '\0')
            break;
    }
    return sum;
}


int main() {

    char arr[10] = "abcdef";
    int sum = 0;

    //scanf("%s", arr);

    char* p = &arr[0];
    int len = strlen(arr);
    sum=convertion(p, len);
    printf("%d", sum);

    return 0;
}