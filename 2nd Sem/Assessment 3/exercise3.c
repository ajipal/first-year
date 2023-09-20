#include <stdio.h>

int sum(int *, int *);

int main()
{
    int a, b, res;

    printf("Input the first number: ");
    scanf("%d", &a);
    printf("Input the second number: ");
    scanf("%d", &b);

    res = sum(&a, &b);

    printf("===========================\n");
    printf("The sum of %d and %d is %d", a, b, res);
    return 0;
}

int sum(int *a, int *b)
{
    return (*a + *b);
}