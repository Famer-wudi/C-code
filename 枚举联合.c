#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

			//结构体 让占用空间小的成员尽量集中在一起。
//不是所有硬件平台都能访问任意地址上的任意数据的，某些硬件平台只能在某些地址处去某些特定类型
//的数据，否则抛出硬件异常。
/*
数据结构，尽可能的在自然边界上对齐。原因在于，为了访问未对齐的内存，处理器需要两次访问，
对齐的内存只需要一次访问。

32位一次性能读取4个字节。  char c  int a   00 xx xx xx 01 00 00 00 会自动跳过c,直接找到了a.
拿空间来换时间。

	#pragma pack(8)  设置默认对对齐数位8  #pragma pack() 取消。。

#include<stddef.h>

offsetof  计算结构体成员相对 起始位置的偏移量。 宏可以传类型。

size_t offsetof((struct S,c));

*/


//位断成员 必须是 int 类型 。 signed / nusigned 
//位断成员名 后边有一个冒号和数字。

//struct A		//二进制位 
//{
//	int _a : 2;	//2个 比特位 就够用  节省空间，
//	int _b : 3;
//	int _c : 31;//不能大于32
//};

//32 个 比特位，可以放完a ,再放b,	
//c 需要31 个 则在重新申请一块儿空间。  ab 那块儿 不再用了，浪费掉。
/*
位断也可以是 char 类型的 ，根据需要以 4个字节或 1个字节的方式来开辟。

涉及很多因素，是不跨平台的。注意可移植的程序应该避免使用位断，

因素位 大小端存储方式不一样 从右向左使用，还是从左向右使用比特位。

还有机器操作位的限制。 位断被当成有符号还是无符号是不确定的。

当第二个位断比较大，是舍弃第一个剩下的还是利用，没有统一的规定。
*/
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

/*
		0——————————————————————31  比特位的使用
 4位版本号 4位首部长度 8位服务类型（TOS）		16为总长度（total length）

 16位标识符（identifier）		3位标志  13位片偏移（offset）

 8位生存时间（time to live）  8位协议（protocol）  16位首部校验和（checksum）

				32位源IP地址（source address）
				32位 目的IP地址（destination address）
		32位选项（若有)
							数据
*/


		//枚举  可能的值 列举 

//enum day	//大小一个 int 的大小 4
//{
//	mon,	// 0		//可能的取值-常量。 第一个默认从 0 开始
//	tues,	// 1 
//};//编译器指定它是什么类型的值。
//
//enum aa
//{
//	male = 2,		//初始值是多少可以设置 然后 逐渐递增 1.
//	female = 4,
//};

//int main()
//{
//	enum day a = mon;	//(只能 赋值 已有的选项)
//	return 0;
//}
/*
#define 定义的是符号  预编译阶段会改变它的值。 会删除所有的注释。会把该符号换成

而枚举 计算机知道这是个类型，比define 有类型检查，更加严谨。

防止命名污染（封装） 和别的变量重名，		#define red 0  

便于调试， 可执行程序的时候调试 ，

程序执行的red 是0 ，而眼睛看到的是red ,  如果是一个复杂的定义，可能被替换出错了 不易于发现错误。

使用方便可以一次使用多个常量  ，增加了代码的可读性和维护行。

*/


		//联合共用体	 
//union un
//{
//	char c;//1
//	int i;//4
//};

//int main()
//{
//	union un u;
//	printf("%d\n", sizeof(u));//4		c那一个字节 在 i 的4个字节里面。共用同一块儿空间， 
//
//	printf("%p\n", &u);
//
//	printf("%p\n", &(u.c));			//联合体 大小 至少是最大成员的 大小 
//
//	//同一时刻 成员只能使用一个。	
//
//	printf("%p\n", &(u.i));		//地址是一样的。
//	return 0;
//}


	// 判断 大小端字节序存储方式。
//int check_sys()
//{
//	/*int a = 1;
//	return *(char*)&a;*/
//	union //可以匿名
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}

//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (ret==1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//union un		 联合体的大小 不是最大对齐数的整数倍时，要对齐到最大对齐数的整数倍处。
//{
//	int i;// 4 8 4 
//	char arr[9];//对齐数 是  1 相当于写了 五个 char  
//}u;
// 
//int main()
//{
//	printf("%d\n", sizeof(u));
//	return 0; 
//}



//通讯录 
/*
test .c 测试 
contact.h 声明函数
contact. c  函数的实现。

增删查改 打印 排序 。
*/