#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

/*
��̬�ڴ���䣬�뿪�ٶ���ֽڵĿռ�Ϳ��ٶ���ֽڵĿռ䣬

�ں˿ռ� �� ����ϵͳ�Ŀռ䡣

�ڴ��ջ�� �� �ֲ���������������ʽ������ �뿪ջ�����������ھͽ�����

�ڴ�Ķ��� �� ��̬�ڴ濪�ٵĿռ䣬���ڴ�飬

��̬�� �� ȫ�ֱ��� ����̬������

������ �� ������������ʱ�����ݡ�

	malloc	free	calloc		realloc 

*/
//void* malloc(size_t size)

//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//
//	//int* p = (int*)malloc(INT_MAX);
//
//	//�ڴ治��ʱ������NULL��
//	if (p==NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for ( i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//		for ( i = 0; i < 5; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��Ҫ�ͷźͻ��ա�
//	free(p);
//	p = NULL;	//�Է������ҵ����ָ����ƻ���
//
//	//�������ڵ��ˣ�����������ڴ�Ҳ����������ȥ��
//
//	//F9 �ϵ�	��		F5 ֱ�������ϵ㡣
//
//	return 0;
//}


		//calloc

 // void* calloc(size_t num,size_t size)
//int main()
//{
////int* p = (int*)malloc(5 * sizeof(int));
//
//	int* p=(int*)calloc(5, sizeof(int));
////��������ÿ���ռ��ʼ��Ϊ0.���ظ��ڴ����ʼλ�õ�ַ��
//
//	//����ʧ��ͬ��malloc
//	return 0;
//}


			// realloc 
//int main()
//{
//	/*
//	realloc �������žͿ����Ŀ�����������ռ乻�ã�׷���ϣ��ͷ���malloc�ĵ�ַ��
//	
//�������Ŀռ䲻���ã�����һ���µĿռ䡣
//ͬʱ���ǿ���ռ�����ݿ���������ԭ�ռ����ϣ������µĵ�ַ��
//Ҫ���µĵ�ַ���ܣ����з���ֵ�ж��Է�����ʧ�ܡ�
//	*/
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p==NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for ( i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//		for ( i = 0; i < 5; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//20���ֽڿռ䲻���� ����20��
//	int* ptr = (int*)realloc(p, 40);
//	if (ptr!=NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//				i<20  �ͻ���� �Զ�̬���ٵ��ڴ��Խ����ʡ�
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//				p++��free(p)	�����
//
//  ����ͷţ���������� ˭����˭���ա���
//
//
//�����ͷ�����ڴ�й©��
//while (1)
//{
//	malloc(1)
//}
// �βγ��������١� ������ڴ�����������ڴ�й©�����ٵ��ڴ���δ�ͷţ�
//return 0;
//}

/* ����ջ�ռ��ַ������ �����������١� �Ƿ������ڴ�����⡣

�ѿռ� �;�̬�����ܷ���ȥ��
*/

	//��������
// struct S
//{
//	int i;
//	int arr[0];
//};				//�ṹ�����һ����Աʱ λ�ô�С������Ĵ�С�ǿ��Ե����ġ�
//
////����ô�����������Ŀռ��ء�
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	return 0;
//}

//struct S
//{
//	int i;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for ( i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	int* ptr=realloc(ps->arr,10*sizeof(int));
//	if (ptr!=NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	return 0;
//}