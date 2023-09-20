#include <stdio.h>

int sum(int, int);
int product(int, int);

int main()
{
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    int sum_res = sum(num1, num2);
    int product_res = product(num1, num2);

    printf("=============================\n");
    printf("The sum of %d and %d is %d.\n", num1, num2, sum_res);
    printf("The product of %d and %d is %d.\n", num1, num2, product_res);

    return 0;
}

int sum(int a, int b)
{
    return (a + b);
}

int product(int a, int b)
{
    return (a * b);
}