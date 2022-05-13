//输入一个非负整数，利用递归的方法，求出组成他的数字之和
#include<stdio.h>
int Digitsum(int num)
{
	if (num > 9)
	{
		return Digitsum(num / 10) + num % 10;
	}
	else
		return num;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int sum = Digitsum(num);
	printf("sum=%d ", sum);
	return 0;
}