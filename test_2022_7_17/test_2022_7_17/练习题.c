#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>



//1������n�Ľ׳�
////for ѭ��������
//int main()
//{
//	int n;
//	printf("������һ�����֣�������׳ˣ�");
//	scanf("%d", &n);
//	int fact = 1;
//	int i;
//	for (i = 1;i < n + 1;i++)
//	{
//		fact *= i;
//
//	}
//	printf("���������ֵĽ׳˽���ǣ�%d\n", fact);
//	return 0;
//}

////whileѭ����
//int main()
//{
//	int n;
//	printf("������һ�������Լ�����׳˽����");
//	scanf("%d", &n);
//	int fact = 1;
//	int i = 1;
//	while (i <= n)
//	{
//		fact = fact * i;
//		i++;
//	}
//	printf("%d�Ľ׳���:%d\n",n,fact);
//	return 0;
//}

//
//
////2������1��+2��+......+10��
//int main()
//{
//	int n;
//	printf("����һ�������������1�����������ֵĽ׳˵ĺͣ�");
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
//	printf("���Ϊ��%d", sum);
//	return 0;
//}



//3����һ�����������в��Ҿ����ĳ������n����дint binserch(int x,int v[],int n); 
//���ܣ���v[0]<=v[1]<=v[2]<=......<=v[n-1]�������У�����x��

//�𰸡�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	//дһ��������arr���������飩���ҵ�7.
//	//˳�����ʱ�临�Ӷ�O(N)
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		if (key == arr[i])
//		{
//			printf("�ҵ��ˣ��±���%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n"); 
//	return 0;
//}

////���ַ����ң���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz-1;//���±�
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;
//}
//




//4����д���룬��ʾ����ַ��������ƶ������м��ۡ�
//int main()
//{
//	                               //welcome to MUST!!!!
//	//ÿ�����߸�����һ���ַ���ֱ������ȫ�������ַ�����
//	char arr1[] = "HuangFu2m & maimai 6999";
//	char arr2[] = "#######################";
//	int left = 0;
//	/*int right = sizeof(arr1) / sizeof(arr1[0]) - 2;*///��2����1��ԭ�����ַ��������һ��\0������������һ������
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(444);//û��ӡһ�д����м���1000ms��
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ��
//		left++;
//		right--;
//	}
//	return 0;
//}



//5��	��д����ʵ�֣�ģ���û���¼����������ֻ�ܵ�¼���Ρ�
//   �����������������룬���������ȷ����ʾ��¼�ɹ���������ξ�����������˳����򡣣�

int main()
{
	int i = 0;
	char password[20]={0};
	for (i = 0;i < 3;i++)
	{
		printf("���������룺");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//==�����ж������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
		{
			printf("��¼�ɹ�");
			break;
		}

	}
	if (i == 3)
		printf("�������������������˳�����");
	return 0;
}