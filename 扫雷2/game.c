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
	//������Χ���׸���
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
	int win = 0;//ʼ�����Ų飬ͣ�����������в����׵�λ�ö��ҳ��������׳ɹ���
	//���Զ���һ�����������׳ɹ�һ�Σ�win++����ʵ9x9��-10���ף�win++�ӵ�71�������ס�
	while (win<row*col-ecount)
	{
		printf("������Ҫ�Ų��׵�����");
		scanf("%d%d", &x, &y);
		//�ж�����ĺϷ��ԡ�
		if ((x >= 1 && x <= row && y >= 1 && y <= col))
		{
			if (m[x][y] == '1')
			{
				printf("���ź��㱻ը���ˣ�\n");
				displayboard(m, row, col);
				break;
			}
			else
			{
				//����xy������Χ�м����ס�
				int c = getm(m, x, y);
				//�ַ����顣���صĸ�������'0'������ʾ�����ַ����֡�
				s[x][y] = c + '0';
				displayboard(s, row, col);
				win--;
			}
		}
		else
		{
			printf("����Ƿ������������룡\n");
		}
	}
	if (win == row * col - ecount)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		displayboard(m, row, col);
	}
}