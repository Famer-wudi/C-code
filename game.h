#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//������������
//��ʼ�����̡�
void Initboard(char board[ROW][COL],int row,int col);

//��ӡ����
void Displayboard(char board[ROW][COL], int row, int col);

//������塣
void Playermove(char board[ROW][COL], int row, int col);

//��������
void computermove(char board[ROW][COL], int row, int col);

//iswin
//���Ӯ������ *
//����Ӯ	���� #
//ƽ��	����Q
//����	���� C	Ҫ�����������ַ�������char����

char iswin(char board[ROW][COL], int row, int col);

