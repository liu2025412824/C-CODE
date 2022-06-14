//输入20130205，输出分开的年月日
#include<stdio.h>
int main()
{
	int y;
	int m;
	int d;
	scanf("%4d%2d%2d", &y, &m, &d);//指定域宽一次性读取
	printf("year=%d\n", y);
	printf("month=%02d\n", m);//指定域宽为2，且不够时前面补0引导
	printf("date=%02d\n", d);
	return 0;
}