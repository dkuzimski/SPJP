#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float subtrackt(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        return 0;
    }

    return a / b;
}

int main ()
{
    float a, b;
    char operation;
    printf("Podaj dwie liczby:\n");
    scanf("%f %f", &a, &b);
    printf("Jakie działanie chcesz wykonać: + - * / \n");
    scanf("%s", &operation);
    switch (operation)
    {
    case '+':
        printf("%f", add(a, b));
        break;
    case '-':
        printf("%f", subtrackt(a, b));
        break;
    case '*':
        printf("%f", multiply(a, b));
        break;
    case '/':
        printf("%f", divide(a, b));
        break;

    deafult:
        break;
    }
    printf("\n");

}