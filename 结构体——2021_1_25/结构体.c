#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//����һ��ѧ�������֣����䣬�Ա𣬵绰��
//�ṹ��ؼ���		�ṹ���ǩ		
//struct	stu	
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//������ȫ�ֵĽṹ�����								//����ṹ�����͡�

//typedef struct stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;	//typedf ��struct stu ���͸��˸����� ��stu ���͡� 
//
//int main()
//{
//	//�ֲ������������ٵ�ʹ��ȫ�ֱ�����
//	struct stu s = { "���",24,123456,"����" };
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

//ÿһ�κ������ö������ڴ��ջ��������һ��ռ䡣
//�β���ʵ�ε�һ����ʱ����������ʱ��Ϳռ䡣
//ջ������������̬����


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
//	X s = { "����",999,"123456","��˧��" };
//	Print1(s);
//	Print2(&s);
//	return 0;
//}
