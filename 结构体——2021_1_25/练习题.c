//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>

//字符串逆序排列。
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str !='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* arr)
//{
//	/*int le = 0;
//	int ri = my_strlen(arr) - 1;
//	while (le<ri)
//	{
//		int tmp = arr[le];
//		arr[le] = arr[ri];
//		arr[ri] = tmp;
//		le++;
//		ri--;
//	}*/
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

//输入一个非负整数，返回其每个数字相加的和。
//int Digitsum(int x)
//{
//	if (x>9)
//	{
//		return Digitsum(x / 10) + x % 10;
//	}
//	else
//	{
//		return x;
//	}
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = Digitsum(num);
//	printf("ret = %d", ret);
//	return 0;
//}

//double pow(int n, int k)
//{
//	if (k<0)
//	{
//		return (1 / (-k));
//	}
//	else if (k==0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * pow(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = pow(n, k);
//	printf("ret = %lf", ret);
//	return 0;
//}
