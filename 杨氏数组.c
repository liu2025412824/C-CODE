//杨氏数组
//（1）数组的每行从左到右是递增的，每列从上到下是递增的.
//（2）在这样的数组中查找一个数字是否存在，要求时间复杂度小于O(N)。
#include<stdio.h>
//int FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x <= row && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		if (arr[x][y] == k)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
int FindNum(int arr[3][3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		if (arr[x][y] < k)
		{
			x++;
		}
		if (arr[x][y] == k)
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int x = 3;
	int y = 3;
	//返回型参数
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("找到了\n");
		printf("下标为 %d,%d", x, y);
	}
	else
		printf("找不到\n");
	return 0;
}