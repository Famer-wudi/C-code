#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//指针数组
//	int* ar[5];
//
//	//需要一个数组，来存放4个函数的地址——函数指针的数组
//	int(*pa)(int, int) = Add;
//	int(*parr[4])(int, int) = { Add };
//	printf("%d",parr[1]);
//}

//char* my_strcpy(char* dest, char* src);

/*写一个函数指针pf,能指向my_strcpy
* 
*											优先级：()>[]>*
* 
	char* (*pf)(char* , const char* )
*
写一个函数指针数组，能存放4个my_strcpy函数的地址。

char* (*pfarr[4])(char*, char* src)

*/

//函数指针数组  实现一个计算器
	
//函数指针数组——	别名，转移表。
/*
冗余 解决方法	回调函数。
	在封装一个函数，参数为其他函数的地址。

*/

		//	指向函数指针数组的指针，
/*
数组指针（也称行指针）
定义 int (*p)[n];
()优先级高，首先说明p是一个指针，指向一个整型的一维数组，这个一维数组的长度是n，
也可以说是p的步长。也就是说执行p+1时，p要跨过n个整型数据的长度。

指针数组
定义 int *p[n];
[]优先级高，先与p结合成为一个数组，再由int*说明这是一个整型指针数组，它有n个指针类型的数组元素。
这里执行p+1时，则p指向下一个数组元素，这样赋值是错误的：p=a；因为p是个不可知的表示，
只存在p[0]、p[1]、p[2]...p[n-1],而且它们分别是指针变量可以用来存放变量地址。
但可以这样 *p=a; 这里*p表示指针数组第一个元素的值，a的首地址的值。

函数指针
int(*pa)(int,int);

函数指针数组
int(*parr[6])(int,int);

函数指针数组的指针

int(*(*pparr)[6])（int,int)

*pparr 是一个数组指针，指向的是一个函数指针数组，有6个元素，每个元素是函数指针。
 
*/

//冒泡排序	相邻元素比较
// 确定要比叫多少趟，一趟要对比几对儿。

//void bubble(int arr[], int sz)
//{
//	int i = 0;			
//	for ( i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < sz-i-1;j++)
//		{
//			if (arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

/*	qsort 库函数 排序参数
* 
void qsort (void* base,			数组的起始地址 

size_t num,			数组中指向 的元素数。是一个未签名的积分类型。size_t

size_t size,		数组中每个元素的大小（以字节为单位）。

int (*compar)(const void*,const void*)	

指向比较两个元素的函数的指针。

通过比较两个元素，可以反复调用此函数。

*/

//	void*类型的指针  可以接受任意类型的地址。 不能接引用,也不能++--

//int cmp_int(const void* e1, const void* e2)
//{
//	return *((int*)e1) - *((int*)e2);//强制类型转换
//}
//
//void test1()
//{
//	int arr[] = { 2,4,6,5,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//struct stu
//{
//	char name[20];
//	int age[10];
//};
//
//int cmp_struct_name(const void* e1, const void* e2)
//{
//	//字符串比较，应该用strcmp比较
//	strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//void test3()
//{
//	struct stu s[] = { {"zhangsan",10},{"lisi",30},{"liwu",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_struct_name);
//}

//int main()
//{
//	//test1();
//	test3();
//	return 0;
//}

/*qsort  第一个参数待排序数组的首元素地址，
第二个 待排序数组的元素个数
第三个	待排序数组的每个元素的大小 单位是字节
第四个 是函数指针，比较两个元素所用函数的地址，这个函数，使用者自己实现，
	函数指针的两个参数是：待比较的两个元素的地址。。
*/

		//	改造冒泡排序 成qsort 
/*
	， 需要知道是哪个数组，及传参数组的首元素地址
		需要知道元素的个数
		需要知道每个元素的大小宽度，大概就知道这数组的基本信息了
	因为各种类型数组的比较方法各不一样，所以你把函数指针传过来。
	规定你的那个比较函数的两个参数为两个指针	所以设计成void*
*/