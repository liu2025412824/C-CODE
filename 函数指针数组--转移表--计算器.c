//函数指针数组--转移表--计算器
#include<stdio.h>
void menu()
{
	printf("*******************************\n");
	printf("**    1.Add       2.Sub      **\n");
	printf("**    3.Mul       4.Div      **\n");
	printf("**          0.exit           **\n");
	printf("*******************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int (*pf[])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("请选择操作\n");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数\n");
			scanf("%d%d", &x, &y);
			int ret = (*pf[input])(x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出\n");
		}
		else
		{
			printf("选择错误，请重新选择\n");
		}

	} while (input);
	return 0;
}
