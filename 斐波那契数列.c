#include<stdio.h>
int Fib(int n) //递归方式不妥
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int Fib2(n)   //此时循环的方式更妥
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib2(n);
	printf("%d\n", ret);
	return 0;
}
