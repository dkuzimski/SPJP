#include <stdio.h>

int main() {

  int n, i, flag = 0;
  printf("\n Podaj liczbę do sprawdzenia:  ");
  scanf("%d", &n);

  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {

    if (n % i == 0) {
      flag = 1;
      break;
    }
  }


  if (flag == 0)
    printf("    \n%d jest liczbą pierwszą\n\n", n);
  else
    printf("    \n%d nie jest liczbą pierwszą\n\n", n);

}