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
	struct contact con;//包含data指针，size,和 capacity
	//初始化通讯录
	//且要加载已经有的联系人信息
	initcon(&con);
	do
	{
		menu();
		printf("请选择>");
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
			//释放内存
			savecontact(&con);
			destroycontact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}