////A B投票，以0结束
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	int count_a = 0;
//	int count_b = 0;
//	while ((ch = getchar()) != '0' && ch != EOF)
//	{
//		if (ch == 'A')
//		{
//			count_a++;
//		}
//		if (ch == 'B')
//		{
//			count_b++;
//		}
//		//这里不需要getchar,因为ch读取读的是同一行的输入，没有\0，不需要过滤！
//	}
//	if (count_a > count_b)
//	{
//		printf("A\n");
//	}
//	else if (count_a < count_b)
//	{
//		printf("B\n");
//	}
//	else
//	{
//		printf("E\n");
//	}
//	return 0;
//}
//读取一行的办法投票
#include<stdio.h>
int main()
{
	char str[40]={0};//这里得用char！
	gets(str);
	int i = 0;
	int count = 0;
	while (str[i] != 0)
	{
		if (str[i] == 'A')
			count++;
		else if (str[i] == 'B')
			count--;
		i++;
	}
	if (count > 0)
		printf("A\n");
	else if (count < 0)
		printf("B\n");
	else
		printf("E\n");
	return 0;
}