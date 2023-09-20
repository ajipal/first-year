#include <stdio.h>

void checker(int n, int *num, int *e, int *o);

int main() {
    
    int integers[100], n, even = 0, odd = 0;
    
    printf("enter the number of integers: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        printf("Input %d: ", i+1);
        scanf("%d", &integers[i]);
    }
    
    checker(n, integers, &even, &odd);
    
    if (even > 100)
    {
        even += 10;
    }
    if (odd > 100)
    {
        odd += 10;
    }
    
    printf("The sum of all even numbers is %d\n ", even);
    printf("The sum of all odd numbers is %d", odd);
    
    return 0;
}

void checker(int n, int *num, int *even,int *odd)
{
    for (int i = 0; i < n; i++)
    {
        if (num[i] % 2 == 0)
        {
            *even += num[i];
        }
        if (num[i] % 2 == 1)
        {
            *odd += num[i];
        }
    }
}