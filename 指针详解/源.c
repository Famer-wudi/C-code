#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int mys(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end!='\0')
//	{
//		end++;
//	}
//	return end - start;//ĩβԪ�ص�ַ-��Ԫ�ص�ַ=�м��Ԫ�ظ�����
//}

//int main()
//{
//	char arr[] = "bit";
//	int len = mys(arr);
//	printf("%d\n", len);
//	return 0;
//}

//#define n_values 5
//int main()
//{
//float* values[n_values];
//float* vp;
//	for (vp = &values[n_values]; vp > &values[0];)
//	{
//		*--vp = 0;//ǰ�� ���Լ�����ʹ��
//	}
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��Ԫ�صĵ�ַ��
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	//���������ַ��һ����ʾ����40 10*4.
//
//	//1,&arr -- &��������������������Ԫ�صĵ�ַ��
//	//��������ʾ�������飬
//	//&����������ʾȡ��������������ĵ�ַ��
//
//	//2��sizeof(arr)--siazeof(������)--��������ʾ�������飬
//	//���������������Ĵ�С��
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	int* p = arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d  ", *(p + 1));
//	}
//	//for ( i = 0; i < 10; i++)
//	//{
//	//	printf("%p =====  %p\n", p + i, &arr[i]);
//	//	//��Ԫ�ص�ַ+1��1���ֽڣ�ָ��ڶ���Ԫ�صĵ�ַ���Ӷ�ָ�������Ԫ�صĵ�ַ��
//	//}
//}


//����ָ��
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	int* * ppa = &pa;
//	//����ָ�룬�ŵ��Ǳ����ĵ�ַ�ĵ�ַ��
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//}

//ָ������  �����Ǹ����� �Ǵ��ָ������顣
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	/*int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;*/
//	//��������--�������
//	//�ַ����顪������ַ�
//	//ָ�����顪�����ָ��
//	//int arr[10];
//	int* arr2[3] = { &a,&b,&c };
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		printf("%d ",*(arr2[i]));
//	}
//	return 0;
//	//���ھ۵����
//}

//int main()
//{
//
//	{
//		int a = 10;
//	}
//	//printf("%d", a);
//}

//��ά���鲻��ʡ���С�
 
//void init(int arr[], int sz)//����Ҫ����ʲô��Ϣ������void
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Printf(int arr[], int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//����
//	//init(arr,sz);
//				//�������ʼ���� 0��
//				//���Σ���ʼ���ĸ����飬�����С��
//	Printf(arr, sz);
//	Reverse(arr, sz);
//	Printf(arr, sz);
//	return 0;
//}


//������������
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}	
//}

//ȫ�ֱ�������ʼ����Ĭ����0

//���������1�ĸ�����
//int co(int x)  //unsigned  int
//{
//	int ss = 0;
//	//while (x)
//	//{
//	//	if (x%2==1)
//	//	{
//	//		ss++;
//	//	}
//	//	x = x / 2;
//	//}
//	//int i = 0;
//	/*for ( i = 0; i <32; i++)
//	{
//		if (((x >> 1) & 1) == 1)	//��λ����1��ֻ������Ϊ1����Ϊ1.
//		{
//			ss++;
//		}
//	}*/
//	/*
//	x= x&(x-1)
//	13
//	1101 x
//	1100 x-1 
//	1100 x    
//	1011 x-1
//	1000 x
//	0111 x-1
//	0000 x	
//	*/
//	while (x)
//	{
//		x = x & (x - 1);
//		ss++;
//	}
//	return ss;
//}


//int main()
//{
//	//����ǲ��룬����1�ĸ�����
//	int a = 0;
//	scanf("%d", &a);
//	int c=co(a);
//	printf("c ==== %d", c);
//	return 0;
//}

// �������λ��ͬλ�ĸ���
//int get_diff_bit(int m,int n)
//{
//	int count = 0;
//	int tmp = m ^ n;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count=  %d", count);
//}

//��ȡ�������е�����λ��ż��λ���ֱ��ӡ������
//void Printf(int m)
//{
//	printf("����λ:\n");
//	int i = 0;
//	for ( i = 30; i >=0; i-=2)//�����ƶ�����λ
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ��\n");
//	for (i = 31; i >= 1; i -= 2)//�����ƶ�����λ
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}

//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	Printf(m);
//	return 0;
//}

//ʹ��ָ���ӡ���顣
//void print(int* p, int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}


//���뼸���ʹ�ӡ���ĳ˷��ھ���
//void print_table(int m)
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i <= m; i++)
//	{
//		for ( j = 0; j <=i; j++)
//		{
//			printf("%d*%d=%-3d", i,j,i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print_table(m);
//	return 0;
//}


