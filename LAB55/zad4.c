#include <stdio.h>
#include <string.h>

int main()
{
    char slowo[20];
    printf("Podaj słowo: \n\n");
    scanf("%s",slowo);
    int dl = strlen(slowo);
    int i = 0;
    int flaga = 0;
    while(i<dl)
    {
        if(slowo[i] != slowo[dl-i-1])
        {
            printf("Słowo nie jest palindromem\n\n");
            flaga = 1;
            break;
        }
        ++i;
    }
    if(flaga!=1)
    {
        printf("Słowo jest palindromem\n\n");
    }
    return 0;

}



