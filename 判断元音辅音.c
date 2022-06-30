//判断元音辅音
#include<stdio.h>
int main()
{
	int ch = 0;
	char s[] = "AaEeIiOoUu";
	int i = 0;
	//while ((scanf("%c",&ch)) != EOF)
  //while ((scanf(" %c",&ch))!=EOF)和while ((scanf("%c\n",&ch))!=EOF)时不用过滤\n（注意%c的变化）！
	while((ch=getchar())!=EOF)
	{
		for (i = 0; i < 10; i++)
		{
			if (ch == s[i])
			{
				printf("Vowel\n");
				break;
			}
		}
		if (i == 10)
		{
			printf("Consonant\n");
		}
		getchar();//这里需要过滤一下输入字母时敲击回车时遗留的\n(无论是用getchar还是scanf都会遗留)！
                //只有读取字符的时候才会从缓冲区读取遗留的\0，scanf赋值数字时，不会读取上一个遗留的\0！
	}
	return 0;
}
