#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//函数的声明。
//初始化棋盘。
void Initboard(char board[ROW][COL],int row,int col);

//打印棋盘
void Displayboard(char board[ROW][COL], int row, int col);

//玩家下棋。
void Playermove(char board[ROW][COL], int row, int col);

//电脑下棋
void computermove(char board[ROW][COL], int row, int col);

//iswin
//玩家赢，返回 *
//电脑赢	返回 #
//平局	返回Q
//继续	返回 C	要返回这样的字符所以用char类型

char iswin(char board[ROW][COL], int row, int col);

