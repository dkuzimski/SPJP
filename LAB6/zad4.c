
#include <stdio.h>

int fib(int n, int a, int b)
{
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    return fib(n - 1, b, a + b);
}

int main()
{
    int result = fib(12, 0, 1);
    printf("%d", result);
    
    return 0;
}