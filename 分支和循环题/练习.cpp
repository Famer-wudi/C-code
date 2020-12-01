#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<Windows.h>

//for(初始化;判断;调整)
//{循环语句} 
//for continue 跳到调整部分，
//while continue 后面的内容不执行，容易死循环。
//while (a<5)
//{
//	if (a=5)
//	{
//		continue;
//		a++;
//	}
//}


//int main() noexcept
//{
//	int	a = 0;	//算法实现
////最大值放a里面，b次之，c最小值，abc互相比较。//tmp 临时变量 a与b交换数据不能丢。	
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//输入时数据之间加空格。
//	if (a<b)
//	{
//		const int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a<c)
//	{
//		const int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		const int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//求两个数的最大公约数。
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d", n);
//	return 0;
//}
//打印1000-2000年的闰年。
//普通闰年：公历年份是4的倍数的，且不是100的倍数，为普通闰年
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for ( y = 1000; y <=2000; y++)
//	{
//		if (y % 4 == 0 && y % 100 != 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//		else if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//while((y % 4 == 0 && y % 100 != 0)||(y % 400 == 0))
//{
//	printf("%d ", y);
//			count++;
//}
//
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//打印出100-200之间的素数。
//int main()
//{
//	int a = 0;
//	int count = 0;
//	for ( a = 100; a <= 200; a++)
//	{
//		//素数只能被1和它本省整除。
//		//从2到a-1都不能被整除才为素数。
//		int b = 0;
//		for ( b = 2; b < a; b++)//b的范围:2—a-1,整除每一个过来的a，直至每一个2到a-1都不能整除a且a=它本身，说明这个数就为素数。
//		{
//
//			if (a%b==0)
//			{
//				break;
//			}
//		}
//		if (a==b)//只有a=b 即a=它本身的时候才为素数。过滤一下a能被b整除的数。
//		{
//			count++; 
//			printf("%d ", a);
//		}
//	}
//	printf("\n共计=%d 个", count);
//	return 0;
//}

//b至少<=开平方i，a才能被整除，否则就没有第二因子。

//int main()
//{
//	int a = 0;
//	int count = 0;
//	for (a = 100; a <= 200; a++)//可以在奇数里面找素数。
//	{//（a=101;a<=200;a+=2）
//		int b = 0;
//		for (b = 2; b <= sqrt(a); b++)//二分之一一定大于开平方a。
//		{//a=b*c 如果为素数，则a=1*a。
//			//找到一个b，在开平方a之前能整除a，说明还有一个因子c.
//			//如果a开平方之前都没有找到一个数能整除a，那么a开平方之后也没有了。
//			//就不用判断2到a-1一个一个试能不能整除a了。
//			if (a % b == 0)//a能被b整除吗，不能。则b++继续循环，试：能不能整除此时的a。
//			{
//				break;//能整除那就不是咱们的素数。
//			}
//		}
//		if (b>sqrt(a))//跳到这里有两种情况
//			//1，当能被整除的时候，b一定小于开平方a，那么a就一定不是素数。
//			//2，比开平方a小的任何数都没有能整除a的，那么这个a就是素数了。
//		{
//			count++;
//			printf("%d ", a);
//		}
//	}
//	printf("\n共计=%d 个", count);
//	return 0;
//}//for 里面跟个for就是 验证b能不能整除此时的a。

//int main()
//{
//	int a = 0;
//	int count = 0;
//	for ( a = 1; a <=100; a++)
//	{
//		if (a%10 == 9)
//			count++;
//		if(a/10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("\n%d ", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag =1;
//	for ( i = 1; i < 100; i++)
//	{
//		sum += flag*1.0/i;//要得到小数，除号两边必须有一个时浮点数。 
//		flag = -flag;
//	}
//	// 1/1+1/2+1/3...
//	//1+0+0...		商0，模i。
//	printf("%lf\n", sum);
//	return 0;
//} 
//1-1/2+1/3-1/4...偶数全部减起来，奇数全部加起来。.
//求10个数的最大值。
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//数组的第一个小标是0，
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//求数组中元素的个数。
//	int max = arr[0];
//	for ( i = 1; i <sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//9*9乘法口诀表	换算成行成列，用行数来控制列数。
//int main()
//{//while if 都为真就执行语句。continue，跳到判断部分，后面的代码不执行。
//break 直接跳出循环。
//	int i = 0;
//	for ( i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for ( j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//			//%2d 打印两位数，	%-2d	两位数左对齐
//		}
//		printf("\n");
//	}
//		return 0;
//}

//演示多个字符从两端移动，向中间汇聚
