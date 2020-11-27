#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>	////结构体  


//int main()
//{
//	double d = 3.14;
//	double* pd = &d;		//不管什么样的指针类型，指针变量的大小根据 位操作系统判定。
//	*pd = 5.5;        //
//	printf("%lf\n",d);
//	return 0;
//}


//表示人，或者书，不是几个字或者字符就能表达的，这些都是复杂对象。
//名字+身高+年龄+身份证号码。
//书名+作者+出版社+定价+书号。。

//C 语言描述复杂对象。————用 结构体 描述。

//是我们自己创造出来的一种类型

//	《 struct 》  结构体关键字。

//	创建一个结构体类型

/*struct BOOK
{
	char name[20];
	short price;
};		//	;	不可缺少 ，结束这个	类型定义的。

/*int main()
{
	//	利用结构体类型——	创建一个该结构体类型的	结构体变量。

	struct BOOK b1 = { "C语言程序设计",55 };		//结构体变量b1

	printf("书名：%s\n",b1.name);		//以字符类型打印	《《. 结构成员访问操作符》》  找到b1 自己的成员。
	printf("价格：%d元\n", b1.price);
	b1.price = 15;								double 类型打印用 %lf
	printf("修改后的价格：%d元\n",b1.price); 
	return 0;
}*/


/*int main()												//		.	（*结构体变量）.成员
{														//	->		调用结构体指针->指针所指的对象的成员  		
	struct BOOK b1 = { "C语言程序设计",55 };	
	struct BOOK* pb = &b1;						//指针变量pb ，放的是b1的地址。  指针变量的类型表示方法 类型*
	//printf("%s\n", (*pb).name);      

printf("%s\n",pb->name);				//利用pb 打印出书名，和价格
 
	//printf("%d\n", (*pb).price);

printf("%d\n",pb->price);			// pb -> 指向我自己的内容。

	strcpy(b1.name, "CC");

	printf("%s更改后的书名\n", b1.name);

	return 0;
}*/

//更改书名

/*	//b1.name = "CC";				name 是个数组名，本质上是个地址。

	strcpy(b1.name, "CC");			字符串拷贝			strcpy	库函数， 要引用 string.h

		//要对name 里面的值进行更改，	需要拷贝一个新的字符串 放到name 里面，就用 strcpy 

		//strcpy（你要放到哪里去， "要拷贝谁"  ）;   两个参数。	

		//b1.price = 15;		变量是可以直接进行赋值的，

		printf("%s 更改后的书名\n"，b1.name);
*/
