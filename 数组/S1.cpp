#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	//���飬һ����ͬ����Ԫ�صļ��ϡ�����Ĵ�����ʽ��
//	//type_t			arr_name		[const_n];
//	//����Ԫ�����ͣ�					�������ʽ��ָ������Ĵ�С��
//	//��һ�����飬�������-10��
//	//int arr[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0.
//	//char arr2[5] = { 'a',98 };
//	//char arr3[5] = "ab";// \0
//	char arr4[] = "abcdef";//
//	printf("%d", sizeof(arr4));
//	//����arr4 ��ռ�ռ�Ĵ�С��
//	//7��Ԫ�ء���char 7*1=7
//
//	printf("%d", strlen(arr4));
//	//���ַ������ȣ��ҵ�\0 ��ֹͣ��\0 �����ַ������ȡ�
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };//�ҵ�\0 ��ֹͣ�� ���ֵ��
//	char arr3[] = { 1,2,3 };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", sizeof(arr3));
//	printf("%d\n", strlen(arr3));
//	return 0;
//}

//int main()
//{
//	//[] �±����ò�������������ʵĲ�����
//	char arr[] = "abcdef";
//	//printf("%c\n", arr[3]);
//	int i = 0;
//	for ( i = 0; i < (int)strlen(arr); i++)
//	{				//���ص����޷�������
//		printf("%c\n", arr[i]);
//	}
//
//	return 0;
//}

//һά�����ڴ��еĴ洢��

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%p\n", &arr[i]);
//	}
//	return 0; 
//}

// 0-9 10����
// 0-9 a-f 16���ơ�

//�������ڴ�����������ŵġ�

//��ά����  ��Ҳ�ǡ�

//int arr[2][3]; ��������

int main(int argc, const char* argv[])
{

    int array[3][5][6] = { 0 };//����һ����ά���飨3��5�У�

    int temp = 0;//�趨һ����ʱ�����ͱ��������������鸳ֵ

    for (int a = 0; a < 3; a++)//���ѭ��������ĵ�һά��ֵ������array[x][y]��x

    {

        for (int b = 0; b < 5; b++)//�ڲ�ѭ��������ĵڶ�ά��ֵ������array[x][y]��y
            for (int c = 0; c < 6; c++)
            {
                {
                    temp = temp + 1;//Ϊ�����������ֵ��ͬ������ʱ����������

                    array[a][b][c] = temp;//��ά�������������

                    printf("array[%d][%d][%d] = %d\t", a, b,c, array[a][b][c]);//��ӡ������
                }

            }
                printf("\n");//���һ�к���

    }
    return 0;

}