#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
									//˳�����		ѡ�����	ѭ�����	

//	C���� ��һ�Žṹ���ĳ����������		һ���ֺ� ;	����һ�����

/*int main()	//ѡ�����
{
	int input = 1;

	printf("�������\n");						//scanf(,&��������)  ����ǰ�Ӹ� &

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
	int line = 0;//line ����

	while (line < 20000)
	{
		printf("��һ�д��룺%d\n", line);
		line++;
	}
	if (line >= 20000)
	{
		printf("��offer\n");
	}

	return 0;
}*/

/*if �����ʽ�� 
		���;		������ʽΪ�棬Ϊ��0����ִ�� ��䡣		����ִ�С�

if	���	(���ʽ) Ϊ�� ��0��
		��ִ�����1��		�����ִ�����2.
else				  
		ִ�����2��

if �����ʽ1��					������ʽΪ�棬��0����ִ�����1.
	ִ�����1��
else if�����ʽ2��				����������ʽ2���������Ǿ�ִ�����2.
	ִ�����2��
else							�����ִ�����3/
	ִ�����3��

	ֻ��ִ��һ���� 
*/


/*int main()
{
	int age = 99;		
	if (age < 18)			//if ���ƶ��� ��䣬Ҫ�ô���� {}  ��������	
	{
		printf("δ����\n");	
		printf("��������");
	}

	else							// if else ���������߼�
	{
		if (age >= 18 && age < 28)  // ���� �߼���	����������Ϊ�棬�����Ϊ�档 
			printf("����\n");
		else if (age >= 28 && age < 50)
			printf("׳��");
		else if (age >= 50 && age < 100)
			printf("����");
		else
			printf("�ϲ�ʲ");
	}
	��	��	֧	if	
	/*else										//�����߼�ȥ�ж�
		printf("������\n");
	*/
	/*else if (age >= 18 && age < 28)  // ���� �߼���	����������Ϊ�棬�����Ϊ�档 
		printf("����\n");
	else if (age >= 28 && age < 50)
		printf("׳��");
	else if (age >= 50 && age < 100)
		printf("����");
	else
		printf("�ϲ�ʲ");*/
	/*return 0;
}*/

// ����ELSE

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)		//�������Ϊ�١��Ͳ�������ִ���ˡ�
//		if (b == 2)
//			printf("hehe\n");		
//		else                         //else ���	�����δ��Ե� if ��ԡ�
//			printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (5==num)
//	//if (num = 5) // ��ֵ=   ��Ϊif Ϊ�� ����û����  ==  �ж����
//	{
//		printf("hehe\n");		//���� ��5==num��	��������ߣ�Ч������һЩ��
//	}
//	printf("haha\n");
//	return 0;
//}


// �ж�һ�����Ƿ�Ϊ������	��ӡ��1����100��������

/*int main()
{
	int i = 1;
	while (i<=100)
	{
		printf("%d\n", i);
		i += 2; 
	}
	//while (i<=100)
	//{
	//	if (i%2 != 0)	//	��= 	�ж� ������		%ȡģ ȡ������
	//		printf("%d ",i);
	//	i++;
	//}
	/*while (i>=1 && i<100)
	{
		printf("%d \n");
		i++;
	}

	return 0;
}*/


//				switch  case ���		case ���
//
/*switch �� ���α��ʽ��		�ж�����ֵ��	Ȼ��	�ʹ�	����	��ʼִ�С�
{
	����
}
case ���ͳ������ʽ:		Ӣ��ð�� 
	���;
	break;		//ִ���������ȥ��
*/
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);		/*scanf�����ǲ���\n��
//							����\nռ��һ������λ
//							��Ҫ������һ�����ݲŻ��������*/
//	/*if (1 == day)
//	printf("����һ\n");
//else if (2 == day)
//	printf("���ڶ�\n");*/
//	//......
//	switch (day)
//	{
//	case 1:						//case 1:  case�������Ӹ��ո�
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	}
//	return 0;
//}

// case ��� ������д��

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//		printf("������");
//	}
//	return 0;
//}

//switch  case  break  һ���  case ���治һ��Ҫ��break �� ���һ�����һ��Ҫ�� break

//break ִֹͣ�У�û������break ��һֱִ�С�

//switch ���������һ��switch��

// case������԰��� if ��䡣 

//default ��case û��˳��Ҫ��

//int main()
//{int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break; //ֹͣ���switch
//		}//Ȼ�������������������û������break ��ִ��case 4.
//	case 4:
//		m++;
//	default:
//		printf("�������");
//		break;
//	}
//	printf("n=%d\nm=%d\n", n, m);
//
//	return 0;
//}


 //		ѭ�����	

// 	while		for    do  while 

//int main()
//{
//	//if (1)	if ����Ϊ�� ��ִ����䡣
//	while (1)   //��Ϊ�棬��һֱ��ӡ��
//		printf("hehe\n");
//	return 0;
//}

// while  ����������0����ִ����䣬���ִ��������ص������ж�������ִ����䣬ֱ��Ϊ�٣�������������������ѭ����

/*int main()
{
	int i = 1;
	while (i<=10)
	{
		//i++;
		if (i == 5)
			continue;			// ��������ѭ������Ĵ���	������ֹѭ���� ����ѭ�� ������Ĵ��롣��������ѭ�����жϲ��֡�
		//��ֹ����ѭ��������ѭ���� continue ����Ĵ��벻����ִ�С�����ֱ������while�����жϲ��֣�������һ��ѭ��������жϡ�		
		//�����ӡ5��i==5 continue 1234 6789

		//ֻҪ����break���ͻ�ֹͣ���е�ѭ����������ֹѭ���� 
		printf("%d\n", i);
		i++;
	}
	return 0;
}*/

//int main()
//{				//EOF end of file �ļ�������־������ ctrl z �͵��� EOF		ֵ �� -1
//	int ch = 0;	
//	//int ch=gerchar();
//	while ((ch = getchar()) != EOF)			//getchar()  �ȴ�����һ���ַ�
//		putchar(ch);			//  �ȼ���printf ���ַ���ӡ������
//	//printf("%c\n", ch);
//	return 0;
//}

//aΪһ�����ָ��  a->fs ��ʾ����a��ָ�Ķ����еĳ�Աfs 
