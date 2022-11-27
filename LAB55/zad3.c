#include <stdio.h>

char check(char* s, int i) {
    return s[i];
}

int main() {
    char a[20];
    int liczba;
    printf("Podaj napis\n");
    scanf("%s", a);
    printf("Podaj liczbę\n");
    scanf("%d", &liczba);
    char b = check(a, liczba);
    printf("%c\n", b);
    return 0;


}