﻿#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*int main()//求最大值
{
	int num1 = 10;
	int num2 = 20;
	if (num1>num2)
	{
		printf("较大值是 = %d\n",num1);
	}
	else
	{
		printf("较大值是 = %d", num2);
	}
	return 0;
}

			sizrof  后面跟变量 加空格 跟类型加括号
int main()
{														//arr 数组 --> 是 int [6] 的类型。
	int a = 10;
	int arr[] = { 1,2,3,4,5 };
	printf("%d\n",sizeof(a));//sizeof(int)
 	printf("%d\n",sizeof a);
	printf("%d\n",sizeof(arr));//计算数组大小，每个元素的单位是字节。有五个元素，大小就是4*5= 20 个字节。
	printf("%d\n", sizeof(arr) / sizeof arr[0]);//每个元素所占字节大小是一样的所以 可以用 [0]
	return 0;
}

 ~	对一个数的二进制位取反	二进制位  
	1010		0变1，1变0
	0101

int main()
{
	int a = 0;//4个字节，32个比特位
	//00000000000000000000000000000000
	//11111111111111111111111111111111
	
	//二进制位	最高那一位表示的是 ————符号位——《《第一个为1就是负数，为0就为正数。》》
	
	int b = ~a;			//b是有符号的整型。
	//原码，反码，补码，

	//负数 在内存中存储的时候，存储的是二进制的补码。

	printf("%d\n", b);//使用的，打印的是这个数的原码

	//如果是一个补码，求原码，怎么求呢？
	
	//原码符号位不变，其他位按位取反，得到反码，反码加一得到补码。

	//11111111111111111111111111111111————补码	减一
	//11111111111111111111111111111110————反码		符号位不变取反得到原码，二进制的最高位就是符号位
	//10000000000000000000000000000001————原码		《符号位，为1就是负数，为0就为正数。》》所以为 -1												

	return 0;
}

-1  ->	整型		->	32个比特位	。
1,		这些正数和负数在内存中该怎么存呢？存进去之后该怎么区分它是负数呢？

规定——这些数叫	有符号数，

这些存起来的数字即 有符号数的二进制位的最高位		叫做	符号位。	

[1][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]	————规定：二进制位	最高位是1，->负数。

[0][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][] ——————最高位是0 ，->正数

			原码，									
	直接按照正负写出来的二进制序列。

					反码，										
		是原码符号位不变，其他位取反得到的。0变1，1变0

							补码		
					由	反码+1	得到

	存的是整型		-2		4个字节 32个比特位
										100000000000000000000010	原码
										111111111111111111111101  反码
										111111111111111111111110	补码

只要是整数，内存中存储的都是二进制的补码			

	正数的原码，补码，反码相同。

			负数存的都是补码。


前置，后置，++ --

int main()
{
	int a = 10;
	//int b = a++;//后置++；先使用a的值，把a赋值给b, 再++。	// a =11，b= 10;
	//int b = ++a;//前置++；先++，再使用。	// a 11，b  11.
	//int b = a--;//后置--；先使用，再--。 //a 9 ,b 10
	int b = --a;//前置--；先--，再使用。//a 9, b 9

	printf("a= %d\n b= %d\n", a, b);

	return 0;
}

强制类型转换。	（类型）	

int main()
{
	int a = (int)3.14; //double-->int
	printf("%d\n",a);
	
	return 0;	
}

关系操作符

	>		>=		<		<=			!=	测试“不相等”		== 判断是否相等 

逻辑操作符 
	真—— 非 0
	假—— 0

&& 逻辑与	并	两个字符同时为真，结果才为真。	真并且真，真。	真并且假，假。

|| 逻辑或	或者 两个里面只要有一个为真，结果就为真。

int main()
{
	//int a = 3;	//c = 1
	int a = 0;	//	&&	只要有一个为假，结果就是假  0 . c = 0
	int b = 0;
	int c = a && b;	//只关注 左边右边的真假，a并且b 都为真，才为真	1	.
	
	//int c = a || b;// c= 1	// 他俩为假，才为假。假或假，假。	真或真，真。	假或真，真。
		
	printf("%d\n",c);
	return 0;
} 

										条件操作符	也叫三目操作符。有三个操作数。

	exp1 ? exp2 : exp3	//看成一个整体。 

 如果表达式 exp1,为真，那么exp2 ，就为整个表达式的结果。

