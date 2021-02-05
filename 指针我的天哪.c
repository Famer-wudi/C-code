#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

					//谨记优先级：() > [] > *

// 实现一个库函数qsort 

//struct stu
//{
//	char name[20];
//	int age[10];
//};
//
//void swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1; 
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubbles(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	// 确定比较的趟数，确定比较一趟要比较多少对儿。
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//
//		}
//	}
//}
//
//void cmp_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//void test()
//{
//	struct stu s[] = { {"zhangsan",10},{"lisi",30},{"liwu",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubbles(s, sz, sizeof(s[0]), cmp_by_name);
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	//char arr[] = "abcdef";//6  遇到\0 停止统计 计数器不加加
//	//signed char arr[] = {'a'};//随机值。
//
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n ", strlen(*arr));//穿过去的是ASCII 的97 代表 ‘a’
//
//	printf("+1 = %d\n ", strlen(&arr+1)); //跳过当前字符数组，所以随机值和下面的最起码差6
//	printf("%d\n ", strlen(&arr));
//
//	return 0;
//}

/* 二维数组	sizeof (a[0]+1)  第一行第一个元素的地址加1，就是第一行第二个元素的地址。
* 
* sizeof (  a +1   ) 二维数组 数组名 表示第一行一维数组的地址 +1 
*	没有sizeof(a)，也没有&a  
* 
* 1. sizeof(数组名),这里的数组名表示整个数组,计算的是整个数组的大小。
* 
* 2. &数组名,这里的数组名表示整个数组，取出的是整个数组的地址。
* 
* 3.除此之外所有的数组名都表示首元素的地址。
*/

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//	/*
//	*(ptr-1) 整形指针 - 1   即减去一个整型 酒挪到了 5的地址。
//	*/
//}

//struct MyStruct
//{
//	int num;
//	char* pcname;
//	short sdate;
//	short sba[4];
//	char cha[2];
//}*p;
////已知结构体的大小为20个字节。p的值 为0x100000 则这些表达式的结果为。
//int main()
//{
//	//指针+1，取决于 指针类型。 
//
//	p = (struct MyStruct*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);//+1 转换成整型+1，就是加了个1 0x00100001 
//	printf("%p\n", (unsigned int*)p + 0x1);
//	//转换成无符号整型指针，+1，表示加了4个字节。 0x00100004
//	return 0;
//	/*
//	+1 表示跳过整个结构体地址大小的字节 0x100000 +20(0x100014) = 0x00100014  
//	一个16进制数字 可以用 4个二进制位表示，所以每4个二进制位表示 一个16进制位。
//	那一个整型 4个字节 32个比特位可以表示 8个16进制位。
//	*/
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x，%x\n", ptr1[-1], *ptr2);
//	return 0;
//}

//int main()
//{
//	short a = 0x1122;
//	short* p = &a;
//	short* p1 = (short*)((int)p + 1);
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5), };
//	//逗号表达式， 初始化为 1，3，5
//	int* p;
//	p = a[0];
//	printf("%d\n", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	//&aa 数组指针 +1 还是个数组指针  所以转换为整形指针
//	int* ptr2 = (int*)(*(aa + 1));
//	//aa+1 =aa[1]  二维数组名 第一行的地址。 * 行的地址 找到那一行的地址
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//	//地址减一 减去的是该类型大小的字节 
//	return 0;
//	int arr[10] = { 1,2,3,4,5 };
//	int*p = arr;
//	*(p + 2) == p[2] == *(arr + 2) == arr[2];
//}

//int main()
//{
//	char *a[] = { "work","at","alibaba" };
//	char** pa = a;
//
//	pa++;
//	printf("%s\n", *pa);	
//	return 0;
//	/*
//	int*p="ab"; 把常量字符串首首字符a的地址 放到p里面。
//	
//	*/
//}

int main()
{
	char* c[] = { "enter","new","point","first" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp+3);
	printf("%s\n", *cpp[-2]+3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}