#define _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <stdio.h>
#include<time.h>

//��������Ϸ
//1.���Ի�����һ�������  2.������

void menu()
{
	printf("********************************\n");
	printf("*****    1.play   0.exit   *****\n");
	printf("********************************\n");
}
void game()
{
	int guess = 0;
	int ret = rand()%100+1;
	while (1)
	{
		printf("�²������Ƕ��٣�");
		scanf("%d", &guess);
		if (guess > ret)
			printf("����\n");
		else if (guess < ret)
			printf("С��\n");
		else
			printf("�¶��ˣ�������������\n");
	}
	printf("%d\n", ret);
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));//1.����һ�������   
	//ʱ��������������Ҳ��Ҫһ�����������ʱ�����Ϊ����Ҫ���������
	//��ʱ�����������������
	do
	{
		menu();
		printf("������1��0����ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ�ĺ�����
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����1��0��ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}