#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

//声明一下有这个增容函数
void checkcapacity(struct contact* pc);

//void loadcon(struct contact* pc)
//{
//	peoinfo tmp = { 0 };
//	FILE* pfload = fopen("con.dat", "rb");
//	if (pfload==NULL)
//	{
//		printf("loadcon :%s\n", strerror(errno));
//		return;
//	}
//
//	//fread 返回的是完全真实读到的元素个数,返回0表示停止读完了。
//	while (fread(&tmp, sizeof(peoinfo), 1, pfload))
//	{
//		checkcapacity(pc);
//		pc->data[pc->size] = tmp;
//		pc->size++;
//	}
//	fclose(pfload);
//	pfload = NULL;
//}

void initcon(struct contact* pc)
{
	//memset(pc->data, 0, sizeof(pc->data));
	//pc->size = 0;

	pc->data = (struct peoinfo*)malloc(default_sz * sizeof(peoinfo));
	if (pc->data==NULL)
	{
		return;
	}
	pc->size = 0;
	pc->capacity = default_sz;

	//把文件里面的信息加载到通讯录里面。
	//loadcon(pc);
}

void checkcapacity(struct contact* pc)
{
	if (pc->size==pc->capacity)
	{
		//增容
		struct peoinfo* ptr = realloc(pc->data, (pc->capacity + 2) * sizeof(struct peoinfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}

void Addcontact(struct contact* pc)
{
	// 满了就增加空间，没满就啥都不干
	checkcapacity(pc);
	printf("请输入姓名：");
	scanf("%s", pc->data[pc->size].name);
	printf("请输出年龄：");
	scanf("%d", &(pc->data[pc->size].age));
	printf("请输入性别：");
	scanf("%s", pc->data[pc->size].sex);
	printf("请输入电话：");
	scanf("%s", pc->data[pc->size].tel);
	printf("请输入地址：");
	scanf("%s", pc->data[pc->size].addr);
	pc->size++;
	printf("添加成功！\n");


	/*printf("请输入姓名：");
	scanf("%s", pc->data[pc->size].name);
	printf("请输出年龄：");
	scanf("%d", &(pc->data[pc->size].age));
	printf("请输入性别：");
	scanf("%s", pc->data[pc->size].sex);
	printf("请输入电话：");
	scanf("%s", pc->data[pc->size].tel);
	printf("请输入地址：");
	scanf("%s", pc->data[pc->size].addr);
	pc->size++;
	printf("添加成功！");*/
}

void showcontact(struct contact* pc)
{
	printf("%12s\t%10s\t%10s\t%12s\t%30s\t\n",
		"姓名", "年龄", "性别", "电话", "地址");
	int i = 0;
	for (i = 0; i < pc->size; i++)
	{
		printf("%12s\t%10d\t%10s\t%12s\t%30s\t\n", pc->data[i].name,
			pc->data[i].age, pc->data[i].sex, pc->data[i].tel,
			pc->data[i].addr);
	}
}

//内部使用，不会暴露在外面，只能在。c里面使用。
static int findbyname(struct contact* pc, char name[max_name])
{
	int i = 0;
	for ( i = 0; i < pc->size; i++)
	{
		if (0==strcmp(pc->data[i].name,name))
		{
			return i;
		}
		return -1;
	}
}

void Delcontact(struct contact* pc)
{
	int pos = 0;
	char name[max_name];
	printf("请输入要删除人的名字:");
	scanf("%s", name);
	 pos = findbyname(pc,name);
	if (pos==-1)
	{
		printf("要删除的人不存在");
	}
	else
	{
		int j = 0;
		for (j = 0; j < pc->size - 1; j++)
		{
			pc->data[pos] = pc->data[pos + 1];
		}
		pc->size--;
		printf("删除成功");
	}
}

void searchcon(struct contact* pc)
{
	int pos = 0;
	char name[max_name];
	scanf("%s", name);
	printf("请输入要查找人的名字");
	pos = findbyname(pc, name);
	if (pos==-1)
	{
		printf("要查找人的名字不存在\n");
	}
	else
	{
		printf("%12s\t%10d\t%10s\t%12s\t%30s\t",
			pc->data[pos].name,
			pc->data[pos].age, pc->data[pos].sex, pc->data[pos].tel,
			pc->data[pos].addr);
	}
}

void modifycon(struct contact* pc)
{
	int pos = 0;
	char name[max_name];
	printf("请输入要修改人的名字");
	scanf("%s", name);
	pos= findbyname(pc, name);
	if (pos == -1)
	{
		printf("要查找人的名字不存在");
	}
	else
	{
		printf("请输入姓名：");
		scanf("%s", pc->data[pos].name);
		printf("请输出年龄：");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入性别：");
		scanf("%s", pc->data[pos].sex);
		printf("请输入电话：");
		scanf("%s", pc->data[pos].tel);
		printf("请输入地址：");
		scanf("%s", pc->data[pos].addr);
		printf("修改成功！\n");
	}
}

void destroycontact(struct contact* pc)
{
	free(pc->data);
	pc->data = NULL;
}

//保存文件
void savecontact(struct contact* pc)
{
	FILE* pfw = fopen("con.txt", "w");
	if (pfw==NULL)
	{
		printf("savecontact :%s\n", strerror(errno));
		return;
	}
	//写文件到txt中
	int i = 0;
	for ( i = 0; i < pc->size; i++)
	{
		fwrite(&(pc->data[i]), sizeof(peoinfo), 1, pfw);
	}
	fclose(pfw);
	pfw = NULL;
}