#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < rows; i++)
	{
		for ( j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i <=col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for ( i = 1; i <=row; i++)
	{
		printf("%d ", i);
		for ( j = 1; j <col+1; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void setm(char board[ROWS][COLS], int row, int col)
{
	int c = ecount;
	while (c)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y]=='0')
		{
			board[x][y] = '1';
			c--;
		}
	}
}

int getm(char m[ROWS][COLS], int x, int y)
{
	//坐标周围的雷个数
	// '1'-'0'=1, '3'-'0'=3. '0'-'0'=0.
	return m[x - 1][y] +
		m[x - 1][y - 1] +
		m[x][y - 1] +
		m[x + 1][y - 1] +
		m[x + 1][y] +
		m[x + 1][y + 1] +
		m[x][y + 1] +
		m[x - 1][y - 1] - 8 * '0';

}

void findm(char m[ROWS][COLS], char s[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//始终在排查，停不下来。所有不是雷的位置都找出来救排雷成功，
	//所以定义一个变量。排雷成功一次，win++。真实9x9，-10个雷，win++加到71，排完雷。
	while (win<row*col-ecount)
	{
		printf("请输入要排查雷的坐标");
		scanf("%d%d", &x, &y);
		//判断坐标的合法性。
		if ((x >= 1 && x <= row && y >= 1 && y <= col))
		{
			if (m[x][y] == '1')
			{
				printf("很遗憾你被炸死了！\n");
				displayboard(m, row, col);
				break;
			}
			else
			{
				//计算xy坐标周围有几个雷。
				int c = getm(m, x, y);
				//字符数组。返回的个数加上'0'，救显示的是字符数字。
				s[x][y] = c + '0';
				displayboard(s, row, col);
				win--;
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
	if (win == row * col - ecount)
	{
		printf("恭喜你，排雷成功\n");
		displayboard(m, row, col);
	}
}