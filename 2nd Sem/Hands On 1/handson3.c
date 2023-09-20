#include <stdio.h>

void calculateFactorial();

int main()
{
    printf("enter a number: ");
    calculateFactorial();

    return 0;
}

void calculateFactorial()
{
    int n;
    int fac = 1;

    scanf("%d", &n);

    for (int i = n; i > 1; i--)
    {
        fac *= i;
    }
    printf("The factorial of %d is %d", n, fac);
}