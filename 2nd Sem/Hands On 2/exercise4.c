#include <stdio.h>
#include <math.h>

double BMI(double, double);

int main()
{
    double h, w;

    printf("Enter height in meters: ");
    scanf("%lf", &h);
    printf("Enter weight in kilograms: ");
    scanf("%lf", &w);

    double res = BMI(h, w);

    printf("Your BMI is %.2lf ", res);

    if (res < 18.5)
    {
        printf("(Underweight)");
    }
    else if (res >= 18.5 && res < 25)
    {
        printf("(Normal)");
    }
    else if ( res >= 25 && res < 30)
    {
        printf("(Overweight)");
    }
    else
    {
        printf("(Obese)");
    }

    return 0;   
}

double BMI(double x, double y)
{
    return (y / pow(x, 2));
}
