#define _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <stdio.h>
#include<time.h>

//猜数字游戏
//1.电脑会生成一个随机数  2.猜数字

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
		printf("猜猜数字是多少：");
		scanf("%d", &guess);
		if (guess > ret)
			printf("大了\n");
		else if (guess < ret)
			printf("小了\n");
		else
			printf("猜对了，麦麦真厉害！\n");
	}
	printf("%d\n", ret);
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));//1.生成一个随机数   
	//时间戳；生成随机数也需要一个随机数，用时间戳作为被需要的随机数。
	//拿时间戳设置随机数的起点
	do
	{
		menu();
		printf("请输入1或0进行选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//猜数字游戏的函数。
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请在1或0中选择\n");
			break;
		}
	} while (input);
	return 0;
}