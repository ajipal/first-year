#include <stdio.h>

int main()
{
    float num, sum=0;

    do
    {
        printf("enter a number: ");
        scanf("%f", &num);
        sum+=num;
    }
    while(num!=0);

    printf("Sum= %.2f",sum);
}