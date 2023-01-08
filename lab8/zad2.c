#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fb = fopen("parzyste.txt", "w+");
    FILE* fnp = fopen("nieparzyste.txt", "w+");
    int n = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        int x = 0;
        scanf("%d", &x);
        if(x %2 == 0) {
            fprintf(fnp, "%d\n", x);
            continue;
        }
        fprintf(fnp, "%d\n", x);
    }
}