#include <stdio.h>
double pow(double x, int n)
{
    if (n == 0) // 为零则为 1
        return 1;
    if (n > 0)
    {
        double num = 1;
        while (n--) // 循环累乘
        {
            num *= x;
        }
        return num;
    }
    if (n < 0)
    {
        n = -n;
        double num = 1;
        while (n--) // 循环累乘
        {
            num *= x;
        }
        return 1/num;
    }
}
int main()
{
    double x = 0;
    int n = 0;
    scanf("%lf%d", &x, &n);
    printf("%lf的%d次方为 = %lf\n", x, n, pow(x, n));
    return 0;
}