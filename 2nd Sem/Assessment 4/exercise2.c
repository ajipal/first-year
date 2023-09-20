/*Write a program that takes a 5x5 matrix as input from the user and then finds the largest 
element in the matrix along with its row and column index. */

#include <stdio.h>
#define SIZE 5

int main()
{
    int matrix[SIZE][SIZE];
    int i, j, mi, mj;
    int largest = matrix[0][0];

    printf("Enter the %d x %d matrix elements:\n", SIZE, SIZE);

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("elements [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);

            if(matrix[i][j] > largest)
            {
                largest = matrix[i][j];
                mi = i;
                mj = j;
            }
        }
    }

    printf("The largest value is in matrix[%d][%d]: %d", mi, mj, largest);
    
    return 0;
    
}