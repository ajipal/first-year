#include <stdio.h>

float addition(float a, float b)
{
    return a + b;
}
float subtraction(float a, float b)
{
    return a - b;
}
float multiplication(float a, float b)
{
    return a * b;
}
float division(float a, float b)
{
    return a / b;
}

int main()
{
    float a, b, res;
    char c;

    float (*sign)(float, float) = NULL;

    printf("Choose an operator (+,-,*, /): ");
    scanf("%c", &c);

    if (c == '+' || c == '-' || c == '*' || c == '/')
    {
        printf("Enter two integers: \n");
        printf("a: ");
        scanf("%f", &a);
        printf("b: ");
        scanf("%f", &b);

        switch(c)
        {
            case '+':
                
                sign = addition;
                break;

            case '-':
                sign = subtraction;
                break; 
            
            case '*':
                sign = multiplication;
                break;

            case '/':
                sign = division;
                break;
            default:
                printf("Invalid Input");
        }

        res = sign(a, b);

        printf("The value of %.2f and %.2f is %.2f", a, b, res);
    }
    else
    {
        printf("Invalid Input");
    }

    return 0;
}

