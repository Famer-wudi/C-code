#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<memory.h>
#include<assert.h>
// memcpy	�ڴ濽��

//void* memcpy(void* dest, const void* src, size_t count);

//count	�������ٸ��ֽڡ� ���� Ŀ�ĵ� �� ָ �롣
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
//	// arr2 Ŀ�ĵ�	arr1 Դͷ �� 
//	return 0;
//}

//��++a ��ʾȡa��ַ�������������ݣ�Ȼ���ֵ���ڼĴ�����
//a++ ��ʾȡa�ĵ�ַ��������ֵװ��Ĵ�����Ȼ�������ڴ���a��ֵ��

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

// ʵ��memmove 
// memcpy ֻҪ���� ���ص����ڴ濽��j�Ϳ���
//memmove ���Դ����ص����ڴ濽��

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	//�� 123������234���档
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

	//�ṹ������
//struct stu
//{
//	char name[20];
//	int age;
//}s1,s2,s3,s4;	//�����б�
//
//struct stu s5;	//����ȫ�ֱ���
//
//struct 
//{
//	int a;
//}x;			//�����ṹ�����ͣ�����ֱ�Ӹ��� �ṹ�� �� �� ���� 
//
//struct
//{
//	int a;
//}*px;		//�����ṹ��ָ��	�������ᵱ���ǲ�ͬ�����͡�
//
//struct node		//�ṹ�岻��Ƕ���Լ�	
//{
//	int a;		
//	struct node* next ;		//���� ������ָ����	
//};
//
//typedef struct node		//������ �ṹ��strcut node  Ϊ  node  .		
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
//	//struct stu s1;//�ֲ�����
//	struct stu s0 = { 20,"wodiu",3.140000 };
//	printf("%d %s %lf\n", s0.age, s0.name, s0.d);
//	return 0;
//}


// �ṹ���ڴ����
//struct S1		
//{
//	char c1;	//�ṹ���һ����Ա ���� �ṹ����� ƫ����Ϊ0 �ĵ�ַ����
//	
//	//������Ա������Ҫ���뵽 ���������������ĵ�ַ����
//	int a;
//	char c2;
//
//	//������= ������Ĭ�϶����� ��ó�Ա��С��	��Сֵ�� ��λ �ֽ�
//
//	// VS ��Ĭ��ֵ �� 8 ��
//}s1;
//
//struct S1
//{
//	//�ṹ���ܴ�СΪ ���������ģ�ÿ����Ա��������һ�������� �� ��������
//
//	//���Ƕ���˽ṹ�壬����䵽�Լ���������������������
//	
//	//�ṹ��������С���������нṹ���Ա���� ���������� ����������
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

			//�ṹ�崫�� ����ַ
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
//	struct S s = { 0 };		//����ṹ����󣬴�������ѹջ���������󣬵��������½���
//	INIT(&s);
//	print(&s);
//		return 0;
//}

		//�ṹ��	λ�ϡ� 