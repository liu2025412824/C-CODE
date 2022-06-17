//变种水仙花数：求五位数中的所有lily number数
//例如655=6*55+65*5;1461=1*461+14*61+146*1;
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 10000; i <= 99999; i++)
	{
		int j = 0;
		int sum = 0;
		for (j = 10; j <= 10000; j = j * 10)
		{
			sum = sum + (i / j) * (i % j);
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}