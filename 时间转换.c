//时间转换
#include<stdio.h>
int main()
{
	int sec;
	scanf("%d", &sec);
	int h = sec / 3600;  //sec/60/60
	int m = sec % 3600 / 60;  //sec/60%60
	int s = sec % 3600 % 60;  //sec%60
	printf("%d %d %d", h, m, s);
	return 0;
}

//时间转换plus
#include<stdio.h>
int main()
{
	int h, m, s;
	char ss[3];
	scanf("%d:%d:%d%s", &h, &m, &s,ss);
	if ((*ss)=='A')
	{
		if (h == 12)
		{
			h = 0;
		}
		printf("%02d:%02d:%02d", h, m, s);
	}
	else
	{
		if (h == 0)
		{
			h = 12;
		}
		if (h == 12)
		{
			h = 0;
		}
		printf("%02d:%02d:%02d", h + 12, m, s);
	}
	return 0;
}