#include <stdio.h>

int func(int);

int main()
{
    int num;

    printf("Input any decimal number: ");
    scanf("%d", &num);

    printf("The Binary value is: ");
    func(num);

    return 0;
}

int func(int x)
{
    // bi is an array to store the output of the do while loop
    int bi[100];
    int i=0, j;

    // to convert decimal to binary
    do
    {
        bi[i]= x % 2;
        x = x / 2;
        i++;
    } 
    while (x > 0);

    // to print the inverted answer of do while loop
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", bi[j]);
    }
    
    return 0;
}