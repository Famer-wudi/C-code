#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����������		fread

//���������		fwrite

//struct my
//{
//	int age;
//	char name[20];
//	double d;
//};

//int main()
//{
//	//struct my m = { 20,"jj" ,119.9};//д
//	struct my y = { 0 };
//	//FILE* pf = fopen("tx.txt", "wb");//д
//	FILE* pf = fopen("tx.txt", "wr");
//	if (pf==NULL)
//	{
//		return 0;
//	}
//	//������д�ļ�
//	//fwrite(&m,		sizeof(struct my),		1,						 pf);
//	//���Ķ�д��  д���ļ���С��  Ҫд�����������ļ���  д������ȥ��
//
//	//������ ��
//	fread(&y, sizeof(struct my), 1, pf);
//	printf("%d %s %lf", y.age, y.name, y.d);
//	fclose(pf);
//	pf = NULL;
//		return 0;
//}

/*
����һ���洢������save
case save		save(&con)		void save(contact* ps);
			
FILE* pf=fopen("cn.txt","wb");

if(pf==NULL)	printf("%s\n",strerror(errno)); return;	��ͷ�ļ�

д�ļ�
int i=0;
for(i=0,i<pa-size;i++)  fwrite(&(ps->data[i]),sizeof(peoinfo),1,pf)
 fclose(pf); pf=NULL;
�˳� ʱ���ȱ���һ�������١�

ÿ�δ򿪣���ʼ��ͨѶ¼ ���Ѿ������ͨѶ¼��Ϣ���ص�ͨѶ¼�
loadcon(ps)		void loadcon(con* ps)	peoinfo tmp=0;

{	FILE* pfread=fopen("cn.txt","rb");  																		}
	if(pf==NULL)	
	printf("loadcon::%s\n",strerror(errno));
	return;

	//�������Ҫ�����Լ�����ʲôʱ��ֹͣ��
	fread   ����ֵ�� Ҫ�����ֽ�С��˵�������ˡ�

	while(fread(&tmp,sizeof(peoinfo),1,pfread);)

	����һ�����ݣ�
	ps->data[pa->size]=tmp
	size++

	fclose(pf); pf=NULL;
*/

/*
�ļ����д
*/




















































