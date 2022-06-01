//暴力求解法左旋字符
#include<stdio.h>
#include<string.h>
#include<assert.h>
void left_move(char* arr, int k)
{
	assert(arr != NULL);
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < k; i++)
	{
		//左旋一个字符
		//第1步
		int tmp = *arr;
		//第2步
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			*(arr + j) = *(arr + j + 1);
		}
		//第3步
		*(arr + len - 1) = tmp;
	}
}
int main()
{
	char arr[] = "abcdef";
	left_move(arr, 2);
	printf("%s\n", arr);
	return 0;
}
