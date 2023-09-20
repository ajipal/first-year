/*
    Write a program that takes a matrix of size 4x4 as input from the user and then swaps the first 
    and last row of the matrix. Display the modified matrix
*/

#include <stdio.h>
#define SIZE 4

int main()
{
    int matrix[SIZE][SIZE];
    int i, j;

    printf("Enter the %d x %d matrix elements: \n", SIZE, SIZE);

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Before swapping:\n");

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("\t%d", matrix[i][j]);
        }
        printf("\n");
    }

    printf("After swapping:\n");

    for (i = SIZE - 1; i >= 0; i--)
    {
        for (j = SIZE - 1; j >= 0; j--)
        {
            printf("\t%d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}