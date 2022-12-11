
#include <stdio.h>

int euklides(int a, int b) {
    if (a > b) {
        if(a%b == 0) {
            return b;
        }
        return euklides(b, a%b);
    } else if (b > a) {
        if(b%a == 0) {
            return a;
        }
        return euklides(a, b%a);
    }else {
        return 0;
    }
}
int main()
{
    int result = euklides(34, 51);
    printf("%d", result);
    
    return 0;
}