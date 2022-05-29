//找凶手：A说不是我，B说凶手是C，C说凶手是D，D说C在胡说，已知四人中3人说的真话，1人说的假话，找出凶手是谁
#include<stdio.h>
int main()
{
	int killer = 0;
	int result = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("真相只有一个，凶手就是 %c！", killer);
		}
	}
	return 0;
}