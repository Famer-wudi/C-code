#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

	//strlen  求字符串长度。
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


	//strcpy 拷贝字符串函数
//char* my_strcpy(char* ch, const char* nb)
//{
//	assert(ch && nb);
//	char* ret = ch;
//	while (*ch++=*nb++)
//	{
//		;
//	}
//	return ret;//返回目的空间的起始地址。
//}
//int main()
//{
//	char ch[20] = "wohen6";//目标空间足够大 而且可变。
//	char nb[10] = "nihao";//以 0 结尾。
//	char* ret = my_strcpy(ch, nb);
//	printf("%s\n", ret);
//	return 0;
//}

		//strcmp	比较两个字符串的大小。
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

	//判断一个字符串是否是另一个字符串的子集。
//int is_yon(char* arr1, char* ch)
//{
//	assert(arr1 && ch);
//	
//	char* ret = strstr(arr1, ch);//在 arr 1里面找 ch 。	找字串。
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

	// 追加字符串函数。	strcat
//	strncat		strncpy  多一个参数 你要我操作几个字节我就操作几个字节。

//char* my_strcat(char* ch, const char* zh)
//{
//	char* ret = ch;
//	while (*ch)
//	{
//		ch++;
//	}
//	while (*ch++=*zh++)		// 追加字符串返回的是第一个字符串的首字符地址。
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
//	if (count)//直到想要拷贝的字节数 count 变为0，后面就不补0 了。
//	{
//		while (--count)
//		{
//			*dest++ = '\0';
//		}
//	}
//}

//	strncat	会自己补0. 

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

	//strstr	寻找字符串
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
//	return NULL;//找不到字串。
//}
