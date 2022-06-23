//用循环+数组的方式计算多个数的平均成绩
#include<stdio.h>
int main()
{
	int i = 0;
	double sum = 0;
	double score[5] = { 0 };
	for (i = 0; i < 5; i++)
	{
		scanf("%lf", &(score[i]));
	}
	for (i = 0; i < 5; i++)
	{
		sum += score[i];
	}
	printf("%.1lf", sum/5);
	return 0;
}