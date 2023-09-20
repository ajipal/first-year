#include <stdio.h>

int main()
{
    int user[11], sum[10], i;

    printf("Enter 11 integers\n");

    // for the user to enter the integers
    for ( i = 0; i < 11; i++)
    {
        printf("Input %d: ", i+1);
        scanf("%d", &user[i]);
    }

    // for adding two succeeding pairs
    printf("SUM of TWO succeeding pairs: ");

    for ( i = 0; i < 10; i++)
    {
        sum[i] = user[i] + user[i + 1];
        printf("%d ", sum[i]);
    }

    return 0;
}