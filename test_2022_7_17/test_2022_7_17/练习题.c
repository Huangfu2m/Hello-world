#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>



//1、计算n的阶乘
////for 循环方法↓
//int main()
//{
//	int n;
//	printf("请输入一个数字，计算其阶乘：");
//	scanf("%d", &n);
//	int fact = 1;
//	int i;
//	for (i = 1;i < n + 1;i++)
//	{
//		fact *= i;
//
//	}
//	printf("您输入数字的阶乘结果是：%d\n", fact);
//	return 0;
//}

////while循环↓
//int main()
//{
//	int n;
//	printf("请输入一个数字以计算其阶乘结果：");
//	scanf("%d", &n);
//	int fact = 1;
//	int i = 1;
//	while (i <= n)
//	{
//		fact = fact * i;
//		i++;
//	}
//	printf("%d的阶乘是:%d\n",n,fact);
//	return 0;
//}

//
//
////2、计算1！+2！+......+10！
//int main()
//{
//	int n;
//	printf("输入一个数字来计算从1到所输入数字的阶乘的和：");
//	scanf("%d", &n);
//	int fact = 1;
//	int i = 1;
//	int sum = 0;
//	for (i = 1;i < n + 1;i++)
//	{
//		fact *= i;
//		sum = sum + fact;
//		
//	}
//	printf("结果为：%d", sum);
//	return 0;
//}



//3、在一个有序数组中查找具体的某个数字n。编写int binserch(int x,int v[],int n); 
//功能：在v[0]<=v[1]<=v[2]<=......<=v[n-1]的数组中，查找x。

//答案↓
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	//写一个代码在arr（有序数组）中找到7.
//	//顺序查找时间复杂度O(N)
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		if (key == arr[i])
//		{
//			printf("找到了，下标是%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n"); 
//	return 0;
//}

////二分法查找：↓
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz-1;//右下标
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}
//




//4、编写代码，演示多个字符从两端移动，向中间汇聚。
//int main()
//{
//	                               //welcome to MUST!!!!
//	//每次两边各出现一个字符，直到出现全部上述字符串↑
//	char arr1[] = "HuangFu2m & maimai 6999";
//	char arr2[] = "#######################";
//	int left = 0;
//	/*int right = sizeof(arr1) / sizeof(arr1[0]) - 2;*///减2不减1的原因是字符串最后有一个\0，所以用下面一行语句↓
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(444);//没打印一行代码中间间隔1000ms。
//		system("cls");//执行系统命令的一个函数-cls-清空屏幕。
//		left++;
//		right--;
//	}
//	return 0;
//}



//5、	编写代码实现，模拟用户登录场景，并且只能登录三次。
//   （允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，则退出程序。）

int main()
{
	int i = 0;
	char password[20]={0};
	for (i = 0;i < 3;i++)
	{
		printf("请输入密码：");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//==不能判断两个字符串是否相等，应该使用一个库函数-strcmp
		{
			printf("登录成功");
			break;
		}

	}
	if (i == 3)
		printf("三次密码均输入错误，请退出程序");
	return 0;
}