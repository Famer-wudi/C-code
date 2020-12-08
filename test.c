#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//三子棋游戏。
void menu()
{
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("----  1.play    0.exi---\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
}
//游戏的整个实现。
/*
	3x3九宫格。每走一步，这些子儿【字符】对应的坐标要存储起来。
	三个子儿相连就赢了。
	你一步我一步，。放到数组里。
	空白，字符，打印字符。
	棋盘刚开始，照样也打印。其实就是在打印数组元素。玩家走了，就打印一个符号。
	棋盘默认打印空格，=还没走棋。打印9个空格。
		棋盘					数组里面全是空格。
    |    |    
----|----|----		分割行。
    |    |    
----|----|----
    |    |    

*/
void game()
{
	char ret = 0;
	//数组-存放棋盘的信息。
	char board [ROW][COL] = { 0 };//全部空格
	//初始化棋盘，初始化数组。行，列数组传参。
	Initboard(board,ROW,COL);
	//打印棋盘。
	Displayboard(board,ROW,COL);
	//下棋
	while (1)
	{
		//玩家下棋
		Playermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//判断玩家是否赢
		ret=iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋。
		computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//只用一次所以随机数放这里。 
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
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (input);

}

int main()
{
	test();
	return 0;
}