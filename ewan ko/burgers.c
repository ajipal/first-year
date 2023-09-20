#include <math.h>
#include <stdio.h>

typedef struct
{
    int hamburgers;
    int cheeseburgers;
    int fries;
}Customers;

float Total(Customers *c);


int main(void)
{
    Customers c;
    
    printf("Menu:\n");
    printf("Hamburgers = $2.50\nCheeseburgers = $3.00\nFries = $1.50\n");
    printf("======================\n");

    printf("How many...\n");
    
    printf("Hamburgers: ");
    scanf("%i", &c.hamburgers);
    
    printf("Cheeseburgers: ");
    scanf("%i", &c.cheeseburgers);
    
    printf("Fries: ");
    scanf("%i", &c.fries);
    
    float total = Total(&c);
    
    printf("======================\n");
    printf("Total: $%.2f", total);

    return 0;
}

float Total(Customers *c)
{
    return (c->cheeseburgers * 3.00) + (c->hamburgers * 2.50) + (c->fries * 1.50);
}
