#define _CRT_SECURE_NO_WARNINGS 1
#include"SequentialList.h"

//��ʼ��
void SeqListInit(SL*ps)
{
	/*ps->a = NULL;
	ps->size = 0;
	ps->capicity = 4;*/
	ps->a = (SLDataType*)malloc(4 * sizeof(SLDataType));
	if (ps->a==NULL)
	{
		printf("�����ڴ�ʧ�ܣ�\n");
		exit(-1);//ֱ�ӽ�������
	}
	ps->size = 0;
	ps->capicity = 4;
}

//���ݺ���
static void SeqListCheckcapicity(SL* ps)
{
	assert(ps);
	if (ps->size==ps->capicity)
	{
		ps->capicity *= 2;//ȥһ��ƽ��㣬���Կ������ġ�
		ps->a = (SLDataType*)realloc(ps->a, ps->capicity * sizeof(SLDataType));
		if (ps->a==NULL)
		{
			printf("����ʧ��\n");
			exit(-1);
		}
	}

}

//β������
void SeqListPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	SeqListCheckcapicity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}

//β��ɾ��
void SeqListPopBack(SL* ps)
{
	assert(ps);
	//ps->a[ps->size] = 0;
	ps->size--;
}

//ͷ������
void SeqListPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	int end = ps->size - 1;
	//ͷ�����룬�ȶ���һ���±꣬Ȼ��Ӻ���ǰŲ
	SeqListCheckcapicity(ps);
	while (end>=0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;
}


//ͷ��ɾ��
void SeqListPopFront(SL* ps)
{
	assert(ps);
	//�ȶ���һ���±ꡣ
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

//Ҫ���������λ�ú�Ҫ��������ݡ�
void SeqListInsert(SL* ps, int pos, SLDataType X)
{
	assert(ps);
	//�ж�����ĺϷ��ԣ�����Ч���ݵĸ���size�Ƚ�
	assert(pos <= ps->size && pos >= 0);
	//�������
	SeqListCheckcapicity(ps);
	int end = ps->size - 1;
	while (end>=pos)
	{
		//��ǰ�����ݸ�ֵ����һ��
		ps->a[end + 1] = ps->a[end];
		--end;
		//����˳���������ԡ�
	}
	ps->a[pos] = X;
	ps->size++;
}

void SeqListErase(SL* ps,int pos)
{
	assert(ps);
	assert(pos < ps->size && pos >= 0);
	int start = pos;
	//�ж�Ų����
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
	//ȫ���Ƚ�һ��
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





