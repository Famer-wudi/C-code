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
	
	//��ӡ����
	//displayboard(m, ROW, COL);
	displayboard(s, ROW, COL);
	
	//������
	setm(m, ROW, COL);
	//displayboard(m, ROW, COL);

	//ɨ��
	findm(m,s,ROW, COL);
}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��������Ƿ�,���������룡\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}