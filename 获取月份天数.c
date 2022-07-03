//获取月份天数
#include<stdio.h>
int main()
{
	int y;
	int m;
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	while (~scanf("%d %d", &y, &m))
	{
		int day = days[m - 1];
		if (((y % 4 == 0) && (y % 100) != 0) || (y % 400 == 0))
		{
			if (m == 2)
			{
				day++;
			}
		}
		printf("%d\n", day);
	}
	return 0;
}