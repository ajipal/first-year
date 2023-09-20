/*
 Write a program that takes a matrix of size 3x3 as input from the user and then calculates the 
sum of each row and each column. Display the row sums and column sums.
*/

#include <stdio.h>
#define SIZE 3

int main()
{
    int matrix[SIZE][SIZE];
    int row[SIZE], column[SIZE];
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

    for (i = 0; i < SIZE; i++)
    {
        row[i] = 0;

        for (j = 0; j < SIZE; j++)
        {
            row[i] += matrix[i][j];
        }
    }

    for (j = 0; j < SIZE; j++)
    {
        column[j] = 0;

        for (i = 0; i < SIZE; i++)
        {
            column[j] += matrix[i][j];
        }
    }

    printf("\nTabular Form: \n");

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("\t%d", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nThe sum of each rows and columns: \n");

    for (i = 0; i < SIZE; i++)
    {
        printf("row %d: %d\n", i+1, row[i]);
    }

    for (j = 0; j < SIZE; j++)
    {
        printf("column %d: %d\n", j+1, column[j]);
    }

    return 0;
}