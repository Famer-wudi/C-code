#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�����ݹ飬	����ѧ��ʽ��

//
//#include "add.h"

//void print(int i)
//{
//	//����˳���ӡ����ÿһλ��
//	if (i > 9)//˵������λ��
//	{
//		print(i/10);
//	}
//	printf("%d ", i%10);
//}
//
//
//
//int main()
//{
//	unsigned int i = 0;
//	scanf("%d", &i);
//	print(i);
//	return 0;
//}

//�����ַ�������
//int mystrlen(char* arr)
//{
////��Ϊarr�ϴ����������ַ�����һ���ַ��ĵ�ַ��*arr���ǵ�һ���ַ�����
////����Ϊ\n�����ַ����Ľ�����־������Ҫ�жϵ�n���ַ��ǲ���0��
//	if (*arr != '\0')
//	{
//	//����Ǿͷ���1+mystrlen;
//		return 1 + mystrlen(arr+1);
//		//��ַ��һ������һ���ַ��ĵ�ַ 
//		//�ٴ���mystrlen *arr+1,������һ���ַ���
//		//Ȼ���ڵ��ú������ж���һ���ַ��ǲ���ת���ַ���
//	}
//	else
//		return 0;//������һ���ַ����Ǿͷ��� 0��
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = mystrlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//n�Ľ׳�
//int gc(int a)
//{
//	int i = 0;
//	int r= 1;
//	for ( i = 1; i <= a; i++)
//	{
//		r *= i;
//	}
//	return r;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = 0;
//	ret = gc(a);
//	printf("%d\n", ret);
//}

//int mys(char *arr)
//{
//	if (*arr!='\0')
//	{
//		return 1 + mys(arr + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "bit";
//	int ret = 0;
//	ret = mys(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//int jc(int i) //1,ȷ�����������͡�2��������������͡�3����������Ҫ�Ľ����
//{
//	if (i==1)
//	{
//		return 1;
//	}
//	else
//	{
//		return i * jc(i - 1);
//	}
//
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf("%d", &i);
//	j=jc(i);
//	printf("%d\n", j);
//	return 0;
//}