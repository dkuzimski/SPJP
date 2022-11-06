#include <stdio.h>

int main() {
   int a, b, c;

    printf("Podaj pierwszą liczbę: ");
    scanf("%d", &a);
    
    printf("Podaj drugą liczbę: ");
    scanf("%d", &b);
    
    printf("Podaj trzecią liczbę: ");
    scanf("%d", &c);

   if ( a > b && a > c )
      printf("%d jest największą liczbą \n", a);
   else if ( b > a && b > c )
      printf("%d jest największą liczbą \n", b);
   else if ( c > a && c > b )
      printf("%d jest największą liczbą \n", c);
   else   
      printf("Równe liczby");

   return 0;
}