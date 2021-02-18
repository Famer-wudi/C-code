#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

/*
动态内存分配，想开辟多大字节的空间就开辟多大字节的空间，

内核空间 ： 操作系统的空间。

内存的栈区 ： 局部变量，函数的形式参数。 离开栈区，生命周期就结束。

内存的堆区 ： 动态内存开辟的空间，即内存块，

静态区 ： 全局变量 ，静态变量。

数据区 ： 常量，和运行时的数据。

	malloc	free	calloc		realloc 

*/
//void* malloc(size_t size)

//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//
//	//int* p = (int*)malloc(INT_MAX);
//
//	//内存不足时，返回NULL；
//	if (p==NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for ( i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//		for ( i = 0; i < 5; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//
//	//当动态申请的空间不再使用的时候，要释放和回收。
//	free(p);
//	p = NULL;	//以防有人找到这个指针搞破坏。
//
//	//生命周期到了，程序结束，内存也会主动还回去。
//
//	//F9 断点	。		F5 直接跳到断点。
//
//	return 0;
//}


		//calloc

 // void* calloc(size_t num,size_t size)
//int main()
//{
////int* p = (int*)malloc(5 * sizeof(int));
//
//	int* p=(int*)calloc(5, sizeof(int));
////会把申请的每个空间初始化为0.返回该内存的起始位置地址。
//
//	//返回失败同，malloc
//	return 0;
//}


			// realloc 
//int main()
//{
//	/*
//	realloc 哪里闲着就开辟哪块儿，如果后面空间够用，追加上，就返回malloc的地址。
//	
//如果后面的空间不够用，开辟一个新的空间。
//同时把那块儿空间的数据拷贝过来，原空间作废，返回新的地址。
//要用新的地址接受，进行返回值判断以防开辟失败。
//	*/
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p==NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for ( i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//		for ( i = 0; i < 5; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//20个字节空间不够用 再来20个
//	int* ptr = (int*)realloc(p, 40);
//	if (ptr!=NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//				i<20  就会造成 对动态开辟的内存的越界访问。
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//				p++；free(p)	会出错。
//
//  多次释放，会崩死。。 谁申请谁回收。。
//
//
//忘记释放则会内存泄漏。
//while (1)
//{
//	malloc(1)
//}
// 形参出函数销毁。 会造成内存崩溃，存在内存泄漏，开辟的内存尚未释放，
//return 0;
//}

/* 返回栈空间地址的问题 ，出函数销毁。 非法访问内存的问题。

堆空间 和静态区都能返回去。
*/

	//柔性数组
// struct S
//{
//	int i;
//	int arr[0];
//};				//结构体最后一个成员时 位置大小。数组的大小是可以调整的。
//
////那怎么开辟这个数组的空间呢。
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	return 0;
//}

//struct S
//{
//	int i;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for ( i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	int* ptr=realloc(ps->arr,10*sizeof(int));
//	if (ptr!=NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	return 0;
//}