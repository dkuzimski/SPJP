#include <stdio.h>

int main () {
    int a, b;
    int suma = 1;
    printf("Podaj liczbe naturalną a i b\n");
    scanf("%d%d" ,&a ,&b);
    for (int i=1; i <= b; ++i) {
        suma *= a;
    }
    printf("liczba a do potęgi b to: %d\n", suma);
}