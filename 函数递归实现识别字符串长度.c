#include<stdio.h>
int my_strlen(char* str)  //(char str[])也可以
{
	int count = 0;
	while (*str != '\0')  //解地址
	{
		count++;
		str=str+1;           //地址加一
	}
	return count;
}
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}

#include<stdio.h>
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str+1);
	}
	else
		return 0;
}
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}