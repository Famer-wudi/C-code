#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<assert.h>
#include<assert.h>
#include<errno.h>
#include<ctype.h>

//int is_leftmove(char* str1, char* str2)
//{
//	//׷��һ���Լ������������п�����ת�Ĵ���
//	//���ж��Ƿ����Լ����ִ���
//	//���Ŀ�ĵ��ַ������Ⱥ�Դ�ַ������Ȳ���ȣ���ô�϶����������õ��ġ�
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 !=len2)
//	{
//		return 0;
//	}
//	strncat(str1, str1, 6);
//	//���Ӵ���strstr,
//	char* ret = strstr(str1, str2);
//	if (ret==NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	char arr1[30] = "abcde";
//	char arr2[] = "cde";
//	int ret = is_leftmove(arr1, arr2);
//	if (ret==1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}

		// �ַ����Ƚϣ�strncmp	���� ����const ...
//int main()
//{
//	const char* p1 = "abc";
//	char* p2 = "abcd";
//	int ret = strncmp(p1, p2,4);
//	if (ret == 0)
//	{
//		printf("p1=p2\n");
//	}
//	else if (ret < 0)
//	{
//		printf("p2��\n");
//	}
//	return 0;
//}

//strstr ���֪�����ˣ��ͷ��ظ��ҵ��ĵ�һ���ַ�����λ�á�û�ҵ��ͷ��ؿ�ָ�롣

//����ӵ�ǰ�ַ����Ƚ�û�ҵ����Ǿʹ���һ���ַ��ĵ�ַ��ʼ�ҡ�

/* char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 && p2);
	char* s1 = p1;
	char* s2 = p2;
	char* cur = p1;
	if (!(*p2))//Ϊ�پ�����ȥ
	{
		return (char*)p1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = p2;
		while (*s2&&*s1&&!(s1-s2))// s1��s2�������ѭ��ֹͣ��
		{
			s1++; s2++;
		}
		if (*s2=='\0')
		{
			return cur;
		}
		if(!(*s1))
			return NULL;
		cur++;
	}							//Ϊ�٣�������ȥ����Ϊ�棬�ͽ�ѭ����
	return NULL;//�Ҳ����Ӵ���
}*/

		// strtok 
//int main()
//{
//	char arr[] = "zpi@qqq.cc";
//	//һ��arr ����ʱ����������ַ������Ǹ�Ϊ \0 ������ס��λ��
//	//�ڶ��Σ����� ����ָ�� ���Ӻ����Ǹ�λ��������ҡ�
//	char* p = "@.";
//	//û���򷵻�NULL
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = NULL;
//	//char* ret=strtok(arr, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//ip ��ַ�� ���ʮ���Ƶı�ʾ��ʽ 
//
//	for ((ret = strtok(arr, p)); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}

//	strerror	���ش����룬����Ӧ�Ĵ�����Ϣ��
//int main()
//{
//	//�����룬������Ϣ��
////errno.h	��һ��ȫ�ֵĴ���ı�����
////��C����ִ�й����з����˴��󣬻�Ѷ�Ӧ�Ĵ����� ��ֵ��errno �С�
//
//	char* str = strerror(errno);
//	printf("%s\n", str);
//	
//		//���ļ��� r ��������
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerrno(errno));
//	}
//	return 0;
//}

//int main()
//{
//	//char ch = 'w';
//	//int ret= islower(ch);
//	////�����Сд�����ص��Ƿ�0ֵ�������򷵻�0��
//	//printf("%d\n", ret);
//	//int ret = iswdigit(ch);
//	////�ж��Ƿ���0-9�����֡�
//
//	////�ַ�ת������
//	//int tolower(int c);//תСд��
//
//	//putchar(ch);//��ӡ�ַ�
//
//	//int toupper(int c);//ת��д��ASCII ��ֵ��32����ת��д��
//
//
//	char arr[] = "I Am A Supperman";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//
//	return 0;
//}
