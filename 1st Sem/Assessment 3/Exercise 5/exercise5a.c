#include <stdio.h>

int main()
{
    int years;
    double salary, total, bonus;

    printf("Enter the number of years of service: ");
    scanf("%d", &years);
    
    printf("Enter salary: ");
    scanf("%lf", &salary);

    switch (years)
    {
    case 0:
        bonus= salary * 0.20;
        printf("Bonus: %.2lf", bonus);
        break;

    case 1:
        bonus= salary * 0.20;
        printf("Bonus: %.2lf", bonus);
        break;

    case 2:
        bonus= salary * 0.20;
        printf("Bonus: %.2lf", bonus);
        break;

    case 3:
        bonus= salary * 0.20;
        printf("Bonus: %.2lf", bonus);
        break;

    case 4:
        bonus= salary * 0.20;
        printf("Bonus: %.2lf", bonus);
        break;

    case 5:
        bonus= salary * 0.20;
        printf("Bonus: %.2lf", bonus);
        break;

    case 6:
        bonus= salary * 0.25;
        printf("Bonus: %.2lf", bonus);
        break;

    case 7:
        bonus= salary * 0.25;
        printf("Bonus: %.2lf", bonus);
        break;
    
    case 8:
        bonus= salary * 0.25;
        printf("Bonus: %.2lf", bonus);
        break;

    case 9:
        bonus= salary * 0.25;
        printf("Bonus: %.2lf", bonus);
        break;

    case 10:
        bonus= salary * 0.25;
        printf("Bonus: %.2lf", bonus);
        break;

    case 11:
        bonus= salary * 0.30;
        printf("Bonus: %.2lf", bonus);
        break;

    case 12:
        bonus= salary * 0.30;
        printf("Bonus: %.2lf", bonus);
        break;

    case 13:
        bonus= salary * 0.30;
        printf("Bonus: %.2lf", bonus);
        break;
    
    case 14:
        bonus= salary * 0.30;
        printf("Bonus: %.2lf", bonus);
        break;

    case 15:
        bonus= salary * 0.30;
        printf("Bonus: %.2lf", bonus);
        break;

    case 16:
        bonus= salary * 0.35;
        printf("Bonus: %.2lf", bonus);
        break;
        
    case 17:
        bonus= salary * 0.35;
        printf("Bonus: %.2lf", bonus);
        break;
    
    case 18:
        bonus= salary * 0.35;
        printf("Bonus: %.2lf", bonus);
        break;

    case 19:
        bonus= salary * 0.35;
        printf("Bonus: %.2lf", bonus);
        break;

    case 20:
        bonus= salary * 0.35;
        printf("Bonus: %.2lf", bonus);
        break;

    default:
        bonus= salary * 0.50;
        printf("Bonus: %.2lf", bonus);
    }
}