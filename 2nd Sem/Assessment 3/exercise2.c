#include <stdio.h>

int calculator(int *, int *, int *);


int main()
{
    int a, b, c;


    printf("Input the first number: ");
    scanf("%d", &a);
    printf("Input the second number: ");
    scanf("%d", &b);
    printf("Input the third number: ");
    scanf("%d", &c);

    int res = calculator(&a, &b, &c);

    printf("======================================\n");
    printf("The sum of the entered number is %d", res);

    return 0;
}

int calculator(int *a, int *b, int *c)
{
    return *a + *b + *c;
}