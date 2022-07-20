#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//输入三个数，自动降序输出。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("输入三个整数，自动降序输出：");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;//tep作为一个临时存储值的变量，存储a or b or c的值。
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n",a,b,c);
//	return 0;
//}



////打印0到100间3的倍数的数
//int main()
//{
//	int n = 3;
//	for (n = 3;n < 100;n += 3)
//	{
//		printf("%d\n", n);
//	}
//	return 0;
//
//}



//打印1000年到2000年间的闰年 
//int main()
//{
//	int count = 0;
//	int year = 0;
//	for (year = 1000;year <= 2000;year++)
//	{
//		//判断year是否为闰年
//		//能被4整除且不能被100整除，能被400整除是闰年。
//		if(year%4==0 && year%100!=0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//		
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}



//写一个代码：打印0到200之间的素数。并且声明一共是多少个素数。
//
//int main()
//{
//	int count = 0;
//	int i=0;
//	for (i = 0;i <= 200;i++)
//	{	//使用试除法判断是否为素数
//		//13 用2-12的数字去除13，假如没有一个能整除13，那么13为素数，输出。
//		//首先，产生2到i-1的数字。
//		int j = 0;
//			for (j = 2;j < i;j++)
//			{
//				if (i % j == 0)
//					break;
//				
//			}
//			if (j == i)
//			{
//				printf("%d\n", i);
//				count++;
//			}
//			
//	}
//	printf("200以内一共有%d个素数\n", count);
//	return 0;
//}



////编写代码：100以内所有整数中带9整数的个数。
//int main()
//{
//	int count = 0;
//	int i = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		if ((i - 9) % 10 == 0 || i / 9 == 10)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//
//		
//	}
//	printf("100以内一共有%d个带数字9的整数。", count);
//	return 0;
//}


//
////分数求和
////计算1/1-1/2+1/3-1/4+1/5......+1/99-1/100的值，并打印出结果。
//int main()
//{
//	int i = 0;
//	double sum =0.0;
//	int flag = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		sum += flag*1.0/ i;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}



////求10个整数中最大的一个并输出。
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1;i < sz;i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}



//在屏幕上输出9*9乘法口诀表
// 1*1=1
// 2*1=2 2*2=4
// 3*1=3 3*2=6 3*3=9
int main()
{
	int i = 0;
	for (i = 1;i <= 9;i++)
	{
		int j = 1;
		for (j = 1;j <= i;j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);//%-2d -代表向左对齐，2d代表打印两位数，预留两位
		}
		printf("\n");
	}
	return 0;
}