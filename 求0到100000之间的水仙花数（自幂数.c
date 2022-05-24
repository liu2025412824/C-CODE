//求0到100000之间的水仙花数（自幂数）  
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i < 100000; i++)
	{
		int n = 1;
		int sum = 0;
		int tmp = i;
		while (tmp =tmp / 10)
		{
			n++;
		}
		tmp = i;
		while (tmp)
		{
			sum =sum + (int)pow(tmp % 10, n); //pow返回的是一个浮点型，可强制类型转换为整形，便不再警报
			tmp = tmp / 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}