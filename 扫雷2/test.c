#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("***********************************\n");
	printf("************1 .play****************\n");
	printf("************0 .exit****************\n");
	printf("***********************************\n");
}

void game()
{
	char m[ROWS][COLS] = { 0 };
	char s[ROWS][COLS] = { 0 };
	initboard(m, ROWS, COLS, '0');
	initboard(s, ROWS, COLS, '*');
	
	//打印棋盘
	//displayboard(m, ROW, COL);
	displayboard(s, ROW, COL);
	
	//布置雷
	setm(m, ROW, COL);
	//displayboard(m, ROW, COL);

	//扫雷
	findm(m,s,ROW, COL);
}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("坐标输入非法,请重新输入！\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}