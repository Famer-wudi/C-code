#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�����ַ�������

//ǰn��֮�͡�2 22 222 2222 22222

//ˮ�ɻ��� 153=1^3+5^3+3^3  �����м�λ����ÿλ�ļ��η���ӵ��ڸ�������
 
//��ӡ���Ρ�	1 3 5 7 9 11 13 11 9 7 5 3 1 �� �ո� *

//1ƿ��ˮһԪ��������ƿ���Ի�һƿ��ˮ����20Ԫ ���Ժȼ�ƿ? 

//������ǰ��ż���ں��档

//�޷���char ����������0���з���char ��������������λ�� ������λ��

//strlen ��\0��ֹͣ�� 

//������
/*	A :������
* B����C
* C����D
* D:C�ں�˵��
* ����˵���滰��1���ٻ��� �����֡�
* ����Ϊ�� 1 ��������� λ1 .
*/


/*��������
��36ƥ��6���ܵ���û�м�ʱ����������ȷ����36ƥ���ǰ������
�������ٱ������Σ� 8

��������
һ���㣬���ʲ����ȣ�����ÿһ���������㣬����ǡ����1��Сʱ��
���������㣬����ȷ��һ��15���ӵ�ʱ��Ρ�

5��ˮԱ��10����̨�ı�����Ԥ����������
A	�ҵڶ���B����
B	�ҵڶ���E����
C	�ҵ�һ��D�ڶ�
D	�ҵ�����C���
E	�ҵ��ģ�A��һ ÿ�˶�˵����һ�룬ȷ�����������Ρ� 
*/

//int main()
//{
//	int a = 10; const int* pa = &a;
//	*pa = 20;//��߱�ʾa��ֵ���ܱ��޸ġ�
//	return 0;
//}
#include<string.h>
#include<assert.h>

//void nixu(char* ch)	//�ַ���Ҫ�󳤶ȡ�==��������ĸ���
//{
//	assert(ch);
//	int len = strlen(ch);
//	char* left = ch;
//	char* right =ch+ len - 1;
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++; right--;
//	}
//}
//
//
//int main()
//{
//	char ch[500] = { 0 };
//	scanf("%s", ch);
//	get(ch);//��ȡһ�С�
//	nixu(ch);
//	printf("%s", ch);
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	int a = 0;
//	scanf("%d%d", n,a);
//	int i = 0;
//	int sum=0;
//	int ret = 0;
//	for ( i = 0; i < n; i++)
//	{
//		int ret = ret * 10 + n;
//		sum += ret;
//	}
//	return 0;
//}

#include<math.h>

//int main()
//{
//	int i = 0;
//	for ( i = 0; i < 100000; i++)
//	{
//		//ȷ��n�Ǽ�λ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp/=10)
//		{
//			n++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /=10;
//		}
//		if (i==sum)
//		{
//			printf("%d \n", i);
//		}
//	}
//	return 0;
//}

//int main()		//ȷ���������������Ʊ�����һ��һ���������ֳɼ������衣
//{
//	int line = 0;
//	scanf("%d", &line);//7
//	int i = 0;//��ӡ�ϰ벿��
//	for (size_t i = 0; i < line; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		for ( j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for ( i = 0; i < line-1; i++)
//	{
//		int j = 0;
//		for ( j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		for ( j = 0; j <2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//����ˮ���⡣

//int main()
//{
//	int money = 0;	int total = 0;	int empty = 0;
//	scanf("%d", &money);	total = money;	empty = money;
//	while (empty>=2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}