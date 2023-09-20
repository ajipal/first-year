#include <stdio.h>
#include <math.h>

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;  // Not a prime number
    }
    
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;  // Not a prime number
        }
    }
    
    return 1;  // Prime number
}

int main()
{
    int n;

    printf("Enter integer: ");
    scanf("%d", &n);

    if (isPrime(n))
    {
        printf("It is a prime");
    }
    else
    {
        printf("It is not a prime");
    }

    return 0;
}