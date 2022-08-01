#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//递归与迭代
//练习3：求n的阶乘（不考虑溢出）
//
//int Facl(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1;i <= n;i++)
//	{
//		ret *= i;
//
//	}
//	return ret;
//}
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret=Facl(n);
//	printf("%d\n", ret);
//	return 0;
//}
//

//
////用递归的方式实现：求n的阶乘
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}
//


//求斐波那契数列
//描述第n位的斐波那契数列的数

//int Fib(int n)
//{
//	//递归的方式，时间复杂度太大！！！
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	while (n < 2)
	{
		
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c; 
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret=%d\n", ret);
	return 0;
}