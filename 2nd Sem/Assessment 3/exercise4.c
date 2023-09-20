#include <stdio.h>

int main()
{
    int n;
    int num[100];

    printf("Input the number of telements to store in the array: ");
    scanf("%d", &n);

    printf("Input %d number of elements in the array:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &num[i]);
    }

    printf("===========================================\n");
    printf("The elements you entered are: \n");

    for (int i = 0; i < n; i++)
    {
        printf("element - %d: %d\n", i, *(num + i));
    }

    return 0;
}