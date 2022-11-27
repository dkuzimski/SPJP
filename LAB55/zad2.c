#include <stdio.h>

void compare(char a, char b){
    if (a == b) {
        printf("Liczby są identyczne\n");
       
    }
    else
    printf("Liczby nie są identyczne\n");
    
}

int main(){
    printf("Podaj dwa znaki aby je porównać\n");
    char a,b;
    scanf("%c %c", &a, &b);
    compare(a, b);

}