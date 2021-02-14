#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<assert.h>
#include<assert.h>
#include<errno.h>
#include<ctype.h>

//int is_leftmove(char* str1, char* str2)
//{
//	//追加一个自己，包含了所有可能旋转的串。
//	//再判断是否是自己的字串。
//	//如果目的地字符串长度和源字符串长度不相等，那么肯定不是左旋得到的。
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 !=len2)
//	{
//		return 0;
//	}
//	strncat(str1, str1, 6);
//	//找子串，strstr,
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

		// 字符串比较，strncmp	参数 都是const ...
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
//		printf("p2大\n");
//	}
//	return 0;
//}

//strstr 如果知道到了，就返回该找到的第一个字符串的位置。没找到就返回空指针。

//如果从当前字符串比较没找到，那就从下一个字符的地址开始找。

/* char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 && p2);
	char* s1 = p1;
	char* s2 = p2;
	char* cur = p1;
	if (!(*p2))//为假就跳过去
	{
		return (char*)p1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = p2;
		while (*s2&&*s1&&!(s1-s2))// s1和s2不相等则循环停止。
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
	}							//为假，就跳过去。。为真，就进循环。
	return NULL;//找不到子串。
}*/

		// strtok 
//int main()
//{
//	char arr[] = "zpi@qqq.cc";
//	//一般arr 用临时拷贝，传地址，将标记改为 \0 ，并记住其位置
//	//第二次，传参 传空指针 ，从后面那个位置往后查找。
//	char* p = "@.";
//	//没有则返回NULL
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = NULL;
//	//char* ret=strtok(arr, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//ip 地址是 点分十进制的表示方式 
//
//	for ((ret = strtok(arr, p)); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}

//	strerror	返回错误码，所对应的错误信息。
//int main()
//{
//	//错误码，错误信息。
////errno.h	是一个全局的错误的变量，
////当C语言执行过程中发生了错误，会把对应的错误码 赋值到errno 中。
//
//	char* str = strerror(errno);
//	printf("%s\n", str);
//	
//		//打开文件， r 读操作。
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
//	////如果是小写，返回的是非0值。不是则返回0。
//	//printf("%d\n", ret);
//	//int ret = iswdigit(ch);
//	////判断是否是0-9的数字。
//
//	////字符转换函数
//	//int tolower(int c);//转小写，
//
//	//putchar(ch);//打印字符
//
//	//int toupper(int c);//转大写。ASCII 码值加32就是转大写。
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
