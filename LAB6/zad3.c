
#include <stdio.h>

int wpisanie(int n) {
    if(n > 1) {
        printf("%d\n", n);
        return wpisanie(n - 1);
    }else if(n = 1) {
        return 1;
    }
}

int main()
{
    int result = wpisanie(10);
    printf("%d", result);
    
    return 1;
}