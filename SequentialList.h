#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//���Ա������˳�������ջ�����У��ַ���������
//���Ա�� ����ṹ�� ���飨���ܻ��˷��ڴ棩���������������ڴ棩��

//ջ֡������͵�ַ������ �� �¿��ٵ��ڴ� ���ϣ���ߵ�ַ��������ʱҲ���ܻῪ�����ͷź�ĵ͵�ַ����

//˳���һ�������ַ�����Ĵ洢��Ԫ���δ洢����Ԫ�ص����Խṹ�������顣�����������ɾ��ġ�

//��̬˳�������������洢��

typedef int SLDataType;//���Խ��� ����ת��

/*#define N 10
typedef struct SeqList
{
	SLDataType ca[N];
	int size;//��Ч�����ݸ�����
}SeqList;*/

//˳���Ķ�̬�洢
typedef struct SeqList
{
	SLDataType* a;//ָ��̬���ٵ�����
	size_t size;//��Ч���ݵĸ���
	size_t capicity;//�����ռ�Ĵ�С
}SL;	//�ռ䲻�����������

//˳����ʼ��
void SeqListInit(SL* ps);

//β������
void SeqListPushBack(SL* ps, SLDataType x);

//β��ɾ��
void SeqListPopBack(SL* ps);

//ͷ������
void SeqListPushFront(SL* ps, SLDataType x);

//ͷ��ɾ��
void SeqListPopFront(SL* ps);

//��ӡ
void  SeqListPrint(SL* ps);

//���ݵ�����
void SeqListDstory(SL* ps);


//����λ�õĲ���
void SeqListInsert(SL* ps,int pos,SLDataType X);

//����λ�õ�ɾ��
void SeqListErase(SL* ps);

//���ݵĲ���
int  SeqListSearch(SL* ps,SLDataType x);