#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//分析递归，	列数学公式。

//
//#include "add.h"

//void print(int i)
//{
//	//按照顺序打印它的每一位。
//	if (i > 9)//说明是两位数
//	{
//		print(i/10);
//	}
//	printf("%d ", i%10);
//}
//
//
//
//int main()
//{
//	unsigned int i = 0;
//	scanf("%d", &i);
//	print(i);
//	return 0;
//}

//计算字符串长度
//int mystrlen(char* arr)
//{
////因为arr上传上来的是字符串第一个字符的地址，*arr就是第一个字符串。
////又因为\n，是字符串的结束标志，所以要判断第n个字符是不是0，
//	if (*arr != '\0')
//	{
//	//如果是就返回1+mystrlen;
//		return 1 + mystrlen(arr+1);
//		//地址加一就是下一个字符的地址 
//		//再传给mystrlen *arr+1,就是下一个字符，
//		//然后在调用函数在判断下一个字符是不是转义字符。
//	}
//	else
//		return 0;//若果第一个字符就是就返回 0；
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = mystrlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//n的阶乘
//int gc(int a)
//{
//	int i = 0;
//	int r= 1;
//	for ( i = 1; i <= a; i++)
//	{
//		r *= i;
//	}
//	return r;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = 0;
//	ret = gc(a);
//	printf("%d\n", ret);
//}

//int mys(char *arr)
//{
//	if (*arr!='\0')
//	{
//		return 1 + mys(arr + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "bit";
//	int ret = 0;
//	ret = mys(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//int jc(int i) //1,确定函数的类型。2，输入参数的类型。3，返回你想要的结果。
//{
//	if (i==1)
//	{
//		return 1;
//	}
//	else
//	{
//		return i * jc(i - 1);
//	}
//
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf("%d", &i);
//	j=jc(i);
//	printf("%d\n", j);
//	return 0;
//}