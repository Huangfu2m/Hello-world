#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <string.h>
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "########";
//	strcpy(arr2, arr1);
//	printf("%s", arr2);//结果只有bit ，因为把arr1里边的\0也拷贝过来了，所以后边的###都不打印
//	
//	//strlen - string length-字符串长度有关
//	//strcpy-string copy-字符串拷贝
//	return 0;
//}

//
//
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//替换原字符串的前几个元素 
//	printf("%s\n", arr);
//	return 0;
//}




//比库函数更重要的函数：自定义函数
//自定义函数和库函数一样，有函数名，返回值类型和函数参数。
//自定义函数给程序员一个很大的发挥空间。


//写一个函数，找出两个数中间的较大值

//get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 99;
//	int b = 20;
//	int max = get_max(a, b);// a赋值给x，b赋值给y
//	printf("max=%d\n", max);
//	return 0;
//}



//打印100 -- 200之间的素数.
//
//int is_prime(int n)//是素数返回1，不是返回0.
//{
//	int m = 0;
//	for (m = 2;m < n;m++)
//	{
//		if (n % m == 0)
//			return 0;
//	}
//	if(m==n)
//	return 1;
//
//}
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d\n", i);
//		else
//			continue;
//	}
//	return 0;
//}


//输出2000到3000之间的闰年
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 2000;year <= 3000;year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d\n", year);
//			count++;
//		}
//		else
//			continue;
//	}
//	printf("2000--3000年中一共有%d个闰年\n",count);
//	return 0;
//}



//二分查找
//在一个有序数组中查找具体的某个数
//如果找到，返回这个数的下表，找不到，返回-1
//
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right) / 2;//中间元素的下标
//	while (left<=right)
//	{
//		
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//sz等于数组中元素数量。
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//		printf("找不到指定数字\n");
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	
//	return 0;
//}


//
//
//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}



//
//int main()
//{
//	printf("%d", printf("%d", printf("%d",43)));//4321
//	return 0;
//}



