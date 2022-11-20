#include <stdio.h>

int main() {
    int a[] = {1,2,3,4,5,6,7}; 
    int n = sizeof(a) / sizeof(int);

    for (int i = 0; i < n; i++) 
    {
        a[i]= a[i] * a[i];
        printf("%d ", a[i]);
        if( i == n -1) {
            printf("\n");
        }
    }
}