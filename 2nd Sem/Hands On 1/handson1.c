/*
Define a function named "printFibonacci()" that does not take any arguments.
In the function, use a loop to generate and print the first 10 numbers of the Fibonacci sequence.
Call the "printFibonacci()" function from the main function.
*/

#include <stdio.h>

void printFibonacci();

int main()
{
    printf("First 10 numbers of Fibonnaci sequence: \n");

    printFibonacci();

    return 0;
}

void printFibonacci()
{
    int n1 = 0;
    int n2 = 1;
    int fib;

    printf("%d\t", n1);
    printf("%d\t", n2);

    for (int i = 1; i < 9; i++)
    {
        fib = n1 + n2;
        n1 = n2;
        n2 = fib;

        printf("%d\t", fib);
    }
}