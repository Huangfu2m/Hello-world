#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//�����֧��if���
//int main()
//{
//	int age = 0;
//	printf("���������䣨��������>:");
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸������\n");
//	}
//	else if (age >= 18 && age < 28)
//	{
//		printf("����\n");
//	}
//	else if (age >= 28 && age < 50)
//	{
//		printf("׳��\n");
//	}
//	else if (age >= 50 && age < 90)
//	{
//		printf("����\n");
//
//	}
//	else
//		printf("����\n");
//		return 0;
//}


//// else���������⣬������ʾ
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)//��Ϊa=0 ������1������ ���µ� if else��䲻ִ�У����κ������
//		if (b == 2)
//			printf("�Ǻ�\n");
//		else
//			printf("����\n");
//
//	return 0;
//}


//
////�ж�һ��������������ż��
//int main()
//{
//	int num = 0;
//	printf("������һ��������");
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("%d��һ������", num);
//	if (num % 2 == 0)
//		printf("%d��һ��ż��", num);
//	return 0;
//}



////���100���ڵĵ�������
//int main()
//{
//	int num = 1;
//	while (num < 100)
//	{
//		
//		printf("%d\n", num);
//		num=num+2;
//		
//		//or ��if���,���£�
//		//if(num % 2==1)
//		//printf("%d\n",num)
//		//num++;
//	}
//	return 0;
//}



// switch����ʹ�ã�switch���Ҳ��һ�ַ�֧��䣬����if��else if��ͬ���ǳ������ڸ����֧�������
//�÷����£�case������Ľ�����䣬break���������������䡣
//���´���Ŀ�����������ּ��������Ӧ�����ڼ���ûʲô�ã���Ҫ��Ϊ�˽�switch����ʹ�÷�ʽ�����ڡ�
//int main()
//{
//	int day = 0;
//	printf("������һ������������������ڼ���");
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1: //case��ֻ�ܸ����ͳ������ʽ��Ҳ�������ַ����ַ�����������͡�
//			printf("����һ\n");
//			break;
//		case 2:
//			printf("���ڶ�\n");
//			break;
//		case 3:
//			printf("������\n");
//			break;
//		case 4:
//			printf("������\n");
//			break;
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//			printf("������\n");
//			break;
//		case 7:
//			printf("������\n");
//			break;
//	}
//	return 0;
//}
//
//
//
////switch������һ��ʹ�÷�������Ҫ�����ڶ����ں�һ�����ڵ����
////���磬���ϱߵĴ�����ȣ���ε������ǣ�����1 2 3 4 5������������ա�
////������6 7���������Ϣ�ա�
//int main()
//{
//	int day = 0;
//	printf("������һ�����֣������ж����ǹ�����or��Ϣ�գ�");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("�ǹ�����");
//		break;
//	case 6:
//	case 7:
//		printf("����Ϣ��");
//		break;
//	default://������벻������case�У��ͻᡰ���١�������default��䴦��
//		printf("�������,������1��7֮�������\n");//������ʾ�û��������ֵ���ڷ�Χ�ڡ�
//		break;
//	}
//	return 0;
//}



////switch����Ƕ��ʹ�ã�����ע������߼���������Ϊm=5 n =3��
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}


//
////whileѭ������У�break �� continue ������
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			//continue;//continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ�У�����ֱ����ת��while�����жϲ��֡�������һ��ѭ��������жϡ�
//            //break�� //��break��������ֱ��ֹͣ�Ժ����е�ѭ����ֱ������while��䡣
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}



int main()
{
	int ch = 0;
	//ֻ������EOF��ʱ�򣬲Ż�ֹͣѭ��
	//EOF���ļ�������־end of file=1
	while ((ch = getchar()) != EOF)// ��=����˼�ǡ١�
		putchar(ch);
	return 0;
}