#include <stdio.h>

int main () {
    int n;
    int suma = 0;
    printf("Podaj liczbe naturalną\n");
    scanf("%d" ,&n);
    for (int i=1; i <= n; ++i) {
        suma += i*i;
    }
    printf("suma kwadratów liczb od 1 do n to: %d\n", suma);
}