#include <stdio.h>

int main () {
    int a, b;
    int suma = 1;
    printf("Podaj liczbe naturalną a i b\n");
    scanf("%d%d" ,&a ,&b);
    for (int c=1; c <= b; ++c) {
        suma *= a;
        if(suma > b) {
            return printf("a do potęgi %d jest większe od b", c);
        }
    }
   
}