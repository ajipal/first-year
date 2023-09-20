#include <stdio.h>
#include <math.h>
#define PI 3.14159

float circle(float);
float triangle(float, float);
float rectangle(float, float);
float square(float);

int main()
{
    int n;
    float num1, num2, res;
    
    //Menu
    printf("Select a shape to calculate the area of:\n");
    printf("1.Rectangle\n2.Circle\n3.Triangle\n4.Square\n");

    printf("Enter your choice: ");
    scanf("%d", &n);

    //printed out the exact num the user choose in the menu
    if (n == 1)
    {
        printf("Enter the width of the rectangle: ");
        scanf("%f", &num1);
        printf("Enter the lenght of the rectangle: ");
        scanf("%f", &num2);

        res = rectangle(num1, num2);

        printf("The area of the rectangle is %.2f.", res);
    }
    else if (n == 2)
    {
        printf("Enter the radius of the circle: ");
        scanf("%f", &num1);

        res = circle(num1);
        printf("The area of the circle is: %.2f.", res);
    }
    else if (n == 3)
    {
        printf("Enter the base of the triangle: ");
        scanf("%f", &num1);
        printf("Enter the height of the triangle: ");
        scanf("%f", &num2);

        res = triangle(num1, num2);
        printf("The area of the triangle is %.2f.", res);
        
    }
    else if (n == 4)
    {
        printf("Enter the sides of the square: ");
        scanf("%f", &num1);

        res = square(num1);
        printf("The area of the square is %.2f.", res);
    }
    else
    {
        printf("Invalid Input\n");
    }

    return 0;
}

float rectangle(float a, float b)
{
    return (a * b);
}

float circle(float a)
{
    return (PI * pow(a, 2));
}

float triangle(float a, float b)
{
    return ((a * b) / 2);
}

float square(float a)
{
    return (pow(a, 2));
}