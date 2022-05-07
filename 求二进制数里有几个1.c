//求二进制数里有几个1
#include<stdio.h>
int count_bit_one(unsigned int a)
{
	int count = 0;
	////while (a)
	////{
	////	if (a % 2 == 1)
	////	{
	////		count++;
	////	}
	////	a=a / 2;
	////}
	//int i = 0;
	//for (i = 0; i < 32; i++)
	//{
	//	if ((a >> i) & 1 == 1)
	//		count++;
	//}
	while (a)
	{
		a = a & (a - 1);
		count++;
	}
	return count;
}
int main()
{
	int a;
	scanf("%d", &a);
	int count = count_bit_one(a);
	printf("%d\n", count);
	return 0;
}