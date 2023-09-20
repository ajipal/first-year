#include <stdio.h>

float func(float);   //function declaration

int main()
{
    float num;
    float ans;
    printf("Input any number for square: ");
    scanf("%f", &num);

    ans= func(num);   //passing num as argument to func() 
    printf("===============================\n");
    printf("The square of %.2f is %.2f", num, ans);

    return 0;
}

float func(float x)
{
    float square;
    square = x * x;
    return square;
}