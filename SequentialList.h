#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//线性表包含：顺序表，链表，栈，队列，字符串。。。
//线性表的 物理结构： 数组（可能会浪费内存），链表（按需申请内存）。

//栈帧向下向低地址生长， 堆 新开辟的内存 向上，向高地址生长，有时也可能会开辟在释放后的低地址处。

//顺序表，一段物理地址连续的存储单元依次存储数据元素的线性结构——数组。对数组进行增删查改。

//静态顺序表——定长数组存储。

typedef int SLDataType;//可以进行 类型转换

/*#define N 10
typedef struct SeqList
{
	SLDataType ca[N];
	int size;//有效的数据个数。
}SeqList;*/

//顺序表的动态存储
typedef struct SeqList
{
	SLDataType* a;//指向动态开辟的数组
	size_t size;//有效数据的个数
	size_t capicity;//容量空间的大小
}SL;	//空间不够则进行增容

//顺序表初始化
void SeqListInit(SL* ps);

//尾部插入
void SeqListPushBack(SL* ps, SLDataType x);

//尾部删除
void SeqListPopBack(SL* ps);

//头部插入
void SeqListPushFront(SL* ps, SLDataType x);

//头部删除
void SeqListPopFront(SL* ps);

//打印
void  SeqListPrint(SL* ps);

//数据的销毁
void SeqListDstory(SL* ps);


//任意位置的插入
void SeqListInsert(SL* ps,int pos,SLDataType X);

//任意位置的删除
void SeqListErase(SL* ps);

//数据的查找
int  SeqListSearch(SL* ps,SLDataType x);