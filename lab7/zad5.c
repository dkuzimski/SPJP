#include <stdio.h>

void sort(int *a, int *b, int *c)
{
    int temp;

    if(*a > *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    if(*a > *c)
    {
        int temp = *a;
        *a = *c;
        *c = temp;    
    }
    if(*b > *c)
    {
        int temp = *b;
        *b = *c;
        *c = temp;    
    }
    
}
int main()
{
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    sort(&a, &b, &c);

    printf("%d, %d, %d\n", a, b, c);
}