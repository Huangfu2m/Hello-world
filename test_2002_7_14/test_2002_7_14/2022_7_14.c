#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//printf("%d\n", '\32');
//	//转义字符“\”，的打印表示。结果应为26.
//	//"\32"作为八进制代表的那个十进制数字，作为ASCII码值对应的字符。
//	//printf("%d\n", '\x61');
//	//“\xdd”与上边一个打印类似，是十六进制的形式。dd代表两个十六进制数字。结果应为97
//	
//	
//	/*int input = 0;
//	printf("你已经是一名大学生了。\n\n");
//	printf("你要好好学习吗？(输入1表示是 or 0表示不是)>:");
//	scanf("%d", &input);
//	getchar();//吃掉回车
//	if (input == 1)
//	{
//		printf("你将会获得想要的工作！");
//	}
//	else
//	{
//		printf("你将会回家去卖红薯。");
//	}
//	getchar();//if语句的简单使用*/
//	
//	/*int input = 0;
//	int line = 0;
//	printf("成为一名计算机科学专业的大学生\n");
//	printf("我敲了一行代码\n");
//	printf("你是否要认真学习代码？（输入1表示是 or 0表示否）>>:");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		while (line < 10000)
//		{
//			printf("我又敲了一行代码:%d\n",line+1);
//			line++;
//		}
//		if(line>=10000)
//		printf("我毕业了并且拿到了好offer\n");
//	}
//	else
//	{
//		printf("你毕业就等于失业，回家卖红薯去喽！");
//	}*/
//	//while循环的使用
//	
//	
//	/*int arr[5] = {1,2,3,4,5};
//	int i = 0;
//		while (i <= 5)
//		{
//			printf("%d \n", arr[i]);
//			i++;
//		}*/
//		//数组的定义
//	
//	
//	/*int a = 5;
//	int b = 3;
//	printf("%d\n", a|b);*/
//	// &与  |或
//	
//	//int a = 0;
//	//printf("%d\n", ~a);// ~按位取反
//
//
//	//int a = 10;
//	////int b = a++; //后置++，代表先使用再++。结果a=11，b=10.
//	////int b = ++a; //前置++，代表先++再使用。结果a=11，b=11.
//	////int b = a--; //同上。
//	//int b = --a; //同上。
//	//printf("%d %d\n", a, b);
//
//	//int a = 3;
//	//int b = 5;
//	//int c = a && b; //逻辑与&&的使用，输出结果1代表真，0代表假，此代码为真。
//	//printf("%d\n", c);
//
//
//	//int a = 3;
//	//int b = 0;
//	//int c = a || b; //逻辑非||的使用，其余同上↑。
//	//printf("%d\n", c);
//
//
//	/*int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("请输入两个整数：\n");
//	scanf("%d %d", &a, &b);
//	max = (a > b ? a : b);
//	printf("您刚刚输入的两个整数中，较大的一个是：%d\n", max);*/
//
//
//	//typedef unsigned int u_int;// typedef 类型重新定义的使用
//	//u_int num = 20;
//
//
//
//	return 0;
//
//
//}

//
//void test()
//{
//	static  int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}

//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);//使用了同一个工程中另一个头文件里定义的外部函数 add
//	printf("sum=%d\n", sum);
//	return 0;
//}

//
//int main()
//{
//	int a = 1;//int 4个字节，32个bit位
//	int* p = &a;// int*用来声明指针变量，指针变量使用来存放内存地址的变量。
//	*p = 20;// * -解引用操作符，改指针p中a的值，1到20.
//	printf("%d\n", a);
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("%d\n", sizeof(p));//64位系统指针占用8个字节，32位系统占用4个字节。
//	return 0;
//}


//结构体类型的变量声明使用：
struct Book
{
	char name[20];//《C语言程序设计》
	short price;//55
};

int main()
{	//利用结构体类型-struct创建一个该类型的结构体变量。
	struct Book b1 = { "《C语言程序设计》",55};
	/*printf("书名：%s\n", b1.name);
	printf("书的价格：人民币%d元\n", b1.price);
	b1.price = 45;
	printf("降价后书的价格为人民币%d元\n", b1.price);
	*/
	struct Book* pb = &b1;//结构体变量的指针使用的两种方式：
	/*printf("%s", (*pb).name);
	printf("%d", (*pb).price);*///第一种。因为 . 的优先级非常高，所以要加括号更新优先级。
//
//	printf("%s", pb->name);
//	printf("%d", pb->price);//第二种。直接用箭头指向要打印的成员变量名称。
//	return 0;
//}