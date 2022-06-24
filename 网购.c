//网购
#include<stdio.h>
int main()
{
	float price;
	int m;
	int d;
	int flag;
	scanf("%f %d %d %d", &price, &m, &d, &flag);
	if ((m == 11) && (d == 11))
	{
		price *= 0.7;
		if (flag == 1)
		{
			price -= 50;
		}
	}
	if ((m == 12) && (d == 12))
	{
		price *= 0.8;
		if (flag == 1)
		{
			price -= 50;
		}
	}
	if (price < 0)
	{
		price = 0;
	}
	printf("%.2f", price);
	return 0;
}