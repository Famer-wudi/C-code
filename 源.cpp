#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//逆序字符串内容

//前n项之和。2 22 222 2222 22222

//水仙花树 153=1^3+5^3+3^3  该数有几位，则每位的几次方相加等于该数本身，
 
//打印菱形。	1 3 5 7 9 11 13 11 9 7 5 3 1 行 空格 *

//1瓶汽水一元。两个空瓶可以换一瓶汽水，给20元 可以喝几瓶? 

//奇数在前，偶数在后面。

//无符号char 整型提升补0，有符号char 整型提升补符号位。 补比特位。

//strlen 找\0就停止， 

//找凶手
/*	A :不是我
* B：是C
* C：是D
* D:C在胡说。
* 三个说了真话，1个假话， 找凶手。
* 条件为真 1 三个真相加 位1 .
*/


/*赛马问题
有36匹马，6个跑道，没有计时器，请赛马确定。36匹马的前三名。
请问最少比赛几次？ 8

烧香问题
一根香，材质不均匀，但是每一根这样的香，烧完恰好是1个小时。
给你俩跟香，帮我确定一个15分钟的时间段。

5跳水员，10米跳台的比赛，预测比赛结果。
A	我第二，B第三
B	我第二，E第四
C	我第一，D第二
D	我第三，C最后
E	我第四，A第一 每人都说对了一半，确定比赛的名次。 
*/

//int main()
//{
//	int a = 10; const int* pa = &a;
//	*pa = 20;//左边表示a的值不能被修改。
//	return 0;
//}
#include<string.h>
#include<assert.h>

//void nixu(char* ch)	//字符串要求长度。==整型数组的个数
//{
//	assert(ch);
//	int len = strlen(ch);
//	char* left = ch;
//	char* right =ch+ len - 1;
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++; right--;
//	}
//}
//
//
//int main()
//{
//	char ch[500] = { 0 };
//	scanf("%s", ch);
//	get(ch);//读取一行。
//	nixu(ch);
//	printf("%s", ch);
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	int a = 0;
//	scanf("%d%d", n,a);
//	int i = 0;
//	int sum=0;
//	int ret = 0;
//	for ( i = 0; i < n; i++)
//	{
//		int ret = ret * 10 + n;
//		sum += ret;
//	}
//	return 0;
//}

#include<math.h>

//int main()
//{
//	int i = 0;
//	for ( i = 0; i < 100000; i++)
//	{
//		//确定n是几位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp/=10)
//		{
//			n++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /=10;
//		}
//		if (i==sum)
//		{
//			printf("%d \n", i);
//		}
//	}
//	return 0;
//}

//int main()		//确定限制条件。控制变量，一个一个解决，拆分成几个步骤。
//{
//	int line = 0;
//	scanf("%d", &line);//7
//	int i = 0;//打印上半部分
//	for (size_t i = 0; i < line; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		for ( j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for ( i = 0; i < line-1; i++)
//	{
//		int j = 0;
//		for ( j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		for ( j = 0; j <2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//喝汽水问题。

//int main()
//{
//	int money = 0;	int total = 0;	int empty = 0;
//	scanf("%d", &money);	total = money;	empty = money;
//	while (empty>=2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}