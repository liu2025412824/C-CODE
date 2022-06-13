//判断是不是字母
#include<stdio.h>
int main()
{
    int ch;
    while ((ch = getchar()) != EOF)
    {
        //if (ch >= 65 && ch <= 122)
        if (isalpha(ch))  //判断字母有库函数可用
        {
            printf("%c is an alphabet.\n", ch);
        }
        else
        {
            printf("%c is not an alphabet.\n", ch);
        }
        getchar();
    }
    return 0;
}