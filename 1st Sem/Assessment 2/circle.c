#include <stdio.h>

int main()
{
    float radius, circle_circumference;
    const double PI = 3.1416; 

    printf("Enter radius: ");
    scanf("%f", &radius);

    circle_circumference= 2*PI*radius;
    printf("The circumference of the circle is %.4f", circle_circumference);

    return 0;
}