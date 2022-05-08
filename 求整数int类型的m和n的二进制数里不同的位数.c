//求整数int类型的m和n的二进制数里不同的位数
#include<stdio.h>
int get_diff_bit(int m, int n)
{
	int tmp = m ^ n;
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}
int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	int count = get_diff_bit(m, n);
	printf("%d\n", count);
	return 0;
}