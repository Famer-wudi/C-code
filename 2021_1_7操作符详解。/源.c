#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 5 / 2;//商2余1，	% 得到的是 余数。 取模，左操作数和右操作数必须是整数。
//	printf("%d", a);
//	double b = 5 / 2.0;//至少有一个数字是浮点数。
//	printf("b = %lf", b); // 默认后面6个小数。
//	return 0;
//}

// 左操作符，右操作符。 ——————移位操作符。
//int main()
//{
//	int a = -1;//4个字节，32个比特位。
//	//右移操作符，移动的二进制位。
//	// 00000000000000000000000000010000 
//
//	int b = a >> 1;//正数最高符号位 是  0  负数 是 1  .
//	printf("%d\n", b);
//	//右移移位，有缩小1/2的效果。
//
//	//算术右移	
//	//左边补上原符号位，右边丢弃。
//
//	//逻辑右移，
//	//右边丢弃，左边补0.
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//整数二进位表示。有原码，反码，补码。（相同）。存储到内存中的是补码。
//	//.负数存的 是补码，移的是补码。
//	//10000000000000000000000000000001 —— -1 的原码。
//	//11111111111111111111111111111110 ——  符号位不变，其余位 按位取反. 得到 ——反码。
//	//11111111111111111111111111111111 —— 反码+1，得到——补码。
//	/*二进制 1111转换成十进bai制du 是1×zhi2的三次方+1×2的平方+1×2+1=8+4+2+1=15；
//	16进制中除1,2,3,4,5,6,7,8,9外，daoA代表zhuanshu10，B代表11，
//	C代表12，D代表13.，E代表14，F代表15；所有，二进制的1111正好等于16进制的F，
//	转换为十进制都为15。
//	*/  //一个f 4个二进制位 的1，8个 f 32 个1 .所以 代表的是-1 .
//	int b = a >> 1;
//	// 补的是符号位，  所以  b 还是 -1  .
//	printf("%d\n", b);
//	return 0;
//	/* int a =5;
//	* 00000000000000000000000000000101
//	* int b =a<<1;
//	* 
//	* 左移操作符，	乘 2  的效果。
//	* 左边丢弃，右边补 0。
//	*/
//}


//位操作符  左右操作数必须为整数。
/*
按位与，

按位或，

按位异或
二进制位。
*/
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c=a& b;
//	//按位与，只要有一个是 0，就为0.两个为一才为1.
//	//011
//	//101
//	printf("%d\n", c);
//
//	//按位或，
//	//int c= a|b;
//	//只要有一个魏1，就为1，只有两个同时为0，才为0.
//	
//	//按位异或
//	//a ^ b;
//	//对应二进制位，相同为0，相异为1.
//}

//不能创建临时变量，交换两个数得值。
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int tmp = 0;
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//	//printf("%d\n%d\n",a,b);
//
//	//加减法 - 数据足够大得时候不适用。可能会溢出。
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
//	//异或得方法。
//	a = a ^ b;//等于产生ab的密码。
//	b = a ^ b;
//	a = a ^ b;
//	return 0;
//}


//编写代码，求一个整数存储在内存中的二进制的1的个数。
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//统计num的补码中有几个1.
//	//10进制%10，得到10进制的每一位。同理适用于二进制%2.
//	//while (num)
//	//{
//	//	if (num%2==1)
//	//	{
//	//		count++;
//	//		num = num / 2;
//	//	}
//	//}
//	/*int i = 0;
//	for ( i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}*/
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);	
//	}
//	printf("%d\n", count);
//	return 0;
//}


