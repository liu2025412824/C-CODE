//不使用累乘法的基础上，通过移位运算(<<)实现2的n次方的计算
#include<stdio.h>
int main()
{
	int n = 0;
	while ((scanf("%d", &n))!=EOF)
	{
		printf("%d\n", 1 << n);
	}
	return 0;
}
