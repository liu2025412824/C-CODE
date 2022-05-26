//喝汽水问题，1瓶一元，2个空瓶换一瓶汽水，给定钱数求能和几瓶
#include<stdio.h>
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);
	total = money;
	empty = money;
	while (empty >= 2)
	{
		total = total + empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("一共喝了%d瓶汽水", total);
	return 0;
}