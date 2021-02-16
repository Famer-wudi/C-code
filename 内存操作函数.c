#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<memory.h>
#include<assert.h>
// memcpy	内存拷贝

//void* memcpy(void* dest, const void* src, size_t count);

//count	拷贝多少个字节。 返回 目的地 的 指 针。
//typedef struct MyStruct
//{
//	int age;
//	char name[20];
//}S;
//
//
//int main()
//{
//	S arr1[]= { {20,"made"},{20,"niupi"} };
//	S arr2[] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));
//	// arr2 目的地	arr1 源头 。 
//	return 0;
//}

//而++a 表示取a地址，增加它的内容，然后把值放在寄存器中
//a++ 表示取a的地址，把它的值装入寄存器，然后增加内存中a的值；

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assrt(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}

// 实现memmove 
// memcpy 只要处理 不重叠的内存拷贝j就可以
//memmove 可以处理重叠的内存拷贝

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	//把 123拷贝到234里面。
//	return 0;
//}
//
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assrt(dest && src);
//	void* ret = dest;
//	if (dest<src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}

//memset  void * memset ( void * ptr, int value, size_t num );
//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '-', 6);
//	puts(str);
//	return 0;
//}

	//结构体类型
//struct stu
//{
//	char name[20];
//	int age;
//}s1,s2,s3,s4;	//变量列表
//
//struct stu s5;	//都是全局变量
//
//struct 
//{
//	int a;
//}x;			//匿名结构体类型，后面直接跟个 结构体 变 量 名字 
//
//struct
//{
//	int a;
//}*px;		//匿名结构体指针	编译器会当作是不同的类型。
//
//struct node		//结构体不能嵌套自己	
//{
//	int a;		
//	struct node* next ;		//链表 数据域，指针域	
//};
//
//typedef struct node		//重命名 结构体strcut node  为  node  .		
//{
//	int a;		
//	char* ps;
//}node;			// node n1;

//struct stu 
//{
//	int age;
//	char name[6];
//	double d;
//};
//
//int main()
//{
//	//struct stu s1;//局部变量
//	struct stu s0 = { 20,"wodiu",3.140000 };
//	printf("%d %s %lf\n", s0.age, s0.name, s0.d);
//	return 0;
//}


// 结构体内存对齐
//struct S1		
//{
//	char c1;	//结构体第一个成员 在与 结构体变量 偏移量为0 的地址处。
//	
//	//其他成员变量，要对齐到 对齐数的整数倍的地址处。
//	int a;
//	char c2;
//
//	//对齐数= 编译器默认对齐数 与该成员大小的	较小值。 单位 字节
//
//	// VS 的默认值 是 8 。
//}s1;
//
//struct S1
//{
//	//结构体总大小为 最大对齐数的（每个成员变量都有一个对齐数 ） 整数倍。
//
//	//如果嵌套了结构体，其对其到自己的最大对齐数的整数倍，
//	
//	//结构体的整体大小，就是所有结构体成员变量 的最大对齐数 的整数倍。
//
//	char c1;
//	int a;
//	char c2;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S1 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	return 0;
//}

			//结构体传参 传地址
//struct S
//{
//	int a;
//	char c;
//};

//void INIT(struct S* s)
//{
//	s->a = 10;
//	s->c = '6';
//}
//
//void print(const struct S* tmp)
//{
//	printf("%d %s\n", tmp.a, tmp.c);
//}
//
//int main()
//{
//	struct S s = { 0 };		//如果结构体过大，传参容易压栈，开销过大，导致性能下降。
//	INIT(&s);
//	print(&s);
//		return 0;
//}

		//结构体	位断。 