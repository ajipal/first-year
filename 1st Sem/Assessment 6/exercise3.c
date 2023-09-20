#include <stdio.h>

int func(int);

int main()
{
    int num, ans;
    
    printf("Input any number: ");
    scanf("%d", &num);

    ans = func(num);

    if (ans == 0)
    {
        printf("%d is an even number", num);
    }
    else
    {
        printf("%d is an odd number", num);
    }
    return 0;
}

int func(int x)
{
    int sum;
    sum = x % 2;
    return sum;
}