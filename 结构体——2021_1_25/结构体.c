#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//描述一个学生：名字，年龄，性别，电话。
//结构体关键字		结构体标签		
//struct	stu	
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//是三个全局的结构体变量								//定义结构体类型。

//typedef struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;	//typedf 把struct stu 类型改了个名字 叫stu 类型。 
//
//int main()
//{
//	//局部变量。尽量少的使用全局变量。
//	struct stu s = { "坚持",24,123456,"保密" };
//	stu s2;
//	return 0;
//}

//struct S
//{
//	int b;
//	char a;
//	char arr[10];
//	double c;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{ 
//	char arr[] = "hello dd";
//	struct T t = { "woca",{100,'a',"hello bit",3.14},arr};
//	return 0;
//}

//每一次函数调用都会在内存的栈区上申请一块空间。
//形参是实参的一份临时拷贝，花费时间和空间。
//栈区，堆区，静态区。


//typedef struct xinxi
//{
//	char name[10];
//	short age;
//	char tel[12];
//	char sex[7];
//}X;
//
//void Print1(X s)
//{
//	printf("name: %s\n", s.name);
//	printf("age: %d\n", s.age);
//	printf("tel: %s\n", s.tel);
//	printf("sex: %s\n", s.sex);
//}
//
//void Print2(X* ps)
//{
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->tel);
//	printf("%s\n", ps->sex);
//}
//
//int main()
//{
//	X s = { "呃呃",999,"123456","大帅比" };
//	Print1(s);
//	Print2(&s);
//	return 0;
//}
