//Write a program that calculates the sum of all elements in a given 2D array of size 4x4

#include <stdio.h>
#define SIZE 4

int main()
{
    int elements[SIZE][SIZE];
    int i, j, sum = 0;

    printf("Enter the %d x %d matrix elements: \n", SIZE, SIZE);

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("element [%d][%d]: ", i, j);
            scanf("%d", &elements[i][j]);
            
            sum += elements[i][j];
        }
    }
    
    printf("the sum of all elements: %d", sum);

    return 0;
}