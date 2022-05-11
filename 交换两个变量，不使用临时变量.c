//交换两个变量，不使用临时变量
#include<stdio.h>
int main()
{
    int a = 1, b = 2;
    //a = a + b;
    //b = a - b;
    //a = a - b;
    //上述方法容易溢出，也可使用下面异或运算的方法
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("%d %d", a, b);
    return 0;
}