#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *arr, sum = 0, product = 1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = malloc(n * sizeof(int));

    printf("Enter the %d elements: \n", n);

    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);

        sum += arr[i];
        product *= arr[i];
    }

    printf("The sum of all elements is %d\n", sum);
    printf("The product of all elements is %d\n", product);

    free(arr);

    return 0;
    
}