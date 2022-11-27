#include <stdio.h>

int main()
{
    int a1,a2,a3,b1,b2,b3;
    printf("a1: ");
    scanf("%d", &a1);
    printf("b1: ");
    scanf("%d", &b1);
    printf("a2: ");
    scanf("%d", &a2);
    printf("b2: ");
    scanf("%d", &b2);
    printf("[a1;b1] = [%d;%d]\n",a1,b1);
    printf("[a2;b2] = [%d;%d]\n",a2,b2);
    if((a2<b1))
    {

    }
    else if(b1<a2)||(b2<a1)    
    {
        printf("-1\n");
    }
    return 0;
}