//赋值操作符
int main()
{
	/*int x = 0;
	int a = 0;
	int y = 0;
	x = y + 1;
	a = x;*/

// 复合赋值符
	/*int a = 10;
	a = a + 2;
	a += 2; a >>= 1;*/

//单目操作符

//非0 为真。 逻辑反操作。！ 
	/*int a = 0;
	if (!a)
	{
		printf("hehe\n");
	}*/

	/*int a = 10;
	int* p = &a;
	*p = 20;*/

//sizeof 计算的变量所占内存空间的大小，单位是字节。
	//int a = 10;
	//char c = 'r';
	//char* p = &c;
	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(a));	//4
	//printf("%d\n", sizeof(c));	//1
	//printf("%d\n", sizeof(p));//32位操作平台，指针变量是4个字节。64位，8个字节。
	
	//printf("%d\n", sizeof(arr));// 40
	//printf("%d\n", sizeof(int [10])); 
		//对于数组来说，去掉数组名，剩下的就是它的类型。

	//short s = 0;
	//int a = 10;
	//printf("%d\n", sizeof(s=a+5));//2,不会进行真实的运算。
	//printf("%d\n", s);//0

//~ 按二进制位取反，
	/*int a = 0;
	printf("%d\n",~a);*/
	//0000000000000000000000000 补码
	//1111111111111111111111111 取反 得到的还是补码，求原码。
	//1111111111111111111111110 反码
	//1000000000000000000000001 原码，

	//int a = 11;
	// 1011 | 0100
	/*a = a | (1 << 2);
	printf("%d\n", a);
	a = a & (~(1 << 2));
	printf("%d\n", a);*/

//++ --
	//int a = 10;
	////printf("%d\n", ++a);
	////前置++，先++，后使用
	//printf("%d\n", a++);

//强制类型转换。
	//int a = (int)3.14;

//逻辑与，只有两个操作数都是真，结果才是真。	

	//逻辑或 如果一个操作数或多个操作数为 true，
	
	//则逻辑或运算符返回布尔值 true；只有全部操作数为false，结果才是 false。       	按位与，按位或。
	/*int a = 3;
	int b = 5;
	int c = a && b;
	int d = a || b;
	printf("%d\n%d\n", c,d); */

// -- ++  后置++，先使用 ，后++
	//int a = 1; int b = 2; int c = 3; int d = 4; int i = 0;

	//i = a++ && ++b && d++;   //若果左边为假，右边的就不算了。

	//i = a++ || ++b || d++;  //如果左边为真，右边的就不用算了，

	//printf("%d\n %d\n %d\n %d\n %d\n", a,b,c,d,i);

//条件操作符
	//exp?exp2:exp3  
	//如果表达式1结果为真，那么运行表达式2为整个表达式的结果。如果1为假，3为结果。

	//max=(a>b?a:b);

//逗号表达式 ，从左往右以此计算，最后一个表达式为整个的结果。
	
// []数组下标引用操作符				() 函数调用操作符

//.  
	//struct s
	//{
	//	char name[20];
	//	int age;
	//	char id[20];
	//};//结构体类型  

	////使用struct s 这个类型创建了一个s1，并初始化。
	//struct s s1 = {"张三",20,"1231231"};
	//struct s* ps = &s1;
	//printf("%s\n", ps->name);
	//// 结构体指针->成员名
	//printf("%s\n", (*ps).name);
	//printf("%s\n", s1.name);
	//printf("%d\n", s1.age);
	//结构体变量。成员名。 

//隐式类型转换，整型提升。
	//char a = 3; 
	//000000000000000000000011
	//截断最低位 00000011 -a
	//char b = 127; 
	//000000000000000001111111
	//01111111
	//char c = a + b;
	//a -000000000000000000000011 .按照符号位来补位，整型提升。
	//b -000000000000000001111111
	//c -000000000000000010000010
	//10000010 - c
	//111111111111111110000010 -补码
	//111111111111111110000001 -反码
	//100000000000000001111110 -原码
	//printf("%d\n", c);

// 优先级，结合性，是否控制求值顺序。
	/*int a = 10; int b = 20;
	int c = b + a * 3;
	int c = b + a + 3;*/
	//N/A 无结合性，L-R，从左到右

	return 0;
} 