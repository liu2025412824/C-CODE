//计算a+aa+aaa+aaaa+aaaaa...前n项的和,a是一个数字
#include<stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	scanf("%d%d", &a, &n);
	int i = 0;
	int num = 0;
	int ret = 0;
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		num = num + ret;
	}
	printf("%d\n", num);
	return 0;
}