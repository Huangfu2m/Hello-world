//ʲô�ǵݹ飿
//�����������ı�̼��ɳ�Ϊ�ݹ飨recursion)��
// �ݹ飬ͨ����һ�����͸��ӵ�������ת��Ϊһ����ԭ�������ƵĹ�ģ��С����������⡣
//�ݹ����Ҫ˼����ʽ���ڣ��Ѵ��»�С

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

////��򵥵ĵݹ飺
////�˴���ᵼ��ջ�����stack overflow��
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}



//��ϰһ�� ����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
////���磺���롱1234�������1 2 3 4 .
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
//	//�ݹ�
//	print(num);
//	return 0;
//}



//��ϰ������д����������������ʱ���������ַ�������
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
//	int len=my_strlen(arr);//arr �����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ��
//	printf("lenth=%d\n", len);
//	return 0;
//
//}


//�õݹ�ķ�ʽ�������
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