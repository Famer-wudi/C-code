#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

					//�������ȼ���() > [] > *

// ʵ��һ���⺯��qsort 

//struct stu
//{
//	char name[20];
//	int age[10];
//};
//
//void swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1; 
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubbles(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	// ȷ���Ƚϵ�������ȷ���Ƚ�һ��Ҫ�Ƚ϶��ٶԶ���
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//
//		}
//	}
//}
//
//void cmp_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//void test()
//{
//	struct stu s[] = { {"zhangsan",10},{"lisi",30},{"liwu",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubbles(s, sz, sizeof(s[0]), cmp_by_name);
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	//char arr[] = "abcdef";//6  ����\0 ֹͣͳ�� ���������Ӽ�
//	//signed char arr[] = {'a'};//���ֵ��
//
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n ", strlen(*arr));//����ȥ����ASCII ��97 ���� ��a��
//
//	printf("+1 = %d\n ", strlen(&arr+1)); //������ǰ�ַ����飬�������ֵ��������������6
//	printf("%d\n ", strlen(&arr));
//
//	return 0;
//}

/* ��ά����	sizeof (a[0]+1)  ��һ�е�һ��Ԫ�صĵ�ַ��1�����ǵ�һ�еڶ���Ԫ�صĵ�ַ��
* 
* sizeof (  a +1   ) ��ά���� ������ ��ʾ��һ��һά����ĵ�ַ +1 
*	û��sizeof(a)��Ҳû��&a  
* 
* 1. sizeof(������),�������������ʾ��������,���������������Ĵ�С��
* 
* 2. &������,�������������ʾ�������飬ȡ��������������ĵ�ַ��
* 
* 3.����֮�����е�����������ʾ��Ԫ�صĵ�ַ��
*/

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//	/*
//	*(ptr-1) ����ָ�� - 1   ����ȥһ������ ��Ų���� 5�ĵ�ַ��
//	*/
//}

//struct MyStruct
//{
//	int num;
//	char* pcname;
//	short sdate;
//	short sba[4];
//	char cha[2];
//}*p;
////��֪�ṹ��Ĵ�СΪ20���ֽڡ�p��ֵ Ϊ0x100000 ����Щ���ʽ�Ľ��Ϊ��
//int main()
//{
//	//ָ��+1��ȡ���� ָ�����͡� 
//
//	p = (struct MyStruct*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);//+1 ת��������+1�����Ǽ��˸�1 0x00100001 
//	printf("%p\n", (unsigned int*)p + 0x1);
//	//ת�����޷�������ָ�룬+1����ʾ����4���ֽڡ� 0x00100004
//	return 0;
//	/*
//	+1 ��ʾ���������ṹ���ַ��С���ֽ� 0x100000 +20(0x100014) = 0x00100014  
//	һ��16�������� ������ 4��������λ��ʾ������ÿ4��������λ��ʾ һ��16����λ��
//	��һ������ 4���ֽ� 32������λ���Ա�ʾ 8��16����λ��
//	*/
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x��%x\n", ptr1[-1], *ptr2);
//	return 0;
//}

//int main()
//{
//	short a = 0x1122;
//	short* p = &a;
//	short* p1 = (short*)((int)p + 1);
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5), };
//	//���ű��ʽ�� ��ʼ��Ϊ 1��3��5
//	int* p;
//	p = a[0];
//	printf("%d\n", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	//&aa ����ָ�� +1 ���Ǹ�����ָ��  ����ת��Ϊ����ָ��
//	int* ptr2 = (int*)(*(aa + 1));
//	//aa+1 =aa[1]  ��ά������ ��һ�еĵ�ַ�� * �еĵ�ַ �ҵ���һ�еĵ�ַ
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//	//��ַ��һ ��ȥ���Ǹ����ʹ�С���ֽ� 
//	return 0;
//	int arr[10] = { 1,2,3,4,5 };
//	int*p = arr;
//	*(p + 2) == p[2] == *(arr + 2) == arr[2];
//}

//int main()
//{
//	char *a[] = { "work","at","alibaba" };
//	char** pa = a;
//
//	pa++;
//	printf("%s\n", *pa);	
//	return 0;
//	/*
//	int*p="ab"; �ѳ����ַ��������ַ�a�ĵ�ַ �ŵ�p���档
//	
//	*/
//}

int main()
{
	char* c[] = { "enter","new","point","first" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp+3);
	printf("%s\n", *cpp[-2]+3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}