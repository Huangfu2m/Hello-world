#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//�ݹ������
//��ϰ3����n�Ľ׳ˣ������������
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
//	//��n�Ľ׳�
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret=Facl(n);
//	printf("%d\n", ret);
//	return 0;
//}
//

//
////�õݹ�ķ�ʽʵ�֣���n�Ľ׳�
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


//��쳲���������
//������nλ��쳲��������е���

//int Fib(int n)
//{
//	//�ݹ�ķ�ʽ��ʱ�临�Ӷ�̫�󣡣���
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