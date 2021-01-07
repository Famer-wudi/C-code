#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define ecount 10

void initboard(char board[ROWS][COLS],int rows, int cols,char set);

void displayboard(char board[ROWS][COLS], int row, int col);

void setm(char board[ROWS][COLS], int row, int col);

void findm(char m[ROWS][COLS], char s[ROWS][COLS], int row, int col);