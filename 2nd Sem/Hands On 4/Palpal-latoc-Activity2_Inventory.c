#include <stdio.h>
#include <string.h>

int main()
{
    int  max, n, current = 0;

    printf("Enter the maximum number of products in the inventory: ");
    scanf("%d", &max);

    int quantity[max];
    char product[max][100];

    while (1)
    {
        printf("\nMenu:\n1. Add a new product\n2. Update product quantity\n3. Display inventory\n4. Exit\n");

        printf("\nEnter choice: ");
        scanf("%d", &n);
        printf("\n");
        
        if (n == 1)
        {
            if (current == max)
            {
                printf("inventory is full... \n");
                continue;
            }

            printf("Enter the name of the product: ");
            scanf("%s", &product[current]);
            printf("Enter the quantity: ");
            scanf("%d", &quantity[current]);
            current ++;
        }
        else if (n == 2)
        {
            char update[100];
            printf("Enter the name of the product to update: ");
            scanf("%s", &update);

            for (int j = 0; j < current; j++)
            {
                if (strcmp(update, product[j]) == 0)
                {
                    printf("Enter the new quantity: ");
                    scanf("%d", &quantity[j]);
                }
            }  
        }
        else if (n == 3)
        {
            printf("Current Inventory:\n");
            
            for (int j = 0; j < current; j++)
            {   
                printf("Product: %s, Quantity: %d\n", product[j], quantity[j]);
            }
            
        }
        else if (n == 4)
        {
            break;
        }
        else
        {
            printf("Invalid choice. Please try again\n");
        }
    }

    return 0;
}