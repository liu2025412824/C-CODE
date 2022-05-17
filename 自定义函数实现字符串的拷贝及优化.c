//自定义函数实现字符串的拷贝及优化
#include<stdio.h>
#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;   //将'\0'也放进去
//}
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);//断言
	assert(src != NULL); //断言
	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[] = "#######################";
	char arr2[] = "bit";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}