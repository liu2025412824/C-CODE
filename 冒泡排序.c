#include<stdio.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)         //确定冒泡排序的趟数
	{
		int j = 0;
		int flag = 1;                      //假设这一趟排序的数据已经有序
			for (j = 0; j < sz - 1 - i; j++)       //每一趟冒泡排序
			{
				int tmp;
				if (arr[j] > arr[j + 1])
				{
					tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
					flag = 0;                  //本趟排序的数据不完全有序
				}
			}
			if (flag = 1)
				break;
	}
}
int main()
{
	int arr[] = { 10,18,81,17,60,20,48,33,62,51 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k;
	bubble_sort(arr, sz);
	for (k = 0; k < sz; k++)
	{
		printf("%d ",arr[k]);
	}
	return 0;
}