//递归的方法求一个数的n次方
#include<stdio.h>
double p(double a, int n)
{
	if (n == 0)
		return 1;
	if (n > 0)
		return a * p(a, n - 1);
	if (n < 0)
	{
		n = -n;
		return 1 /p(a, n-1);
	}
}
int main()
{
	double a = 0;
	int n = 0;
	scanf("%lf %d", &a, &n);
	printf("%lf", p(a, n));
	return 0;
}