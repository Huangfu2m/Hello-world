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
//	printf("%s", arr2);//���ֻ��bit ����Ϊ��arr1��ߵ�\0Ҳ���������ˣ����Ժ�ߵ�###������ӡ
//	
//	//strlen - string length-�ַ��������й�
//	//strcpy-string copy-�ַ�������
//	return 0;
//}

//
//
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//�滻ԭ�ַ�����ǰ����Ԫ�� 
//	printf("%s\n", arr);
//	return 0;
//}




//�ȿ⺯������Ҫ�ĺ������Զ��庯��
//�Զ��庯���Ϳ⺯��һ�����к�����������ֵ���ͺͺ���������
//�Զ��庯��������Աһ���ܴ�ķ��ӿռ䡣


//дһ���������ҳ��������м�Ľϴ�ֵ

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
//	int max = get_max(a, b);// a��ֵ��x��b��ֵ��y
//	printf("max=%d\n", max);
//	return 0;
//}



//��ӡ100 -- 200֮�������.
//
//int is_prime(int n)//����������1�����Ƿ���0.
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


//���2000��3000֮�������
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
//	printf("2000--3000����һ����%d������\n",count);
//	return 0;
//}



//���ֲ���
//��һ�����������в��Ҿ����ĳ����
//����ҵ���������������±��Ҳ���������-1
//
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right) / 2;//�м�Ԫ�ص��±�
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//sz����������Ԫ��������
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//		printf("�Ҳ���ָ������\n");
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
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



