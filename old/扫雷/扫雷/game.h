#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define minenum 10

void Initboard(char board[ROWS][COLS], int rows, int cols,char set);

void Displayboard(char board[ROWS][COLS], int row, int col);

void Setmine(char mine[ROWS][COLS], int row, int col,int mines);

void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int mines);

//优化
//1.自动多次展开
//2.标记雷
