//通过判断是否为其子串的方法来判断两个字符串后者是否由前者旋转得来
#include<stdio.h>
#include<string.h>
int is_left_move(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
		return 0;
	 
	//1.在str1字符串中追加一个str1字符串
	//strcat(str1,str1);//err 不可以追加自己
	strncat(str1, str1, len1);//abcdefabcdef
	//判断str2指向的字符串是否为str1指向的字符串的子串
	//strstr找子串的
	char* ret = strstr(str1, str2);
	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
		printf("YES");
	if (ret == 0)
		printf("NO");
	return 0;
}