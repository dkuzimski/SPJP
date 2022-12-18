#include <stdio.h>

int main(){
    int tab[10];

    printf("Wprowadz 10 liczb: \n");
    for (int i=0; i<10; i++) {
        scanf("%d", &tab[i]);
    }

    printf("Elementy tablicy: \n");
    for (int i=0; i<10; i++) {
        int* p = &tab[i];
        printf("%d ", *p);
    }
    
    printf("\n");

}