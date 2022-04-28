#define _CRT_SECURE_NO_WARNINGS	1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 300");
again:
	printf("但是您的电脑将在五分钟后关机，若要取消关机 请输入：我是猪\n请输入:>>\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		printf("取消关机成功，感谢您的配合\n");
		Sleep(1000);
		system("shutdown -a");
	}
	else
	{
		printf("对不起，输入错误 :) \n");
		goto again;
	}
	return 0;
}


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 600");
//	while (1)
//	{
//		printf("电脑将在十分钟内关机，若想取消 请输入：我是猪\n请输入:>>\n");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}
