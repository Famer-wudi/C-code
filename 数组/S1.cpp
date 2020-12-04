#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	//数组，一组相同类型元素的集合。数组的创建方式；
//	//type_t			arr_name		[const_n];
//	//数组元素类型，					常量表达式，指定数组的大小。
//	//创一个数组，存放整形-10个
//	//int arr[10] = { 1,2,3 };//不完全初始化，剩下的元素默认初始化为0.
//	//char arr2[5] = { 'a',98 };
//	//char arr3[5] = "ab";// \0
//	char arr4[] = "abcdef";//
//	printf("%d", sizeof(arr4));
//	//计算arr4 所占空间的大小。
//	//7个元素——char 7*1=7
//
//	printf("%d", strlen(arr4));
//	//求字符串长度，找到\0 就停止。\0 不算字符串长度。
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };//找到\0 才停止。 随机值。
//	char arr3[] = { 1,2,3 };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", sizeof(arr3));
//	printf("%d\n", strlen(arr3));
//	return 0;
//}

//int main()
//{
//	//[] 下表引用操作符，数组访问的操作符
//	char arr[] = "abcdef";
//	//printf("%c\n", arr[3]);
//	int i = 0;
//	for ( i = 0; i < (int)strlen(arr); i++)
//	{				//返回的是无符号数。
//		printf("%c\n", arr[i]);
//	}
//
//	return 0;
//}

//一维数组内存中的存储。

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%p\n", &arr[i]);
//	}
//	return 0; 
//}

// 0-9 10进制
// 0-9 a-f 16进制。

//数组在内存中是连续存放的。

//二维数组  ，也是。

//int arr[2][3]; 二行三列

int main(int argc, const char* argv[])
{

    int array[3][5][6] = { 0 };//定义一个二维数组（3行5列）

    int temp = 0;//设定一个临时的整型变量，用来给数组赋值

    for (int a = 0; a < 3; a++)//外层循环给数组的第一维赋值，就是array[x][y]的x

    {

        for (int b = 0; b < 5; b++)//内层循环给数组的第二维赋值，就是array[x][y]的y
            for (int c = 0; c < 6; c++)
            {
                {
                    temp = temp + 1;//为了让数组的数值不同，让临时变量有自增

                    array[a][b][c] = temp;//二维数组的真正数据

                    printf("array[%d][%d][%d] = %d\t", a, b,c, array[a][b][c]);//打印出数组
                }

            }
                printf("\n");//输出一行后换行

    }
    return 0;

}