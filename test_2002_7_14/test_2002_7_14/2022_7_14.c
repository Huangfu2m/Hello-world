#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//printf("%d\n", '\32');
//	//ת���ַ���\�����Ĵ�ӡ��ʾ�����ӦΪ26.
//	//"\32"��Ϊ�˽��ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ��Ӧ���ַ���
//	//printf("%d\n", '\x61');
//	//��\xdd�����ϱ�һ����ӡ���ƣ���ʮ�����Ƶ���ʽ��dd��������ʮ���������֡����ӦΪ97
//	
//	
//	/*int input = 0;
//	printf("���Ѿ���һ����ѧ���ˡ�\n\n");
//	printf("��Ҫ�ú�ѧϰ��(����1��ʾ�� or 0��ʾ����)>:");
//	scanf("%d", &input);
//	getchar();//�Ե��س�
//	if (input == 1)
//	{
//		printf("�㽫������Ҫ�Ĺ�����");
//	}
//	else
//	{
//		printf("�㽫��ؼ�ȥ������");
//	}
//	getchar();//if���ļ�ʹ��*/
//	
//	/*int input = 0;
//	int line = 0;
//	printf("��Ϊһ���������ѧרҵ�Ĵ�ѧ��\n");
//	printf("������һ�д���\n");
//	printf("���Ƿ�Ҫ����ѧϰ���룿������1��ʾ�� or 0��ʾ��>>:");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		while (line < 10000)
//		{
//			printf("��������һ�д���:%d\n",line+1);
//			line++;
//		}
//		if(line>=10000)
//		printf("�ұ�ҵ�˲����õ��˺�offer\n");
//	}
//	else
//	{
//		printf("���ҵ�͵���ʧҵ���ؼ�������ȥඣ�");
//	}*/
//	//whileѭ����ʹ��
//	
//	
//	/*int arr[5] = {1,2,3,4,5};
//	int i = 0;
//		while (i <= 5)
//		{
//			printf("%d \n", arr[i]);
//			i++;
//		}*/
//		//����Ķ���
//	
//	
//	/*int a = 5;
//	int b = 3;
//	printf("%d\n", a|b);*/
//	// &��  |��
//	
//	//int a = 0;
//	//printf("%d\n", ~a);// ~��λȡ��
//
//
//	//int a = 10;
//	////int b = a++; //����++��������ʹ����++�����a=11��b=10.
//	////int b = ++a; //ǰ��++��������++��ʹ�á����a=11��b=11.
//	////int b = a--; //ͬ�ϡ�
//	//int b = --a; //ͬ�ϡ�
//	//printf("%d %d\n", a, b);
//
//	//int a = 3;
//	//int b = 5;
//	//int c = a && b; //�߼���&&��ʹ�ã�������1�����棬0����٣��˴���Ϊ�档
//	//printf("%d\n", c);
//
//
//	//int a = 3;
//	//int b = 0;
//	//int c = a || b; //�߼���||��ʹ�ã�����ͬ�ϡ���
//	//printf("%d\n", c);
//
//
//	/*int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("����������������\n");
//	scanf("%d %d", &a, &b);
//	max = (a > b ? a : b);
//	printf("���ո���������������У��ϴ��һ���ǣ�%d\n", max);*/
//
//
//	//typedef unsigned int u_int;// typedef �������¶����ʹ��
//	//u_int num = 20;
//
//
//
//	return 0;
//
//
//}

//
//void test()
//{
//	static  int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}

//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);//ʹ����ͬһ����������һ��ͷ�ļ��ﶨ����ⲿ���� add
//	printf("sum=%d\n", sum);
//	return 0;
//}

//
//int main()
//{
//	int a = 1;//int 4���ֽڣ�32��bitλ
//	int* p = &a;// int*��������ָ�������ָ�����ʹ��������ڴ��ַ�ı�����
//	*p = 20;// * -�����ò���������ָ��p��a��ֵ��1��20.
//	printf("%d\n", a);
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("%d\n", sizeof(p));//64λϵͳָ��ռ��8���ֽڣ�32λϵͳռ��4���ֽڡ�
//	return 0;
//}


//�ṹ�����͵ı�������ʹ�ã�
struct Book
{
	char name[20];//��C���Գ�����ơ�
	short price;//55
};

int main()
{	//���ýṹ������-struct����һ�������͵Ľṹ�������
	struct Book b1 = { "��C���Գ�����ơ�",55};
	/*printf("������%s\n", b1.name);
	printf("��ļ۸������%dԪ\n", b1.price);
	b1.price = 45;
	printf("���ۺ���ļ۸�Ϊ�����%dԪ\n", b1.price);
	*/
	struct Book* pb = &b1;//�ṹ�������ָ��ʹ�õ����ַ�ʽ��
	/*printf("%s", (*pb).name);
	printf("%d", (*pb).price);*///��һ�֡���Ϊ . �����ȼ��ǳ��ߣ�����Ҫ�����Ÿ������ȼ���
//
//	printf("%s", pb->name);
//	printf("%d", pb->price);//�ڶ��֡�ֱ���ü�ͷָ��Ҫ��ӡ�ĳ�Ա�������ơ�
//	return 0;
//}