#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>
#include<string.h>
#include<errno.h>

/*
程序文件		可以使用		数据文件。
.c  .obj .exe

 数据文件以 ASCII 存到外存上 就是 文本文件

 二进制文件，一堆乱码。 二进制编辑器。

文件路径+文件主干名+文件名后缀

wb 以二进制的方式写文件
write	写 这类动作时  当文件不存在时会自动创建新文件。


文件信息区 是一个 文件结构体类型的变量，会自动根据文件内容 填充各项信息，
该结构体类型指针维护这个信息区，该信息区维护文件内容。 例如：FILE* pf

缓冲文件系统，当内存往磁盘上写数据时，有个内存输出缓冲区，当此区满了，才一起输出到磁盘上。

当内存从磁盘上读取数据时，有个内存的输入缓冲区，满了，才一起输入到内存中。


系统自动地在内存中为程序每一个正在使用的文件开辟一块“文件缓冲区”。

缓冲区的大小根据C编译系统决定。

使用文件时，先打开，使用完再关闭。

FILE*pf fopen("要打开的文件名"，"操作方式");

返回一个文件信息区的其实地址。打开失败返回NULL

fclose(该文件指针)

../上一级路径  防止转义字符 \\


*/


/*
fgetc  以字符的方式读文件				 

以字符的方式写文件
fputc（写什么，写到哪里去（地址））

fgets（读完放到哪里（字符数组），（要读多少个字节），（从哪里读）地址）

fputs  （写什么，写到哪里去）

*/

/*
键盘 标准输入设备s't'din
屏幕 标准输出设备 stdout
*/

//int main()
//{
//	//int ch = fgetc(stdin);	//从标准输入流读
//
//	fputc(ch,stdout);	//	要输出什么，输出（写）到哪里。
//	
//	char ch[1024] = { 0 };
//	FILE* pf = fopen("t.txt", "w");
//	if (pf==NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	fputs("hello",pf);
//
//	//fgets(ch, 1024, pf);	读完放到一个字符数组里面，要读几个字节，从哪里读。
//	fgets  会把\n 一起读了。

//	printf("%s", ch);
//	//fclose(pf);
//	//pf = NULL;
//	return 0;
//}

//int main()
//{
//	char ch[1024] = { 0 };
//	FILE* pf = fopen("tx.txt", "w");	// 输入输出函数要和 读 写 的打开方式保持一致。！
//	FILE* pf = fopen("tx.txt", "r");
//	if (pf==NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}

//	//写文件：
//	/*fputs("made", pf);*/
//
//	//读文件 
//	fgets(ch, 100, pf);


//	printf("%s", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//	/*fgets(buf, 1024, stdin);
//	fputs(buf, stdout);*/
//	gets(buf);
//	puts(buf);//效果等价。
//	return 0;
//}

//格式化输入输出

struct my
{
	char name[20];
	float a;
	int age;
};

int main()
{
	//写文件 格式化输出
	/*struct my s = { "made",3.14f,20 };
	FILE* pf = fopen("tx.txt", "w");
	fprintf(pf, "%s %f %d\n", s.name, s.a, s.age);*/

	//读文件 格式话输入函数
	/*struct my s = { 0 };
	FILE* pf = fopen("tx.txt", "r");
	fscanf(pf, "%s %f %d\n", s.name, &(s.a), &(s.age));
	printf("%s %f %d\n", s.name, s.a, s.age);*/

	//从标准输入输出流操作
	/*struct my s = { 0 };
	fscanf(stdin, "%s %f %d", s.name, &(s.a), &(s.age));
	fprintf(stdout, "%s %f %d", s.name, s.a, s.age);*/
	//%.2f 去掉两个0 

	/*scanf fscanf sscanf
	* 
	*  sscanf  从字符串里 读 一个格式化的数据。
	* 
	* sprintf  格式化的数据 写到一个字符串里。
	* 
	* 
	printf fprintf sprintf*/
	/*struct my s= { "made",3.14f,20 };
	struct my tmp = { 0 };
	char buf[1000] = { 0 };

	sprintf(buf, "%s %f %d", s.name, s.a, s.age);*/
	/*printf("%s\n", buf);*/
	
	//从 buf 中读取格式化的数据到 tmp中。
	/*sscanf(buf, "%s %f %d", tmp.name, &(tmp.a), &(tmp.age));
	printf("%s %f %d\n", tmp.name, tmp.a, tmp.age);*/















	return 0;
}
