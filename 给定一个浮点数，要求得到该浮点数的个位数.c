//给定一个浮点数，要求得到该浮点数的个位数
#include<stdio.h>
int main()
{
	double a;
	scanf("%lf", &a);
	printf("%d", ((int)a) % 10);
	return 0;
}