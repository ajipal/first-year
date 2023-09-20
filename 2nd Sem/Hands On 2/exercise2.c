#include <stdio.h>

float converter(float);

int main()
{
    float celsius;
    
    printf("Enter temperature in celsius: ");
    scanf("%f", &celsius);

    float res = converter(celsius);
    
    printf("%.2f degrees in Celsius is equal to %.2f degrees in Fahrenheit.\n", celsius, res);

    return 0;
}   

float converter(float c)
{
    return ((c * 9 / 5) + 32);
}