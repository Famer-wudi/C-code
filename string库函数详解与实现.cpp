#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

	//strlen  ���ַ������ȡ�
//int my_strlen(const char* ch)
//{
//	assert(ch);
//	int count = 0;
//	while (*ch++)
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char ch[1024];
//	scanf("%s", &ch);
//	int ret = my_strlen(ch);
//	printf("%d\n", ret);
//	return 0;
//}


	//strcpy �����ַ�������
//char* my_strcpy(char* ch, const char* nb)
//{
//	assert(ch && nb);
//	char* ret = ch;
//	while (*ch++=*nb++)
//	{
//		;
//	}
//	return ret;//����Ŀ�Ŀռ����ʼ��ַ��
//}
//int main()
//{
//	char ch[20] = "wohen6";//Ŀ��ռ��㹻�� ���ҿɱ䡣
//	char nb[10] = "nihao";//�� 0 ��β��
//	char* ret = my_strcpy(ch, nb);
//	printf("%s\n", ret);
//	return 0;
//}

		//strcmp	�Ƚ������ַ����Ĵ�С��
//int my_strcmp(const char* ch, const char* zh)
//{
//	assert(ch && zh);
//	while (*ch==*zh)
//	{
//		if (*ch=='\0')
//		{
//			return 0;
//		}
//		ch++; zh++;
//	}
//	return (*ch - *zh);
//}
//
//int main()
//{
//	char ch[5] = "adcf";
//	char zh[4] = "gkd";
//	int ret=my_strcmp(ch, zh);
//	printf("%d\n", ret);
//	return 0;
//}

	//�ж�һ���ַ����Ƿ�����һ���ַ������Ӽ���
//int is_yon(char* arr1, char* ch)
//{
//	assert(arr1 && ch);
//	
//	char* ret = strstr(arr1, ch);//�� arr 1������ ch ��	���ִ���
//
//	if (ret==NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//	
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char ch[5] = "abc";
//	int ret = is_yon(arr1, ch);
//	if (ret ==0)
//	{
//		printf("no\n");
//	}
//	else
//	{
//		printf("yes\n");
//	}
//	return 0;
//}

	// ׷���ַ���������	strcat
//	strncat		strncpy  ��һ������ ��Ҫ�Ҳ��������ֽ��ҾͲ��������ֽڡ�

//char* my_strcat(char* ch, const char* zh)
//{
//	char* ret = ch;
//	while (*ch)
//	{
//		ch++;
//	}
//	while (*ch++=*zh++)		// ׷���ַ������ص��ǵ�һ���ַ��������ַ���ַ��
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char ch[30] = "abc";
//	char zh[] = "dfg";
//	char* ret = my_strcat(ch, zh);
//	printf("%s\n", ret);
//	return 0;
//}


	//	 strncpy
//char* my_strncpy(char* dest, const char* source,size_t count)
//{
//	char* ret = dest;
//	while (count && (*dest++=*source))
//	{
//		count--;
//	}
//	if (count)//ֱ����Ҫ�������ֽ��� count ��Ϊ0������Ͳ���0 �ˡ�
//	{
//		while (--count)
//		{
//			*dest++ = '\0';
//		}
//	}
//}

//	strncat	���Լ���0. 

//char* strncat(char* front, const char* back,size_t count)
//{
//	char* ret = front;
//	while (*front++)
//	{
//		;
//	}
//	front--;
//	while (count--)
//	{
//		if (*front++=*back++)
//		{
//			return ret;
//		}
//	}
//	*front = '\0';
//	return ret;
//}

	//strstr	Ѱ���ַ���
//char* my_strstr(char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = p1; char* s2 = (char*)p2; char* cur = p1;
//	if (*p2=='\0')
//	{
//		return p1;
//	}
//	while (*cur)
//	{
//		s1 = cur; s2 =(char*) p2;
//		while ((*s1!='\0')&&(*s2!='\0')&&(*s1==*s2))
//		{
//			s1++; s2++;
//		}
//		if (*s2=='\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ����ִ���
//}
