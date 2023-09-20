/*
Write a program that takes a 4x4 matrix as input from the user and then calculates the 
product of the diagonal elements
*/

#include <stdio.h>
#define SIZE 4

int main()
{
    int matrix[SIZE][SIZE];
    int i, j, product = 1;

    printf("Enter the %d x %d matrix elements: \n", SIZE, SIZE);

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < SIZE; i++)
    {
        j = i;
        product *= matrix[i][j];
    }

    printf("The product of the diagonal elements is %d", product);

    return 0;
}