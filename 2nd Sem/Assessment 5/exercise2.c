#include <stdio.h>
#include <string.h>

struct detail {
    char name[50], address_name[50], food[50];
    float ave_cost;
};

int main()
{
    struct detail restaurant;

    printf("Enter the name of the restaurant: ");
    gets(restaurant.name);
    printf("Enter the address of the restaurant: ");
    gets(restaurant.address_name);
    printf("Enter the type of food available: ");
    gets(restaurant.food);
    printf("Enter the average cost: ");
    scanf("%f", &restaurant.ave_cost);

    printf("\nDetails of the restaurant:\n");
    printf("Name:");
    puts(restaurant.name);
    printf("Address: ");
    puts(restaurant.address_name);
    printf("Type of food available: ");
    puts(restaurant.food);
    printf("Average cost: %.2fphp", restaurant.ave_cost);    

    return 0;
}