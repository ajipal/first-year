#include <stdio.h>

void printPyramidPattern();

int main()
{
    printPyramidPattern();
    return 0;
}

void printPyramidPattern()
{
    int n;
    printf("enter height: ");
    scanf("%d", &n);
    
     for (int i = 0; i < n; i++)
    {   
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }

        for (int j = 0; j < i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
