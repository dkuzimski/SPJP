
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool check(char str[], int a, int b) {
    if (a == b) {
        return true;
    }
    if(str[a] != str[b]) {
        return false;
    }
    if(a < b + 1) {
        return check(str, a + 1, b - 1);
    }
    return true;
}

bool palindrom(char str[]) {
    int n = strlen(str);
    
    if(n == 0) {
        return true;
    } else {
        return check(str, 0, n - 1);
    }
}

int main()
{
    char word[] = "kajak";
    if(palindrom(word))
    printf("TAK");
    else
    printf("NIE");

    return 0;
}