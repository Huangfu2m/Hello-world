#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// while 语句的使用中惯于getchar的使用如下：
//int main()
//{
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	int ret = 0;
//	char password[20] = { 0 };
//	int ch = 0;
//	printf("请输入密码：");
//	scanf("%s", password);//输入密码，并存放在password数组中。
//	//当输入密码后按回车，输入缓冲区里还有一个回车：\n
//	//读取以下“\n”，相当于把它拿走，让缓冲区清空。
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认（Y/N）：");
//	ret = getchar();// Y/N
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//		return 0;
//}
 


//for 循环 最常使用的循环语句！！！
//语法：for（表达式1; 表达式2; 表达式3）
//			循环语句;
//表达式1为初始化部分，用于初始化循环变量。
//表达式2为条件判断部分，用于判断循环何时终止。
//表达式3为调整部分，用于循环条件的调整。

//for循环可以理解为while循环的简化版，如下：
// int i = 0; //初始化
// while(i<10) //判断
//{ i++;}// 调整

//实际问题：使用for循环，在屏幕上打印1-10的数字。 

//int main()
//{
//	int i = 0;
//	//   ①初始化；②判断；④调整
//	for (i = 1;i <= 10;i++)
//	{//③中括号内的循环内容；
//		if (i == 5)
//			//for循环中的continue 和 break
//			continue;
//		    //break;
//		printf("%d\n", i);
//
//	}
//	return 0;
//}



//for循环的一些建议①：不可在for循环体内修改循环变量，防止for循环失去控制↓
//int main()
//{
//	int i = 0;
//	for (i = 0;i <= 10;i++)
//	{
//		if (i = 5)//注意这里是局部变量i被改成5，而不是判断==，所以结果会失去控制，进入死循环。
//			printf("hehe\n");
//	}
//	return 0;
//}


////for循环的一些建议②：建议for语句的循环控制变量的取值次啊用“前闭后开区间”的写法↓
//int main()
//	{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0;i < 10;i++)//因为此时的10或许有某些意义而不只是数字10,比如这里是指i是整数0到10。
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//	}


//for循环的一些变种，《省略》①↓
//int main()
//{
//	for (;;)//for循环的初始化、调整、判断，都可以省略。
//			//但是： 判断部分如果被省略，那么判断条件就是：恒为真，可能导致死循环。
//			//所以，如果不是非常熟练，不要随便省略代码。
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//for循环变种②：一个语句中有多个变量↓
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0;x < 2 && y < 5;++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//
////一道for循环的笔试题↓：请问一共要循环多少次？
////答案：0次
//int main()
//{
//	int i = 0, k = 0;
//	for (i = 0, k = 0;k = 0;i++, k++)
//	{
//		printf("hehe\n");
//		k++;
//	}
//	return 0;
//}



//do...while（）循环：
//do 语句的语法：
//do
//	循环语句；
//while(表达式）；

//do...while循环的执行：
//用do...while循环在屏幕上打印10个数字：
//int main()
//{
//	int i=1;
//	do//不判断直接进入循环
//	{
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);//判断是否再次回到do进入循环。
//	return 0;
//}