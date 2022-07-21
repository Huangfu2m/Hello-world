#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
int main()
{
	char input[20] = { 0 };
	system("shoutdown -s -t 30");
again:
	printf("请注意，你的电脑将在30s后关机，如果输入：我mjq是猪，就取消关机\n");
	printf("请输入：\n");
	scanf("%s", &input);
	if (strcmp(input, "我mjq是猪") == 0)//比较两个字符串
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}