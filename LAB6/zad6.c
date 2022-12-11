
#include <stdio.h>

int sum(int n, int h) {
    if(n == 0) {
        return h;
    } else {
        return sum(n / 10, (n%10) + h);
    }
}

int main()
{
    printf("%d", sum(689, 0));
    
    return 0;
}