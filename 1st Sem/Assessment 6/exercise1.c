#include <stdio.h>

int func(int, int);

int main()
{
    int a = 5, b = 6;
    int num= func(a,b);
    printf("The total is: %d",num);

    return 0;
}

int func(int x, int y)
{
    int sum;
    sum= x + y;
    return sum;
}