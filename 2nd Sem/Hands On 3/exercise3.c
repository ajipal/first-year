#include <stdio.h>

void swapPointers(int **x, int **y)
{
    int *temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 1, b = 2;
    int *ptrA, *ptrB;

    ptrA = &a;
    ptrB = &b;

    printf("Before swapping a & b:\n");
    printf("ptrA address: %x\t value: %d\n", ptrA, *ptrA);
    printf("ptrB address: %x\t value: %d\n", ptrB, *ptrB);

    swapPointers(&ptrA, &ptrB);

    printf("=======================\n");
    printf("After swapping a & b:\n");
    printf("ptrA address: %x\t value: %d\n", ptrA, *ptrA);
    printf("ptrB address: %x\t value: %d\n", ptrB, *ptrB);
    return 0;
}