//求n的阶乘
#include<stdio.h>
int main()
{
	int num = 0;
	int i = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			ret = ret * j;
		}
		num = num + ret;
	}
	printf("%d\n", num);
	return 0;
}
