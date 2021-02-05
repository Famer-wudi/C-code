#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	const char* p = "abcdef";//常量字符串
//	printf("%c\n", *p);//a
//	printf("%s\n", p);//abcdef
//	
//	// segmentfault. com
//	//	*p='w'		段错误 访问非法内存。 常量不能被修改。
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";//数组名，首元素地址。
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (arr1==arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");//haha
//	}
//	return 0;
//}

//指针数组，是数组。


//int main()
//{
//	int arr1[] = { 1,2,3,4,5};
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3};
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//
//}


//数组指针 是指针。 int* p[10],		[]优先级 比*高

/*
int(*p)[10]  数组指针。  指针p指向大小为10个整型的数组，指针p是一个指针变量，
指向一个数组，所以叫数组指针。

*/

//int main()
//{
//	char* arr[5];
//	char*(*pa)[5] = &arr;
//	// char* pa 指向的数组的元素类型 是char*
//	int arr2[10];
//	int (*pa2)[10] = &arr2; //数组指针的类型和  数组的类型一致。
//	return 0;
//}

//数组名 传参 意味着传过去的是数组。 数组传参，就用数组形式。
/*
二维数组 首元素地址  是第一行的地址。

一维数组的地址就可以存到一个数组指针里。
*/

//用数组接受。
//void print1(int arr[3][5],int x, int y)
//{
//	int i = 0;
//	for ( i = 0; i < x; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

/*
二维数组 可以想象成 是一个 一维数组 有三个元素，每个元素 是有5个整型元素的数组
*/


//用数组指针接受
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);
//			//printf("%d ", (*(p+i))[j]);
//			//printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//
//	//int arr[4] = { 1,2,3,4 };
//	//int* p = arr;
//	//int i = 0;
//	//for ( i = 0; i < 4; i++)
//	//{
//	//	printf("%d ", p[i]);
//	//	//以p为起始地址，访问下标为i的元素。
//	//	printf("%d ", *(p + i));
//	//	printf("%d ", *(arr + i));
//	//	printf("%d ", arr[i]);//arr 数组名，首元素地址。
//	//	//arr[i] = *(arr+i) = *(p+i) = p[i]
//	//}
//	return 0;
//}

//int main()
//{
//	//字符指针，
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	 //sonst 放左边，地址指向的元素内容不能被修改
//	
//	//指针数组
//	int* arr[10];
//
//	//数组指针
//	int  *p3;//整型指针，指向整型的指针。
//	int arr2[5];
//	int(*pa)[5] = &arr2;
//	//pa 就是数组指针  去掉pa 就是数组指针类型。  
//	
//	int(*parr3[10])[5];
//	// arr3 是个数组，有10个元素，每个元素是数组指针。
//	return 0;
//}



//指针传参，	数组传参

/* 一维数组传参
数组传参，用数组接受，如 arr[]; 数组大小可以省略

 int* arr 该类型指针接受  找一个

 指针数组传参  用 int**arr ,int*arr[];  二级指针存储的是一级指针的地址

 
		二维数组传参
 
 int arr[3][5] int arr[][5] 可以省略行
 
  指针传参	用 数组指针接受  int(*pa)[5] 
 */


			//函数指针。
/*
	指向函数的指针。 存放函数地址的指针。

	&函数名  和函数名 都是函数的地址。

	函数地址怎么存	
	
	int（函数的返回类型）（*p）	(int,int)函数的参数	=add
	
	p 存的是函数地址   *p 就是那个函数	(*p)（2,3）

	
*/
		
//  (*		(void)	(*)		()		0)	()
/*

把0 强制类型转换成 一个函数的地址，解引用调用那个函数，参数为 无参。
函数指针 指向的那个函数 返回类型为 void 参数 为无参  

*/

/*

void  (*signal (int, void(*)(int) ))(int)  

signal  是一个函数声明，

参数有两个，第一个为 int,第二个 为函数指针， 指向的函数参数为int,返回类型为void 

signal 函数的返回类型 为函数指针类型， 该函数指针指向的函数参数为 int，返回类型为void

typedf  void(*	pfun_t	)(int) 重命名。

pfun_t	函数指针类型  pfun_t signal (int, void(*)(int)
*/

//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	add(a, b);
//	//int c=add(a, b);
//	int(*pa)(a, b) = add;//存的是函数地址。
//
////	&函数名  和函数名 都是函数的地址。
//	/*
//		int（函数的返回类型）（*p）	(int,int)函数的参数	=add
//	
//	p 存的是函数地址   *p 就是那个函数	(*p)（2,3）
//	*/
//	printf("%d\n", (*pa)(10, 20));
//
//	printf("%d\n", (pa)(10, 20)); 

//	return 0;
//}






