#include <stdio.h>

int main() {
    int a[][2] = {{1,0},{0,0},{1,0},{1,1},{0,0},{0,1}};

    printf("Podane liczby to: \n{1,0},{0,0},{1,0},{1,1},{0,0},{0,1} \n|--|\n");
    for (int i = 0; i < sizeof(a)/sizeof(int[2]); i++)
    {
        printf("|");
        for (int j = 0; j < 2; j++)
        {
            if(a[i][j] == 1) {
                printf("x");
            }else {
                printf(" ");
            }
        }
        printf("|\n");

    }
    printf("|--|");
    
}