//#include<stdio.h>
/*
char	字符数据类型 
int main()
{		//变量ch就是申请的内存空间的名字
	char ch = 'A';//	向计算机内存申请一块空间存放  	单引号引起一个字符	
	
	printf("%c\n"，ch);		//打印字符格式的数据  %c 以字符的形式打印ch
	
	return 0;
}


short int	短整型
	short age = 20;//表示，向内存申请两个字节，用来存放20.
	
	float weight = 70.0f;//f避免出现double到float截断，精度丢失警告 向内存申请四个字节，存放小数。
	
	return 0;
	
		
int		整型

	int age = 20; 
	printf("%d\n",age);		%d--打印整型十进制数据

long	长整型	
	long num = 100;
	printf("%d\n",num);
long long	更长的整型

float		单精点符数 （后面小数点的位数）		%f 打印浮点数字，-打小数
	float f = 5.0;
	printf("%f\n",f);			小数点后 6位


double		双精度浮点数		%lf
	double d = 3.14;
	printf("%lf\n",d);

*/


/*int main()
{
//	char ch = 'A';
//	printf("%c\n",ch);
	printf("%d\n", sizeof(char));

	printf("%d\n", sizeof(short));

	printf("%d\n", sizeof(int));

	printf("%d\n", sizeof(long));

	printf("%d\n", sizeof(long long));

	printf("%d\n", sizeof(float));

	printf("%d\n", sizeof(double));
	
	return 0;
}


/*	 类型向内存申请多大的空间	sizeof 大小  单位：字节 为什么出现这么的类型以及这样类型的大小。

	printf("%d\n",sizeof(char));	1

	printf("%d\n",sizeof(short));	2		整型 短整型的区别。
			
			int age = 20 //表示 4个字节，32个比特位，int能表示的范围是2^32这么大，浪费空间。
			换成 short int age = 20 //表示 2个字节byte，16个比特位bite，范围到2^16-1 = 65535
					这就是分成那么多类型的原因。表示更大的范围，用更大的数据类型。

	printf("%d\n",sizeof(int));		4

	printf("%d\n",sizeof(long));	4   c语言标准规定，只要sizeof(long)>=sizeof(int)就可以了。大小取决于平台。

	printf("%d\n",sizeof(long long));	8

	printf("%d\n",sizeof(float));		4
	 
	printf("%d\n",sizeof(double));		8

*/



//int num2 = 20;//全局变量，定义在	代码块（{}）之外的变量。
//int main()
//{
//	int num = 10;//局部变量，定义在代码块（{}）内部
//	return 0;
//}

//int a = 10;
//int main()
//{
//
//	printf("%d\n",a);
//	return 0;
//}
//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("%d\n",a);//全局变量和局部变量的名字建议不要相同，当重复时，优先表达局部变量。 
//	return 0;
//
//}



//int main()
//{
//	//计算两个数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入数据--使用输入函数scanf
//	scanf("%d%d", &num1, &num2);	//取地址符号。规定，一个符号后面放一个。
//	//int sum = 0;
//						//C语言规定，变量要定义在当前代码块的前面。
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//		return 0;
//}



//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf_s("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	{
//		printf("num = %d\n", num);		//这个大括号在外面的大括号作用域里面，所以num局部变量可用。
//
//	}
//
//
//	return 0;	
//}


//int main()
//{
//	extern int g_val;				//extern声明外部符号。
//	printf("g_val = %d\n", g_val);
//	return 0;
//}



//int global = 2020;
//
//void test()
//{
//	printf("test = %d\n", global);
//
//}
//int main()
//{
//
//	test();
//	printf("A =%d\n", global);
//	return 0;
//}



//int main()
//{
//	{
//		int a = 23;
//		printf("A = %d\n", a);
//
//	}//生命周期，局部变量进作用域（{）开始，出作用域（}）结束。
	
//	//全局变量，就是main函数的生命周期，也就是整个程序的生命周期。
//
//	return 0;
//}