#define _CRT_SECURE_NO_WARNINGS 1//���÷�����notepad++ �ļ��У�vcprojectitems����newc++file.cpp �޸ġ�
#include<stdio.h>
#include<string.h>
/*int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	
				scanf("%d%d", &a, &b);//���뺯������c��������������ݡ�scanf,���뺯���� 
	
	sum = a + b;
	printf("sum = %d\n", sum);

	return 0;
}


int main()

//#define MAX 10		3��//#define ����ı�ʶ������

{
	//const  int num = 4;					2��//const �㶨�ģ������ԣ�num����const ���εĳ������������num�Ͳ��ܱ���

	//print("%d\n", num);

	//num = 8;			//ֱ��д 3 = 5;�ǲ��е�
	//printf("%d\n", num);

	//100;//666;						1��//���泣��

	//const	int n = 10;			//n��һ���г����Եı�������Ҫʹ�ó����ĵط��ǲ���ʹ�õġ�
	//int arr[10] = { 0 };//n�Ǳ�����

	//int arr[MAX]= { 0 };
	//printf("%d\n", MAX);
	return 0;
}


	4,	//ö�ٳ���	һһ�о١�ö�ٹؼ��֣�enum
	enum Color		/Sex
	{
		RED,		//MALE,
		YELLOW,		//FEMALE,
		BLUE		//SECRET

	}


			����ö�����������	
		//MALE FEMALE SECRET ---����������ö�ٳ�����


int main()
{
	enum Color color = BLUE;//ϣ���õ�һ����ɫ
	 
	
		//enum Sex s = FEMALE;		//0��������ֵ��
		//printf("%d\n", MALE);		//1
		//printf("%d\n", FEMALE);	//2
		//printf("%d\n", SECRET);
		return 0;
}


int main()	//ѡ�����
{
	int input = 1;

	printf("�������\n");

	printf("��Ҫ�ú�ѧϰ��?\n(1/0)>:");

	scanf("%d", &input);

	if (input == 1)
		printf("��offer\n");
	else	
		printf("������\n");
	
	return 0;
}


int main()
{
	char arr1[] = "abc";//"abc" �ַ����� arr1[] = ����

	char arr2[] = { 'a','b','c',0 };//\0 ��ת���ַ�����ֵΪ0�����ַ��������ı�־��

	printf("%s\n",arr1);
	printf("%s\n",arr2);

	return 0;
}


int main()				//string length �����ַ������ȡ�
{

	char arr1[] = "abc";

	char arr2[] = { 'a','b','c' };		

	printf("%d\n", strlen(arr1));		//string length �����ַ������ȡ�	����\0,ͳ�Ƴ��Ⱦͽ����ˡ�**\0��Ϊ��־�������ַ������ݡ�**

��һ��<string.h>��ͷ�ļ���

	printf("%d\n", strlen(arr2));//���û��0���������ֵ����ֱ���ҵ�һ��0��Ϊֹ��
	
	return 0;
}


int main()
{
	printf("abcn");
	
	printf("abc");	//û�л��е�ʱ���밴����������ں�����š�
	
	printf("abc\n");		//\n �Ͱ�ԭ��һ����ͨ�ַ�n����˼ת���ˣ������˻��е���˼��
	
	printf("c:\test\32\test.c");//		�����\t	ˮƽ�Ʊ������˼��
	
				\\ 	��ʾΪһ����б�ܣ���ֹ��������Ϊһ��ת�����з������б�ܡ�ת���ַ���
	
	printf("%s\n", "\"");//���Ϊ "
	
	printf("%d\n",strlen("c:\test\32\test.c"));//����c:\test\32\test.c ����ַ����ĳ��ȡ�
	
		32��Ϊ8���ƴ����10�������֡�����ΪASCII��ֵ����������Ӧ���ַ���

	printf("%c\n", '\32');//��

	printf("%d\n", '\x61');		//\xdd		dd������16��������ת����10��������֮����ΪASCII��ֵ����Ӧ���ַ���
	
	return 0;		
}

ѭ�����
int main()
{
	int line = 0;//line ����

	while (line<20000)
	{
		printf("��һ�д��룺%d\n",line);
		line++;
	}
	if (line>=20000)
	{
		printf("��offer\n");
	}

	return 0;
}


int main()		//������λ�У�0Ϊ�٣�1Ϊ�档 

		& ��λ��	ֻҪ��һ��Ϊ�پ�Ϊ�٣�����Ϊ���Ϊ�档

	   | ��λ��		ֻҪ��һ��Ϊ���Ϊ�档			

		^ ��λ��� ��Ӧ�Ķ�����λ��ͬ��Ϊ 0��������Ϊ1.


{
	/*int a = 3;
	int b = 5;
	int c = a&b;*/

	/*int a = 3;
	int b = 5;
	int c = a | b;*/

	//int a = 3;
	//int b = 5;
	//int c = a ^ b;
	/*printf("%d\n", c);*/
/*	return 0;
}


{
	// = ��ֵ		== �ж��Ƿ���ȡ�
	int a = 10;
	a = 20;
	a = a += 10; 
	a = a - 10;
	a = a -= 10; 
	a = a & 2;
	a &= 2;
	a >>= 10;//= a = a>>10;
	//���ϸ�ֵ��
	return 0; 

}

	/*int a = 10;
	int b = 20;
	a + b;*/		//	+ �������������������������Խ�	˫Ŀ��������


//	��Ŀ������
		/*��	�߼�������	�Ѽٵı����ģ����߰���Ļ��ɼٵġ�

		-	��ֵ ������ a = -2 b = -a

		+	��ֵ	������һ�����

		&	ȡ��ַ��

		sizeof	�����������ͳ��ȣ����ֽ�Ϊ��λ��	sizeof ������Ǳ�������������ռ�ռ�Ĵ�С����λ���ֽڡ�

		~  ��һ�����Ķ�����λȡ��

		--	ǰ�ú���

		++	ǰ�ú���

		*	��ӷ��ʲ������������ò�������

		(����)	ǿ������ת��*/

//{	c ���Ա�ʾ��٣�0 �����٣�	��0����������

	/*int a = 10;
	printf("%d\n",a);
	printf("%d\n",!a);*/


	/*int a = 10;
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof a );*/
	
	/*int arr[10] = { 0 };	//	10������Ԫ�ص����飻
	
	int sz = 0;//����һ����Ϊsz�����ͱ�����
	
	sz = sizeof(arr)/sizeof(arr[0]);//	����Ԫ�صĸ���	=	 �����ܴ�С/ÿ��Ԫ�صĴ�С��
	
	printf("%d\n",sizeof(arr));					//= 10*sizeof(int)= 40					
	
																	
	printf("sz = %d\n", sz);
	
	return 0;

}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int max = 0;
	if (num1 > num2)
	{
		printf("max=%d\n",num1);
	}
	else
	{
		printf("max=%d\n",num2);
	}

}*/

/* int Max(int x, int y)
{
	if (x > y)
		return x;
	else
	{
		return y;
	}

}
int main()
{ 
	int num1= 10;
	int num2 = 20;
	int max = 0;
	max = Max(num1, num2);
	printf("max= %d\n",max);
		return 0;
}*///24���ӡ