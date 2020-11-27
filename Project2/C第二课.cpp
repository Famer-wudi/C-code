#define _CRT_SECURE_NO_WARNINGS 1//设置方法：notepad++ 文件夹：vcprojectitems——newc++file.cpp 修改。
#include<stdio.h>
#include<string.h>
/*int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	
				scanf("%d%d", &a, &b);//输入函数，在c命令框里输入内容。scanf,输入函数。 
	
	sum = a + b;
	printf("sum = %d\n", sum);

	return 0;
}


int main()

//#define MAX 10		3，//#define 定义的标识符常量

{
	//const  int num = 4;					2，//const 恒定的，常属性，num就是const 修饰的常变量，下面的num就不能变了

	//print("%d\n", num);

	//num = 8;			//直接写 3 = 5;是不行的
	//printf("%d\n", num);

	//100;//666;						1，//字面常量

	//const	int n = 10;			//n是一个有常属性的变量，在要使用常量的地方是不能使用的。
	//int arr[10] = { 0 };//n是变量。

	//int arr[MAX]= { 0 };
	//printf("%d\n", MAX);
	return 0;
}


	4,	//枚举常量	一一列举。枚举关键字；enum
	enum Color		/Sex
	{
		RED,		//MALE,
		YELLOW,		//FEMALE,
		BLUE		//SECRET

	}


			放在枚举类型里面的	
		//MALE FEMALE SECRET ---这三个都是枚举常量。


int main()
{
	enum Color color = BLUE;//希望得到一个蓝色
	 
	
		//enum Sex s = FEMALE;		//0，都是有值的
		//printf("%d\n", MALE);		//1
		//printf("%d\n", FEMALE);	//2
		//printf("%d\n", SECRET);
		return 0;
}


int main()	//选择语句
{
	int input = 1;

	printf("加入比特\n");

	printf("你要好好学习吗?\n(1/0)>:");

	scanf("%d", &input);

	if (input == 1)
		printf("好offer\n");
	else	
		printf("卖红薯\n");
	
	return 0;
}


int main()
{
	char arr1[] = "abc";//"abc" 字符串。 arr1[] = 数组

	char arr2[] = { 'a','b','c',0 };//\0 是转义字符，的值为0。是字符串结束的标志。

	printf("%s\n",arr1);
	printf("%s\n",arr2);

	return 0;
}


int main()				//string length 计算字符串长度。
{

	char arr1[] = "abc";

	char arr2[] = { 'a','b','c' };		

	printf("%d\n", strlen(arr1));		//string length 计算字符串长度。	遇到\0,统计长度就结束了。**\0作为标志，不算字符串内容。**

引一个<string.h>的头文件。

	printf("%d\n", strlen(arr2));//如果没有0，则会从随机值里面直到找到一个0，为止。
	
	return 0;
}


int main()
{
	printf("abcn");
	
	printf("abc");	//没有换行的时候，请按任意键继续在后面跟着。
	
	printf("abc\n");		//\n 就把原来一个普通字符n的意思转变了，换成了换行的意思。
	
	printf("c:\test\32\test.c");//		这里的\t	水平制表符的意思。
	
				\\ 	表示为一个反斜杠，防止它被解释为一个转义序列符里面的斜杠。转义字符表。
	
	printf("%s\n", "\"");//输出为 "
	
	printf("%d\n",strlen("c:\test\32\test.c"));//计算c:\test\32\test.c 这段字符串的长度。
	
		32作为8进制代表的10进制数字——作为ASCII码值———所对应的字符。

	printf("%c\n", '\32');//→

	printf("%d\n", '\x61');		//\xdd		dd这两个16进制数字转换成10进制数字之后，作为ASCII码值所对应的字符。
	
	return 0;		
}

循环语句
int main()
{
	int line = 0;//line 行数

	while (line<20000)
	{
		printf("敲一行代码：%d\n",line);
		line++;
	}
	if (line>=20000)
	{
		printf("好offer\n");
	}

	return 0;
}


int main()		//二进制位中，0为假，1为真。 

		& 按位与	只要有一个为假就为假，两个为真才为真。

	   | 按位或		只要有一个为真就为真。			

		^ 按位异或 对应的二进制位相同则为 0，相异则为1.


{
	/*int a = 3;
	int b = 5;
	int c = a&b;*/

	/*int a = 3;
	int b = 5;
	int c = a | b;*/

	//int a = 3;
	//int b = 5;
	//int c = a ^ b;
	/*printf("%d\n", c);*/
/*	return 0;
}


{
	// = 赋值		== 判断是否相等。
	int a = 10;
	a = 20;
	a = a += 10; 
	a = a - 10;
	a = a -= 10; 
	a = a & 2;
	a &= 2;
	a >>= 10;//= a = a>>10;
	//复合赋值符
	return 0; 

}

	/*int a = 10;
	int b = 20;
	a + b;*/		//	+ 左右两边有两个操作数，所以叫	双目操作符。


//	单目操作符
		/*！	逻辑反操作	把假的变成真的，或者把真的换成假的。

		-	负值 负数， a = -2 b = -a

		+	正值	正数，一般忽略

		&	取地址符

		sizeof	操作数的类型长度（以字节为单位）	sizeof 计算的是变量或者类型所占空间的大小。单位是字节。

		~  对一个数的二进制位取反

		--	前置后置

		++	前置后置

		*	间接访问操作符（解引用操作符）

		(类型)	强制类型转换*/

//{	c 语言表示真假，0 ——假，	非0————真

	/*int a = 10;
	printf("%d\n",a);
	printf("%d\n",!a);*/


	/*int a = 10;
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof a );*/
	
	/*int arr[10] = { 0 };	//	10个整形元素的数组；
	
	int sz = 0;//创建一个名为sz的整型变量。
	
	sz = sizeof(arr)/sizeof(arr[0]);//	计算元素的个数	=	 数组总大小/每个元素的大小。
	
	printf("%d\n",sizeof(arr));					//= 10*sizeof(int)= 40					
	
																	
	printf("sz = %d\n", sz);
	
	return 0;

}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int max = 0;
	if (num1 > num2)
	{
		printf("max=%d\n",num1);
	}
	else
	{
		printf("max=%d\n",num2);
	}

}*/

/* int Max(int x, int y)
{
	if (x > y)
		return x;
	else
	{
		return y;
	}

}
int main()
{ 
	int num1= 10;
	int num2 = 20;
	int max = 0;
	max = Max(num1, num2);
	printf("max= %d\n",max);
		return 0;
}*///24分钟。