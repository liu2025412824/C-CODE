//计算一元二次方程
#include<stdio.h>
#include<math.h>
int main()
{
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;
	while (~scanf("%lf %lf %lf", &a, &b, &c))
	{
		double disc = b * b - 4 * a * c;
		if (a != 0.0)
		{
			if (disc > 0)
			{
				printf("x1=%.2lf;x2=%.2lf\n", (-b - sqrt(disc)) / (2 * a), (-b + sqrt(disc)) / (2 * a));
			}
			else if (disc < 0)
			{
				double dash = sqrt(-disc) / (2 * a);
				if (dash < 0)       //这里一定要判断dash是否小于零，即根号下不能为负数，不然编译器开根号会是一个负数！
				{
					dash = -dash;
				}
				printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n",
					(-b) / (2 * a), dash, (-b) / (2 * a), dash);
			}
			else
			{
				if (b == 0 && c == 0)//不然会显示-0.0！(脑瘫编译器）
				{
					printf("x1=x2=0.00\n");
				}
				else
				{
					printf("x1=x2=%.2lf\n", (-b) / (2 * a));
				}
			}
		}
		else
		{
			printf("Not quadratic equation\n");
		}
	}
	return 0;
}