如果表达式exp1,为假，那么exp3，就为整个表达式的结果。

int main()
{
	int a = 10;
	int b = 20;
	int max = 0;

	max = (a > b ? a : b);//a真的大于b吗，不是，为假，那么b就要被执行。

	if (a>b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	return 0;
}

						逗号表达式

exp1,exp2,exp3,...expN

										
													 下标引用操作符，函数调用操作符  和  结构成员操作符。

							[]	()		.		->	结构体。

取地址操作符 &		*	间接访问操作符（解引用操作符）


int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	//int arr[10] = 0;
	
	//arr[4];			//这里的[]就是下标引用操作符。
	
	int a = 10;
	int b = 20;
	int sum = Add(a, b);	//	这里的（）就是函数调用操作符。
	printf("%d\n",sum);
	return 0;
}



常见关键字				c语言内置的关键字

	auto		break		case			char			const		continue		default			do			double		else		
  自动		中断	switch	case循环   字符数据类型		常变量		继续（循环）	默认		do while循环	          if else语句
																											  双精度浮点数据类型
enum	枚举

				单精度浮点数据类型
	extern			float		for			goto		if		int			long		register		return		short		signed
引入外部符号				  for循环	 //goto语句			 //整型       //长整型    寄存器关键字		返回		短整型		有符号的	   

sizeof		static		struct			switch			typedef			union		      unsigned		  void		volatile	  
 的大小		静态的		结构体关键字	case语句		类型定义	  联合体，共用体	  无符号的       无空                 
 
		while																					volatile				体现C语言段位的关键字	

int main()
{
	int a = 66;	//局部变量——也就是自动变量。	局部变量前都要加auto，通常省略掉。
	return 0;
}

计算机存储数据
					寄存器									寄存器访问速度比高速缓存更快
				高   速  缓   存		访问速度比内存更快	几十M
			内                     存			8G/4G/16G	内存的访问速度高于硬盘，造价比较高。
		硬                               盘					500G

cpu	运算器从内存里面拿数据，处理。	起初 cpu处理速度 和内存访问速度一致。随着发展，cpu速度远大于内存访问速度。	

然后cpu 从寄存器里面拿数据，拿不到数据在依次向下访问。


/*	cpu	运算器		控制器 返回 地址到内存	     数据访问传输
															
										外   存  储     器
										 	👇		  👆	
					输入					👇		  👆	           输出
计算机	键盘鼠标————————>      内     存     储      器     ———————— 👉（显卡，声卡）
											  👇		   👆
											  👇           👆
	cpu									运  算  器	   控  制   器
	*/

