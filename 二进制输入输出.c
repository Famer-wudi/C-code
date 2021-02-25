#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//二进制输入		fread

//二进制输出		fwrite

//struct my
//{
//	int age;
//	char name[20];
//	double d;
//};

//int main()
//{
//	//struct my m = { 20,"jj" ,119.9};//写
//	struct my y = { 0 };
//	//FILE* pf = fopen("tx.txt", "wb");//写
//	FILE* pf = fopen("tx.txt", "wr");
//	if (pf==NULL)
//	{
//		return 0;
//	}
//	//二进制写文件
//	//fwrite(&m,		sizeof(struct my),		1,						 pf);
//	//从哪儿写，  写的文件大小，  要写几个这样的文件，  写到哪里去。
//
//	//二进制 读
//	fread(&y, sizeof(struct my), 1, pf);
//	printf("%d %s %lf", y.age, y.name, y.d);
//	fclose(pf);
//	pf = NULL;
//		return 0;
//}

/*
增加一个存储函数。save
case save		save(&con)		void save(contact* ps);
			
FILE* pf=fopen("cn.txt","wb");

if(pf==NULL)	printf("%s\n",strerror(errno)); return;	引头文件

写文件
int i=0;
for(i=0,i<pa-size;i++)  fwrite(&(ps->data[i]),sizeof(peoinfo),1,pf)
 fclose(pf); pf=NULL;
退出 时候先保存一下在销毁。

每次打开，初始化通讯录 把已经保存的通讯录信息加载到通讯录里。
loadcon(ps)		void loadcon(con* ps)	peoinfo tmp=0;

{	FILE* pfread=fopen("cn.txt","rb");  																		}
	if(pf==NULL)	
	printf("loadcon::%s\n",strerror(errno));
	return;

	//如果满了要扩容以及读到什么时候停止。
	fread   返回值比 要读的字节小，说明读完了。

	while(fread(&tmp,sizeof(peoinfo),1,pfread);)

	调用一次扩容，
	ps->data[pa->size]=tmp
	size++

	fclose(pf); pf=NULL;
*/

/*
文件随机写
*/




















































