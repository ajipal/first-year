#include <stdio.h>

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    int *num;

    num = arr;
    printf("value of the third element : %d\n", *(num + 2));
    num += 2;
    printf("value after incrementing by 2: %d\n", *(num));
    num -= 1;
    printf("Value after subracting 1: %d\n", *(num));
    num = arr;
    printf("Value of the first element: %d\n", *num);

    return 0;
}