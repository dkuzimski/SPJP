#include<stdio.h>

int main()
{
    int a, b;

    printf("Podaj pierwszą liczbę: ");
    scanf("%d", &a);
    
    printf("Podaj drugą liczbę: ");
    scanf("%d", &b);

    if (a>b){
        printf("Liczba %d, jest większa. \n", a);
    } else if(a<b){
        printf("Liczba %d, jest większa. \n", b);
    } else{
        printf("Liczby są równe. \n");
    };

}