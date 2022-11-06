#include<stdio.h>
void main()
{
    printf("Hello, World \n");

int a,b;

printf("Podaj Pierwszą Liczbę: ");
scanf("%d", &a);

printf("Podaj Drugą Liczbę: ");
scanf("%d", &b);

printf("\n Dodawanie");
printf(" = %d",(a+b));

printf("\n Odejmowanie");
printf(" = %d",(a-b));

printf("\n Mnożenie");
printf(" = %d",(a*b));

printf("\n Dzielenie");
printf(" = %d\n",(a/b));

}