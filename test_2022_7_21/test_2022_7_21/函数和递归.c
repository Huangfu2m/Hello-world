//什么是递归？
//程序调用自身的编程技巧称为递归（recursion)。
// 递归，通常把一个大型复杂的问题层层转化为一个与原问题相似的规模较小的问题来求解。
//递归的主要思考方式在于：把大事化小

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

////最简单的递归：
////此代码会导致栈溢出（stack overflow）
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}



//练习一： 接受一个整型值（无符号），按照顺序打印它的每一位。
////例如：输入”1234，输出：1 2 3 4 .
//
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//递归
//	print(num);
//	return 0;
//}



//练习二：编写函数，不允许创建临时变量，求字符串长度
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len=my_strlen(arr);//arr 是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址。
//	printf("lenth=%d\n", len);
//	return 0;
//
//}


//用递归的方式解决：↓
int  my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
int main()
{
	char arr[] = "byte";
	int len = my_strlen(arr);
	printf("lenth=%d\n", len);
	return 0;
}