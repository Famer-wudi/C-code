#define _CRT_SECURE_NO_WARNINGS 1
#include"SequentialList.h"

//初始化
void SeqListInit(SL*ps)
{
	/*ps->a = NULL;
	ps->size = 0;
	ps->capicity = 4;*/
	ps->a = (SLDataType*)malloc(4 * sizeof(SLDataType));
	if (ps->a==NULL)
	{
		printf("申请内存失败！\n");
		exit(-1);//直接结束程序
	}
	ps->size = 0;
	ps->capicity = 4;
}

//扩容函数
static void SeqListCheckcapicity(SL* ps)
{
	assert(ps);
	if (ps->size==ps->capicity)
	{
		ps->capicity *= 2;//去一个平衡点，所以开两倍的。
		ps->a = (SLDataType*)realloc(ps->a, ps->capicity * sizeof(SLDataType));
		if (ps->a==NULL)
		{
			printf("扩容失败\n");
			exit(-1);
		}
	}

}

//尾部增加
void SeqListPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	SeqListCheckcapicity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}

//尾部删除
void SeqListPopBack(SL* ps)
{
	assert(ps);
	//ps->a[ps->size] = 0;
	ps->size--;
}

//头部插入
void SeqListPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	int end = ps->size - 1;
	//头部插入，先定义一个下标，然后从后向前挪
	SeqListCheckcapicity(ps);
	while (end>=0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;
}


//头部删除
void SeqListPopFront(SL* ps)
{
	assert(ps);
	//先定义一个下标。
	 int start = 0;
	while (start < ps->size-1)
	{
		ps->a[start] = ps->a[start + 1];
		++start;
	}
	ps->size--;
}

void  SeqListPrint(SL* ps)
{
	assert(ps);
	int i = 0;
	for ( i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListDstory(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capicity=0;
}

//要插入坐标的位置和要插入的数据。
void SeqListInsert(SL* ps, int pos, SLDataType X)
{
	assert(ps);
	//判断坐标的合法性，和有效数据的个数size比较
	assert(pos <= ps->size && pos >= 0);
	//检查容量
	SeqListCheckcapicity(ps);
	int end = ps->size - 1;
	while (end>=pos)
	{
		//当前的数据赋值给后一个
		ps->a[end + 1] = ps->a[end];
		--end;
		//保持顺序表的连续性。
	}
	ps->a[pos] = X;
	ps->size++;
}

void SeqListErase(SL* ps,int pos)
{
	assert(ps);
	assert(pos < ps->size && pos >= 0);
	int start = pos;
	//判断挪几次
	while (start<ps->size-1)
	{
		ps->a[start] = ps->a[start + 1];
		--start;
	}
	ps->size--;
}

int SeqListSearch(SL* ps, SLDataType x)
{
	assert(ps);
	int i = 0;
	//全都比较一遍
	while (i<ps->size)
	{
		if (ps->a[i]==x)
		{
			return i;
		}
		++i;
	}
	return -1;
}





