#include <stdio.h>
#define PI 3.14159

void instruct();

int main()
{
    instruct();

    return 0;
}

void instruct()
{
    double rad, circle, circum;

    printf("Enter raduis: ");
    scanf("%lf", &rad);
    
    circle = PI * (rad * rad);
    circum = 2 * PI * rad;

    printf("Circle: %.4lf\n", circle);
    printf("Circumference: %.4lf\n", circum);
}