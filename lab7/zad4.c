#include <stdio.h>
#include <stdlib.h>

int main(){
    int *tab,*pom,max;
    tab = (int*)malloc(sizeof(int) * 5);
    pom = tab;
    for(int i=0;i<5;i++)
    {
        scanf("%d", tab);
        tab++;
    }
    tab = pom;
    max = *tab;
    tab++;
    for(int i=1;i<5;i++)
    {
        if(max<*tab) max=*tab;
        tab++;
    }
    printf("Najwięsza liczba to: %d\n", max);
}