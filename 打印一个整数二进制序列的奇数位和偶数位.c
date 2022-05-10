//打印一个整数二进制序列的奇数位和偶数位
#include<stdio.h>
void print(int n)
{
	int i = 0;
	printf("奇数位\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	printf("偶数位\n");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	return 0;
}