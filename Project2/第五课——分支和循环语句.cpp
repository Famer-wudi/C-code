#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
									//顺序语句		选择语句	循环语句	

//	C语言 是一门结构化的程序设计语言		一个分号 ;	就是一个语句

/*int main()	//选择语句
{
	int input = 1;

	printf("加入比特\n");						//scanf(,&输入内容)  参数前加个 &

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
	int line = 0;//line 行数

	while (line < 20000)
	{
		printf("敲一行代码：%d\n", line);
		line++;
	}
	if (line >= 20000)
	{
		printf("好offer\n");
	}

	return 0;
}*/

/*if （表达式） 
		语句;		如果表达式为真，为非0，就执行 语句。		否则不执行。

if	如果	(表达式) 为真 非0，
		就执行语句1；		否则就执行语句2.
else				  
		执行语句2；

if （表达式1）					如果表达式为真，非0，就执行语句1.
	执行语句1；
else if（表达式2）				另外如果表达式2，成立，那就执行语句2.
	执行语句2；
else							否则就执行语句3/
	执行语句3；

	只能执行一个。 
*/


/*int main()
{
	int age = 99;		
	if (age < 18)			//if 控制多条 语句，要用代码块 {}  括起来。	
	{
		printf("未成年\n");	
		printf("不能饮酒");
	}

	else							// if else 当成两个逻辑
	{
		if (age >= 18 && age < 28)  // 并且 逻辑与	左右两个都为真，结果才为真。 
			printf("青年\n");
		else if (age >= 28 && age < 50)
			printf("壮年");
		else if (age >= 50 && age < 100)
			printf("老年");
		else
			printf("老布什");
	}
	单	分	支	if	
	/*else										//并列逻辑去判断
		printf("成年人\n");
	*/
	/*else if (age >= 18 && age < 28)  // 并且 逻辑与	左右两个都为真，结果才为真。 
		printf("青年\n");
	else if (age >= 28 && age < 50)
		printf("壮年");
	else if (age >= 50 && age < 100)
		printf("老年");
	else
		printf("老布什");*/
	/*return 0;
}*/

// 悬空ELSE

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)		//这个条件为假。就不会往下执行了。
//		if (b == 2)
//			printf("hehe\n");		
//		else                         //else 会和	最近的未配对的 if 配对。
//			printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (5==num)
//	//if (num = 5) // 赋值=   因为if 为真 所以没报错  ==  判断相等
//	{
//		printf("hehe\n");		//建议 （5==num）	常量放左边，效果更优一些。
//	}
//	printf("haha\n");
//	return 0;
//}


// 判断一个数是否为奇数。	打印出1——100的奇数。

/*int main()
{
	int i = 1;
	while (i<=100)
	{
		printf("%d\n", i);
		i += 2; 
	}
	//while (i<=100)
	//{
	//	if (i%2 != 0)	//	！= 	判断 不等于		%取模 取余数。
	//		printf("%d ",i);
	//	i++;
	//}
	/*while (i>=1 && i<100)
	{
		printf("%d \n");
		i++;
	}

	return 0;
}*/


//				switch  case 语句		case 情况
//
/*switch （ 整形表达式）		判断整型值，	然后	就从	该项	开始执行。
{
	语句项；
}
case 整型常量表达式:		英文冒号 
	语句;
	break;		//执行完就跳出去了
*/
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);		/*scanf里面是不加\n的
//							加了\n占了一个输入位
//							需要多输入一个数据才会结束输入*/
//	/*if (1 == day)
//	printf("星期一\n");
//else if (2 == day)
//	printf("星期二\n");*/
//	//......
//	switch (day)
//	{
//	case 1:						//case 1:  case后面必须加个空格
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	}
//	return 0;
//}

// case 语句 还可以写成

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//		printf("工作日");
//	}
//	return 0;
//}

//switch  case  break  一体的  case 后面不一定要跟break 。 最后一个语句一定要跟 break

//break 停止执行，没有遇到break 就一直执行。

//switch 里面可以套一个switch。

// case里面可以包含 if 语句。 

//default 和case 没有顺序要求。

//int main()
//{int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break; //停止这个switch
//		}//然后从这个打括号里出来，没有遇到break 就执行case 4.
//	case 4:
//		m++;
//	default:
//		printf("输入错误");
//		break;
//	}
//	printf("n=%d\nm=%d\n", n, m);
//
//	return 0;
//}


 //		循环语句	

// 	while		for    do  while 

//int main()
//{
//	//if (1)	if 条件为真 ，执行语句。
//	while (1)   //恒为真，就一直打印。
//		printf("hehe\n");
//	return 0;
//}

// while  条件不等于0；就执行语句，语句执行完继续回到条件判定，继续执行语句，直到为假，条件不成立，就跳出循环。

/*int main()
{
	int i = 1;
	while (i<=10)
	{
		//i++;
		if (i == 5)
			continue;			// 跳过本次循环后面的代码	《《终止循环中 本次循环 它后面的代码。》》跳到循环的判断部分。
		//终止本次循环，本次循环种 continue 后面的代码不会再执行。而是直接跳到while语句的判断部分，进入下一次循环的入口判断。		
		//不想打印5，i==5 continue 1234 6789

		//只要遇到break，就会停止所有的循环，永久终止循环。 
		printf("%d\n", i);
		i++;
	}
	return 0;
}*/

//int main()
//{				//EOF end of file 文件结束标志。输入 ctrl z 就等于 EOF		值 是 -1
//	int ch = 0;	
//	//int ch=gerchar();
//	while ((ch = getchar()) != EOF)			//getchar()  等待输入一个字符
//		putchar(ch);			//  等价于printf 把字符打印出来。
//	//printf("%c\n", ch);
//	return 0;
//}

//a为一对象的指针  a->fs 表示调用a所指的对象中的成员fs 
