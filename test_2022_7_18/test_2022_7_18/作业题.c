#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//�������������Զ����������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("���������������Զ����������");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;//tep��Ϊһ����ʱ�洢ֵ�ı������洢a or b or c��ֵ��
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



////��ӡ0��100��3�ı�������
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



//��ӡ1000�굽2000�������� 
//int main()
//{
//	int count = 0;
//	int year = 0;
//	for (year = 1000;year <= 2000;year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		//�ܱ�4�����Ҳ��ܱ�100�������ܱ�400���������ꡣ
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



//дһ�����룺��ӡ0��200֮�����������������һ���Ƕ��ٸ�������
//
//int main()
//{
//	int count = 0;
//	int i=0;
//	for (i = 0;i <= 200;i++)
//	{	//ʹ���Գ����ж��Ƿ�Ϊ����
//		//13 ��2-12������ȥ��13������û��һ��������13����ô13Ϊ�����������
//		//���ȣ�����2��i-1�����֡�
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
//	printf("200����һ����%d������\n", count);
//	return 0;
//}



////��д���룺100�������������д�9�����ĸ�����
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
//	printf("100����һ����%d��������9��������", count);
//	return 0;
//}


//
////�������
////����1/1-1/2+1/3-1/4+1/5......+1/99-1/100��ֵ������ӡ�������
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



////��10������������һ���������
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



//����Ļ�����9*9�˷��ھ���
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
			printf("%d*%d=%-2d ", i, j, i * j);//%-2d -����������룬2d�����ӡ��λ����Ԥ����λ
		}
		printf("\n");
	}
	return 0;
}