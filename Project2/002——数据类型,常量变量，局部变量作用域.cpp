//#include<stdio.h>
/*
char	�ַ��������� 
int main()
{		//����ch����������ڴ�ռ������
	char ch = 'A';//	�������ڴ�����һ��ռ���  	����������һ���ַ�	
	
	printf("%c\n"��ch);		//��ӡ�ַ���ʽ������  %c ���ַ�����ʽ��ӡch
	
	return 0;
}


short int	������
	short age = 20;//��ʾ�����ڴ����������ֽڣ��������20.
	
	float weight = 70.0f;//f�������double��float�ضϣ����ȶ�ʧ���� ���ڴ������ĸ��ֽڣ����С����
	
	return 0;
	
		
int		����

	int age = 20; 
	printf("%d\n",age);		%d--��ӡ����ʮ��������

long	������	
	long num = 100;
	printf("%d\n",num);
long long	����������

float		��������� ������С�����λ����		%f ��ӡ�������֣�-��С��
	float f = 5.0;
	printf("%f\n",f);			С����� 6λ


double		˫���ȸ�����		%lf
	double d = 3.14;
	printf("%lf\n",d);

*/


/*int main()
{
//	char ch = 'A';
//	printf("%c\n",ch);
	printf("%d\n", sizeof(char));

	printf("%d\n", sizeof(short));

	printf("%d\n", sizeof(int));

	printf("%d\n", sizeof(long));

	printf("%d\n", sizeof(long long));

	printf("%d\n", sizeof(float));

	printf("%d\n", sizeof(double));
	
	return 0;
}


/*	 �������ڴ�������Ŀռ�	sizeof ��С  ��λ���ֽ� Ϊʲô������ô�������Լ��������͵Ĵ�С��

	printf("%d\n",sizeof(char));	1

	printf("%d\n",sizeof(short));	2		���� �����͵�����
			
			int age = 20 //��ʾ 4���ֽڣ�32������λ��int�ܱ�ʾ�ķ�Χ��2^32��ô���˷ѿռ䡣
			���� short int age = 20 //��ʾ 2���ֽ�byte��16������λbite����Χ��2^16-1 = 65535
					����Ƿֳ���ô�����͵�ԭ�򡣱�ʾ����ķ�Χ���ø�����������͡�

	printf("%d\n",sizeof(int));		4

	printf("%d\n",sizeof(long));	4   c���Ա�׼�涨��ֻҪsizeof(long)>=sizeof(int)�Ϳ����ˡ���Сȡ����ƽ̨��

	printf("%d\n",sizeof(long long));	8

	printf("%d\n",sizeof(float));		4
	 
	printf("%d\n",sizeof(double));		8

*/



//int num2 = 20;//ȫ�ֱ�����������	����飨{}��֮��ı�����
//int main()
//{
//	int num = 10;//�ֲ������������ڴ���飨{}���ڲ�
//	return 0;
//}

//int a = 10;
//int main()
//{
//
//	printf("%d\n",a);
//	return 0;
//}
//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("%d\n",a);//ȫ�ֱ����;ֲ����������ֽ��鲻Ҫ��ͬ�����ظ�ʱ�����ȱ��ֲ������� 
//	return 0;
//
//}



//int main()
//{
//	//�����������ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//��������--ʹ�����뺯��scanf
//	scanf("%d%d", &num1, &num2);	//ȡ��ַ���š��涨��һ�����ź����һ����
//	//int sum = 0;
//						//C���Թ涨������Ҫ�����ڵ�ǰ������ǰ�档
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//		return 0;
//}



//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf_s("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	{
//		printf("num = %d\n", num);		//���������������Ĵ��������������棬����num�ֲ��������á�
//
//	}
//
//
//	return 0;	
//}


//int main()
//{
//	extern int g_val;				//extern�����ⲿ���š�
//	printf("g_val = %d\n", g_val);
//	return 0;
//}



//int global = 2020;
//
//void test()
//{
//	printf("test = %d\n", global);
//
//}
//int main()
//{
//
//	test();
//	printf("A =%d\n", global);
//	return 0;
//}



//int main()
//{
//	{
//		int a = 23;
//		printf("A = %d\n", a);
//
//	}//�������ڣ��ֲ�������������{����ʼ����������}��������
	
//	//ȫ�ֱ���������main�������������ڣ�Ҳ��������������������ڡ�
//
//	return 0;
//}