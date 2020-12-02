#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>
//函数，是- -个大型程序中的某部分代码，由-个或多个语句块组成。
//它负责完成某项特定任务,而且相较于其他代码,具备相对的独立性。
//一般会有输入参数并有返回值, 提供对过程的封装和细节的隐藏。这些代码通常被集成为软件库。

//函数的定义
//int Add(int x, int y)
//
//函数返回类型	函数名		函数参数
//
//{
//	int z = 0;		
//	z = x + y;		//函数体，函数的实现。
//	return z;
//}

//函数的使用
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//Add谁和谁相加呢？传输参数/
//相加之后要有一个接受的变量。sum。
//	printf("%d\n", sum);
//	return 0;
//}

//char * strcpy ( char * destination, const char * source );
//从源拷贝到目的地里去。


/* strcpy example */
////strcpy（你要放到哪里去， "要拷贝谁"  ）;   两个参数。
//int main()
//{
//	char str1[] = "Sample string";
//	char str2[40];
//	char str3[40];
//	strcpy(str2, str1);
//	strcpy(str3, "copy successful");
//	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
//	return 0;
//}
//字符串 结束标志 \0 
/* memset example */

//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '8', 6);
//memset（要修改的对象，要改成啥(值)，要改几个（原对象的）字符）;
//	puts(str); 
//	return 0;
//}

//任何一个字符，在内存中，存的是ASCII码值。

//void swap(int* x,int* y)// F11 进入函数内部。
//{
//	//不需要返回，所以用void。代表没有返回值。
//	int tmp = 0;
//	tmp = *x;//交换地址就可以了。
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
/*真实传给函数的参数, 叫实参。实参可以是:常量、变量.表达式、函数等。无论实参是何种类型的量,
在进行函数调用时，它们都必须有确定的值, 以便把这些值传送给形参。
max(100,max(a,b))
形参 只是实参的一份临时拷贝。对形参的修改，是不会改变实参的。
形式参数是指函数名后括号中的变量,
因为形式参数只有在函数被调用的过程中才实例化(分配内存单元), 所以叫形式参数。
形式参数当函数调用完成之后就自动销毁了。因此形式参数只在函数中有效。*/

//int su(int y)		//函数只需要返回1或者0，判断留给main主函数。
//{
//	int i = 2;
//	for ( i = 2; i <= 100; i++)
//	{
//		if (y%i==0)
//		{
//			return 0;	
//		}
//		return 1;
//	}
//	return 0;
//}


//int main()//函数就负责返回1还是0。
//{
//	int x = 1;
//	for ( x = 1; x <= 100; x++)
//	{
//		if (su(x)==1)	//判断函数的返回值是否为1.。
//		{
//			printf("%d ", x);
//		}
//
//	}
//
//	return 0;
//}

// 写一个 1000到2000年的闰年函数。
//int run(int y)
//{
//
//	if ((y%4==0 && y%100 !=0)||(y%400==0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//
//int main()
//{
//	int count = 0;
//	int y = 0;
//	for ( y = 1000; y <= 2000; y++)
//	{
//		if (run(y)==1)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\n总计=%d个闰年", count);
//	return 0;
//} 

//二分查找		先写函数怎么用，再也函数怎么实现。
//在一个有序数组中查找具体的某个数，


				//本质上 arr是一个指针。
//int binarysearch(int arr[], int k,int sz)
//{
//	//函数内部 不能 求参数元素的个数。
//
//	//算法的真实实现， 折半查找。每查找一次，被查找范围就缩小一半。
//	//1，找出被查找这些元素的中间元素。
//	//2，发现要找的元素比中间元素大，则该元素在中间元素的右边
////确定一个左下标，确定一个右下标。确定中间有元素的下标以及中间元素。
////3，再通过剩下元素的左右下标确定新的中间元素的下标以及元素，再把要查找的元素和新的中间元素比较。	
//////4，左右下标再也不能确定一个范围，中间再也没有一个元素了。
////5，在这个过程中突然找到了，就把结果返回。
////6,确定元素个数。右下标就等于 元素个数减一。 
//	
//	//sz = sizeof(arr) / sizeof(arr[0]); //4/4
//
//	int zuo = 0;
//	int you = sz - 1;//右下标
//	int mid = (zuo + you) / 2;//中间元素的下标。
//	while (zuo<=you)
//	{//左右小标向中间缩小，//当左右下标相等的时候，还有一个元素可以找。
//		//直到左右下标交错的时候，就没有元素了。所以判断条件为 zuo <=you
//		
//
//		if (arr[mid] < k)
//		{
//			zuo = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			you = mid - 1;
//		}
//		else//arr[中间元素]= 要查找的元素。那就找到了
//		{
//			return mid;
//		}
//	}//当找到左下标大于右下标的时候，说明找不到了。
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int k = 7;//找7
//	int sz = 0; 
//	sz = sizeof(arr)/sizeof(arr[0]);
//	//写一个函数来查找。
//	//第一我去哪里查找，
//	//第二，我查找谁，
//	//第三，我查找一个什么结果后要给你。
//
//	//如果找到了，返回这个数的下标，否则返回-1.
//	
//	int  ret = binarysearch(arr,k,sz);	
//	
//	//arr	传过去的是 数组第一个元素的地址。
//
//	if (ret ==-1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了下标是：%d\n", ret);
//	}
//	return 0;
//}

int binary(int arr[],int k,int sz)
{
	int left = 0;
	int right= sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;

		if (k>arr[mid])
		{
			left = mid + 1;
		}
		else if(k<arr[mid])
		{
			right= mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;		
				//arr 总大小
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary(arr, k, sz);
	if (ret==0)
	{
		printf("找不到该数字\n");
	}
	else
	{
		printf("找到了，该数字的小标是=%d\n", ret);
	}
	return 0;
}