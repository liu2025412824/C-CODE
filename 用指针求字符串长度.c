//指针的方法实现查找字符串的长度
#include<stdio.h>
int my_str(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return (end - start);
}
int main()
{
	char arr[] = "bit";
	int len = my_str(arr);
	printf("%d\n", len);
	return 0;
}