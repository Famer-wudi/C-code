#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*1，数据类型详细介绍
2，整型在内存中的存储。
3，大小端字节序介绍及判断，
4，浮点型在内存中的存储解析


使用这个类型开辟空间内存的大小（大小决定了适用范围）
看待内存空间的视角。

 1，内置类型
 char  short    int   long   long long  	float	 double 
  1		 2		 4		4		8			  4		   8       字节

 2，自定义类型 （构造类型）enum struct union 数组


 二进制数转换成十六进制数

由于2的4次方=16，所以依照二进制与八进制的转换方法，将二进制数的每四位用一个十六进制数码来表示，
整数部分以小数点为界点从右往左每四位一组转换，小数部分从小数点开始自左向右每四位一组进行转换。

*/

		//告诉我们当前机器的字节序

	//int a = 20;
//0x00 00 00 14
/*	小端：
* 14 00 00 00
* 
* 大端：
* 00 00 00 14
*/


//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

	//封装函数 ，返回1，打印小端，返回 0 返回大端。
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)			也可以直接 return *p.
//	{					
//		return 1；
//	}					还可以直接  return  *(char*)&a
//	else
//	{
//		return 0;
//	}

//int main()
//{
//	/*char a = -1;
//	signed b = -1;
//	unsigned  char c = -1;
//	printf("%d %d %d\n", a, b, c);*/
//	
//	/*
//	-1 的补码  char 只能存8个比特位，1个字节  1111 1111 
//
//	整型提升——按照高位原符号位提升，补24个符号位，还是补码。
//	
//	无符号数，高位补0。整正 原反补相同
//	*/
//
//	/*char a = -128;
//	printf("%u\n", a);
//	无符号打印
//	*/
//
//	/*
//	有符号的 char的范围  -128 ——127 。
//	无符号的 char的范围  0——255 。
//	char  a=128  计算机直接翻译成-128 
//	*/
//	/*unsigned int i = 1;
//	for ( i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}*/		//-1 换成无符号数是一个超级大的数字
//
//
//	//char a[1000];
//	//int i;
//	//for ( i = 0; i < 1000; i++)
//	//{
//	//	a[i] = -1 - i;
//	//}
//	////多大的数，放到char里面只有-128-127之间的数字。
//	////-128 -1 =127  -1到 -128 
//	//printf("%d", strlen(a));
//	return 0;
//}


		//浮点型在内存中的存储，
/*
short  int  long  的取值范围 再 limits.h 里面。

float double 的取值范围  在 float.h 里面。 
*/

//int main()
//{
//	double d = 1E10;
// 1.0 x 10的10次方。
//	printf("%lf\n",d);
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：&f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：&f\n", *pFloat);
//}

/*
空间相册有截图
E 中间数 127 float 

double  中间数 1023  加上中间数 存到内存中。




*/
int main()
{
	float a = 5.5;
	/*
	5.5
	101.1 
	(-1)^符号位次方 * 1.011 *2^2次方
	S=0；
	M=1.011
	E=2 +127 在转换为二进制位。
	0 100 0000 1 011 0000 0000 0000 0000 0000
	0x40b0000 16进制

	E 取出来，不为全0 也不为全1
	再减去127 去掉的1加上 1.011 
	0x 1.011x 2^2

	如果为全 0  
	则 规定 E= 1-127 或 1-1023 即为真实值 有效数字M不在加上第一位的1，而是还原成 0.xxx的小数
	因为  E=-127+127 
	+- x 0.xxxx x 2^(-127)  即是一个无限接近于 0 的数。

	如果为全1，
	+-  1111 1111 01100000000000000000000
	E=128+127 =255 
	1.xxxxx x2^(128) 无穷大的数字  2的32次方就是40多亿的数字。



	*/



	return  0;
}











































































































