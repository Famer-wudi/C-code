#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int mys(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end!='\0')
//	{
//		end++;
//	}
//	return end - start;//末尾元素地址-首元素地址=中间的元素个数。
//}

//int main()
//{
//	char arr[] = "bit";
//	int len = mys(arr);
//	printf("%d\n", len);
//	return 0;
//}

//#define n_values 5
//int main()
//{
//float* values[n_values];
//float* vp;
//	for (vp = &values[n_values]; vp > &values[0];)
//	{
//		*--vp = 0;//前置 先自减，后使用
//	}
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//首元素的地址。
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	//整个数组地址加一，表示加了40 10*4.
//
//	//1,&arr -- &数组名，数组名不是首元素的地址，
//	//数组名表示整个数组，
//	//&数组名，表示取出的是整个数组的地址。
//
//	//2，sizeof(arr)--siazeof(数组名)--数组名表示整个数组，
//	//计算的是整个数组的大小。
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	int* p = arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d  ", *(p + 1));
//	}
//	//for ( i = 0; i < 10; i++)
//	//{
//	//	printf("%p =====  %p\n", p + i, &arr[i]);
//	//	//首元素地址+1（1个字节）指向第二个元素的地址，加二指向第三个元素的地址。
//	//}
//}


//二级指针
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	int* * ppa = &pa;
//	//二级指针，放的是变量的地址的地址。
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//}

//指针数组  ——是个数组 是存放指针的数组。
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	/*int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;*/
//	//整数数组--存放整形
//	//字符数组——存放字符
//	//指针数组——存放指针
//	//int arr[10];
//	int* arr2[3] = { &a,&b,&c };
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		printf("%d ",*(arr2[i]));
//	}
//	return 0;
//	//高内聚低耦合
//}

//int main()
//{
//
//	{
//		int a = 10;
//	}
//	//printf("%d", a);
//}

//二维数组不能省略列。
 
//void init(int arr[], int sz)//不需要返回什么信息，就用void
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Printf(int arr[], int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//个数
//	//init(arr,sz);
//				//把数组初始化成 0；
//				//传参，初始化哪个数组，数组大小。
//	Printf(arr, sz);
//	Reverse(arr, sz);
//	Printf(arr, sz);
//	return 0;
//}


//交换两个数组
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}	
//}

//全局变量不初始化，默认是0

//求二进制中1的个数。
//int co(int x)  //unsigned  int
//{
//	int ss = 0;
//	//while (x)
//	//{
//	//	if (x%2==1)
//	//	{
//	//		ss++;
//	//	}
//	//	x = x / 2;
//	//}
//	//int i = 0;
//	/*for ( i = 0; i <32; i++)
//	{
//		if (((x >> 1) & 1) == 1)	//按位与上1，只有两个为1，才为1.
//		{
//			ss++;
//		}
//	}*/
//	/*
//	x= x&(x-1)
//	13
//	1101 x
//	1100 x-1 
//	1100 x    
//	1011 x-1
//	1000 x
//	0111 x-1
//	0000 x	
//	*/
//	while (x)
//	{
//		x = x & (x - 1);
//		ss++;
//	}
//	return ss;
//}


//int main()
//{
//	//存的是补码，求补码1的个数。
//	int a = 0;
//	scanf("%d", &a);
//	int c=co(a);
//	printf("c ==== %d", c);
//	return 0;
//}

// 求二进制位不同位的个数
//int get_diff_bit(int m,int n)
//{
//	int count = 0;
//	int tmp = m ^ n;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count=  %d", count);
//}

//获取二进制中的奇数位和偶数位。分别打印出来。
//void Printf(int m)
//{
//	printf("奇数位:\n");
//	int i = 0;
//	for ( i = 30; i >=0; i-=2)//向右移动多少位
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：\n");
//	for (i = 31; i >= 1; i -= 2)//向右移动多少位
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}

//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	Printf(m);
//	return 0;
//}

//使用指针打印数组。
//void print(int* p, int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}


//输入几，就打印几的乘法口诀表
//void print_table(int m)
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i <= m; i++)
//	{
//		for ( j = 0; j <=i; j++)
//		{
//			printf("%d*%d=%-3d", i,j,i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print_table(m);
//	return 0;
//}


