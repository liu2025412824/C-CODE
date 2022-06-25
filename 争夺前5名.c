//争夺前5名
#include<stdio.h>
#include<stdlib.h>
int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e2 - *(int*)e1);
}
int main()
{
	int n=0;
	int arr[40]={0};
	int i = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	////冒泡排序
	//for (i = 0; i < n - 1; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < n - 1 - i; j++)
	//	{
	//		if (arr[j] < arr[j + 1])
	//		{
	//			int tmp;
	//			tmp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = tmp;
	//		}
	//	}
	//}
	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	//qsort排序的方法(降序 1.可以调转e1 e2; 2.可以调转i的走向)
	qsort(arr, n, 4, cmp_int);
	/*for (i = n - 1; i >= n - 5; i--)
	{
		printf("%d ", arr[i]);
	}*/
	for (i = 0; i < n - 1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}