#include <stdio.h>

int multiplyByTwo(int *arr)
{
    for (int i = 0; i < 5; i++)
    {
        *arr *= 2;
        arr++;
    } 
    return *arr;
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    multiplyByTwo(arr);

    for (int i = 0; i < 5; i++)
    {
        printf("element %d: %d\n", i, *(arr + i));
    }
}