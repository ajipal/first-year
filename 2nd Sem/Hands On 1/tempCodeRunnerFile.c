#include <stdio.h>

void printStarPattern();

int main()
{

    printStarPattern();

    return 0;
}

void printStarPattern()
{
    for (int i = 0; i < 5; i++)
    {   
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}