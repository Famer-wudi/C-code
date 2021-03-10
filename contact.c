#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

//����һ����������ݺ���
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
//	//fread ���ص�����ȫ��ʵ������Ԫ�ظ���,����0��ʾֹͣ�����ˡ�
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

	//���ļ��������Ϣ���ص�ͨѶ¼���档
	//loadcon(pc);
}

void checkcapacity(struct contact* pc)
{
	if (pc->size==pc->capacity)
	{
		//����
		struct peoinfo* ptr = realloc(pc->data, (pc->capacity + 2) * sizeof(struct peoinfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}

void Addcontact(struct contact* pc)
{
	// ���˾����ӿռ䣬û����ɶ������
	checkcapacity(pc);
	printf("������������");
	scanf("%s", pc->data[pc->size].name);
	printf("��������䣺");
	scanf("%d", &(pc->data[pc->size].age));
	printf("�������Ա�");
	scanf("%s", pc->data[pc->size].sex);
	printf("������绰��");
	scanf("%s", pc->data[pc->size].tel);
	printf("�������ַ��");
	scanf("%s", pc->data[pc->size].addr);
	pc->size++;
	printf("��ӳɹ���\n");


	/*printf("������������");
	scanf("%s", pc->data[pc->size].name);
	printf("��������䣺");
	scanf("%d", &(pc->data[pc->size].age));
	printf("�������Ա�");
	scanf("%s", pc->data[pc->size].sex);
	printf("������绰��");
	scanf("%s", pc->data[pc->size].tel);
	printf("�������ַ��");
	scanf("%s", pc->data[pc->size].addr);
	pc->size++;
	printf("��ӳɹ���");*/
}

void showcontact(struct contact* pc)
{
	printf("%12s\t%10s\t%10s\t%12s\t%30s\t\n",
		"����", "����", "�Ա�", "�绰", "��ַ");
	int i = 0;
	for (i = 0; i < pc->size; i++)
	{
		printf("%12s\t%10d\t%10s\t%12s\t%30s\t\n", pc->data[i].name,
			pc->data[i].age, pc->data[i].sex, pc->data[i].tel,
			pc->data[i].addr);
	}
}

//�ڲ�ʹ�ã����ᱩ¶�����棬ֻ���ڡ�c����ʹ�á�
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
	printf("������Ҫɾ���˵�����:");
	scanf("%s", name);
	 pos = findbyname(pc,name);
	if (pos==-1)
	{
		printf("Ҫɾ�����˲�����");
	}
	else
	{
		int j = 0;
		for (j = 0; j < pc->size - 1; j++)
		{
			pc->data[pos] = pc->data[pos + 1];
		}
		pc->size--;
		printf("ɾ���ɹ�");
	}
}

void searchcon(struct contact* pc)
{
	int pos = 0;
	char name[max_name];
	scanf("%s", name);
	printf("������Ҫ�����˵�����");
	pos = findbyname(pc, name);
	if (pos==-1)
	{
		printf("Ҫ�����˵����ֲ�����\n");
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
	printf("������Ҫ�޸��˵�����");
	scanf("%s", name);
	pos= findbyname(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�����˵����ֲ�����");
	}
	else
	{
		printf("������������");
		scanf("%s", pc->data[pos].name);
		printf("��������䣺");
		scanf("%d", &(pc->data[pos].age));
		printf("�������Ա�");
		scanf("%s", pc->data[pos].sex);
		printf("������绰��");
		scanf("%s", pc->data[pos].tel);
		printf("�������ַ��");
		scanf("%s", pc->data[pos].addr);
		printf("�޸ĳɹ���\n");
	}
}

void destroycontact(struct contact* pc)
{
	free(pc->data);
	pc->data = NULL;
}

//�����ļ�
void savecontact(struct contact* pc)
{
	FILE* pfw = fopen("con.txt", "w");
	if (pfw==NULL)
	{
		printf("savecontact :%s\n", strerror(errno));
		return;
	}
	//д�ļ���txt��
	int i = 0;
	for ( i = 0; i < pc->size; i++)
	{
		fwrite(&(pc->data[i]), sizeof(peoinfo), 1, pfw);
	}
	fclose(pfw);
	pfw = NULL;
}