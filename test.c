#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//��������Ϸ��
void menu()
{
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("----  1.play    0.exi---\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
}
//��Ϸ������ʵ�֡�
/*
	3x3�Ź���ÿ��һ������Щ�Ӷ����ַ�����Ӧ������Ҫ�洢������
	�����Ӷ�������Ӯ�ˡ�
	��һ����һ�������ŵ������
	�հף��ַ�����ӡ�ַ���
	���̸տ�ʼ������Ҳ��ӡ����ʵ�����ڴ�ӡ����Ԫ�ء�������ˣ��ʹ�ӡһ�����š�
	����Ĭ�ϴ�ӡ�ո�=��û���塣��ӡ9���ո�
		����					��������ȫ�ǿո�
    |    |    
----|----|----		�ָ��С�
    |    |    
----|----|----
    |    |    

*/
void game()
{
	char ret = 0;
	//����-������̵���Ϣ��
	char board [ROW][COL] = { 0 };//ȫ���ո�
	//��ʼ�����̣���ʼ�����顣�У������鴫�Ρ�
	Initboard(board,ROW,COL);
	//��ӡ���̡�
	Displayboard(board,ROW,COL);
	//����
	while (1)
	{
		//�������
		Playermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret=iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//�������塣
		computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//ֻ��һ���������������� 
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
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (input);

}

int main()
{
	test();
	return 0;
}