#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void menu()
{
	printf("****************************************\n");
	printf("*******  1. add         2. del     *****\n");
	printf("*******  3. search     4..modify   *****\n");
	printf("*******  5. show        6. sort    *****\n");
	printf("*******  7. save        0. Exit    *****\n");
	printf("****************************************\n");
}

int main()
{
	int input= 0;
	struct contact con;//����dataָ�룬size,�� capacity
	//��ʼ��ͨѶ¼
	//��Ҫ�����Ѿ��е���ϵ����Ϣ
	initcon(&con);
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d",&input);
		switch (input)
		{
		case add:
			Addcontact(&con);
			break;
		case del:
			Delcontact(&con);
			break;
		case search:
			searchcon(&con);
			break;
		case modify:
			modifycon(&con);
			break;
		case show:
			showcontact(&con);
			break;
		case save:
			savecontact(&con);
			break;
		case Exit:
			//�ͷ��ڴ�
			savecontact(&con);
			destroycontact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ���������������\n");
			break;
		}
	} while (input);
	return 0;
}