/*	计算机系统软件		操作系统	语言处理系统		系统服务程序	数据库管理系统		
							
int main()
{
	//int a = 10;//要频繁使用。													
	register int a = 10;//建议把a定义成寄存器变量。访问速度更快。		

int定义的变量是有符号的。 	
	int a=-1				signed int	a = -1			signed通常省略。
	unsigned int num = -1	无符号的，永远都是正数。

	return 0;
}

int main()
{
	typedef unsigned int u_int;					//类型重定义	unsigned int 的别名。
	unsigned int num = 20;			//无符号整型
	return 0;
}								————1分53秒。


void test()
{
	int a = 1;			//static 静态的局部变量
	a++;					//a 是局部变量，进来的时候在，出去的时候就销毁了。作用域和生命周期只在这个函数里面。
	printf("a=%d\n",a);
}

int main()
{
	int i = 0;
	while (i<5)
	{
		test();
		i++;
	}

	return 0;
}
static 修饰局部变量	局部变量的生命周期变长

static 修饰全局变量		改变了全局变量的作用域，静态的全局变量，只能在自己所在的源文件内部使用。
			出了本源文件就没法再使用了。

static 修饰函数。	
改变了函数的链接属性。 外部链接属性变为-->内部链接属性。

extern int Add(int, int);
//extern 声明外部函数。		在别的源文件里面也可以用。

int main()
{
	int a = 10;
	int b = 10;
	int sum = Add(a, b);
	printf("sum=%d\n",sum);
	
}

define 定义标识符常量
#define MAX 100

	int a = MAX;

define 可以定义宏——带参数的常量。


函数的实现。
/*int Max(int x,int y)
{
	if (x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

//宏的定义	
#define MAX(X,Y)(X>Y?X:Y)

int main()
{
	int a = 10;
	int b = 20;
	//函数的方式求两个数的最大值。
	int max = Max(a, b);
	printf("max= %d\n",max);
	
	//宏的方式
	max = MAX(a, b);
//max=(a>b?a:b)
	printf("max=%d\n",max);
	return 0;
}


									指                        针

内存是电脑上特别重要的存储器，计算机所有的程序的运行都是在内存中进行的。
所以为了有效使用内存，所以就把内存划成一个个小的内存单元，每个内存单元的大小是1个字节，——8个比特位。
为了能够有效的访问到内存的每个单元，就给内存单元进行了编号，这些编号就成为该内存单元的地址。

			  内      存
			一	个	字	节 |0xFFFFFFFF	
			一  个  字  节 |0xFFFFFFFE
			一  个  字  节 |0xFFFFFFFG

	对比内存地址	960万的国土面积，西安邮电大学东区六号楼602宿舍—通过现实地址，找到空间，房间。每个房间的都给了一个编号。
										绝对的地址		
如何产生地址	32位，64位。

32位，32根地址线，/数据线，————电线要通电，有正电负电之分， 正电1表达，负电0表达， 电信号转换成了数字信号。
那这32根地址线产生的所有电信号的可能性有：这么多种：
/*
						00000000000000000000000000000000
						
						00000000000000000000000000000001
						
						00000000000000000000000000000010
						
						........						

						01111111111111111111111111111111

						10000000000000000000000000000000
						
						......

						11111111111111111111111111111111

						共有	2^32	种 二进制序列。	可以产生 2^32 个编号，也就是地址。

每一个这样的编号对应到这样的内存块上的话，这样的编号就成为 内存块的编号。语法上叫 这个内存块儿的《《地址》》！

 假设一个内存单元按一个比特位划分，那么就有2^32 个地址，就能访问2^32  4,294,967,296 个比特位的空间。					

 4,294,967,296	个 比特位换算成 GB 是	0.5个Gb		也就意味着给再多的内存也就只能访问 0.5个G的空间。

 所以一个内村单元按一个比特位划分不合适。
 
 如果把一个内存单元的单位	换成一个字节，那么就能访问 0.5 x 8 = 4个G 的空间。 

 所以设计内存的时候，那样一个个小的格子，最终是以一个字节为单位划分的。	一个空间	就是	一个字节。

 int a = 10;  向	内存申请	四个字节	的空	间。 给变量申请内存的一种方式。这四个字节	每个字节	都有自己的地址。

*/


/*int main()
{
	int a = 10; //4 个字节	这四个字节放到哪里去了。想拿到这个地址看一看。
							
	//&a; 							//	取出a的地址			

	//printf("%p\n",&a);		//	%p  以地址的形式打印。	打印出来是 16 进制的。		00FDF8EC	调用程序员计算器，转换成二进制。

	int* p;			指针变量 ————存放地址的变量。	指针变量的类型表示方法 类型* 
		
	p= &a;				//把地址存起来。	
				
	printf("%p\n",&a);								
	printf("%p\n",p);					

	*p = 20;				怎么通过对象的地址访问对象？  *指针变量名
								解引用操作符*间接访问操作符	
	printf("a=%d\n",a);
 
	return 0;
}

int main()
{
	int num = 10;
	&num;
	int* p = &num;	
	*p = 20;
	printf("%p\n", &num);
	printf("%d\n", p);
	return 0;
}

int main()
{
	char ch = 'w';
	char* pc = &ch;
	*pc = 'A';
	printf("%c\n",ch);
	return 0;
}

32位的机器上，地址是 32个二进制位的序列。需要32个比特位，===4个字节===
所以在32位计算机上，一个指针变量的大小 是四个字节。


64 位机器
地址 是 64 个二进制位，二进制位的最小单位i是比特。，需要64个比特位，=====8个字节====
所以，64位计算机上的 一个指针变量大小是  8个字节。
*/
//debug 配置管理器。改操作位系统。
