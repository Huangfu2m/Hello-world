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
	printf("��ע�⣬��ĵ��Խ���30s��ػ���������룺��mjq������ȡ���ػ�\n");
	printf("�����룺\n");
	scanf("%s", &input);
	if (strcmp(input, "��mjq����") == 0)//�Ƚ������ַ���
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}