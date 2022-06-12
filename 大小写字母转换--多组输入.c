//大小写字母转换--多组输入(利用循环)
#include<stdio.h>
int main()
{
	int ch;
	while ((ch = getchar())!=EOF)
	{
		if (ch >= 65 && ch <= 90)
		{
			putchar(ch + 32);
		}
		else
		{
			putchar(ch - 32);
		}
		getchar();
		printf("\n");
	}
	return 0;
}