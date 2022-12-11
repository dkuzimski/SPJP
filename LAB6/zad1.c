
#include <stdio.h>

int silnia(int n, int fact) {
    if ( n==1 )
        return fact;
    else
        silnia ( n-1, n*fact );
}

int main()
{
    int result = silnia(6, 1);
    printf("wynik: %d", result);
    
    return 0;
}
