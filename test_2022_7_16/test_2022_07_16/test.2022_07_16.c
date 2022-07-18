#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//多个分支的if语句
//int main()
//{
//	int age = 0;
//	printf("请输入年龄（正整数）>:");
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱。\n");
//	}
//	else if (age >= 18 && age < 28)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 28 && age < 50)
//	{
//		printf("壮年\n");
//	}
//	else if (age >= 50 && age < 90)
//	{
//		printf("老年\n");
//
//	}
//	else
//		printf("长寿\n");
//		return 0;
//}


//// else的悬空问题，如下所示
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)//因为a=0 不等于1，所以 以下的 if else语句不执行，无任何输出。
//		if (b == 2)
//			printf("呵呵\n");
//		else
//			printf("哈哈\n");
//
//	return 0;
//}


//
////判断一个数是奇数还是偶数
//int main()
//{
//	int num = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("%d是一个奇数", num);
//	if (num % 2 == 0)
//		printf("%d是一个偶数", num);
//	return 0;
//}



////输出100以内的的奇数：
//int main()
//{
//	int num = 1;
//	while (num < 100)
//	{
//		
//		printf("%d\n", num);
//		num=num+2;
//		
//		//or 用if语句,如下：
//		//if(num % 2==1)
//		//printf("%d\n",num)
//		//num++;
//	}
//	return 0;
//}



// switch语句的使用：switch语句也是一种分支语句，但与if、else if不同的是常常用于更多分支的情况。
//用法如下，case代表从哪进入语句，break代表从哪里跳出语句。
//以下代码目的是输入数字几，输出对应是星期几，没什么用，主要作为了解switch语句的使用方式而存在。
//int main()
//{
//	int day = 0;
//	printf("请输入一个数字用来输出是星期几：");
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1: //case后只能跟整型常量表达式，也可以是字符，字符是特殊的整型。
//			printf("星期一\n");
//			break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期天\n");
//			break;
//	}
//	return 0;
//}
//
//
//
////switch语句的另一个使用方法，主要体现在多个入口和一个出口的情况
////比如，和上边的代码相比，这次的需求是，输入1 2 3 4 5都输出“工作日”
////而输入6 7都输出“休息日”
//int main()
//{
//	int day = 0;
//	printf("请输入一个数字，我来判断他是工作日or休息日：");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("是工作日");
//		break;
//	case 6:
//	case 7:
//		printf("是休息日");
//		break;
//	default://如果输入不在以上case中，就会“超纲”，采用default语句处理。
//		printf("输入错误,请输入1到7之间的整数\n");//并且提示用户，输入的值不在范围内。
//		break;
//	}
//	return 0;
//}



////switch语句的嵌套使用，本题注意理解逻辑，输出结果为m=5 n =3；
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}


//
////while循环语句中，break 和 continue 的区别：
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			//continue;//continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，而是直接跳转到while语句的判断部分。进行下一次循环的入口判断。
//            //break； //而break的作用是直接停止以后所有的循环，直接跳出while语句。
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}



int main()
{
	int ch = 0;
	//只有输入EOF的时候，才会停止循环
	//EOF：文件结束标志end of file=1
	while ((ch = getchar()) != EOF)// ！=的意思是≠。
		putchar(ch);
	return 0;
}