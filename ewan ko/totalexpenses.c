#include <stdio.h>

double expenses(int n, double* price, int* pieces);

int main() 
{
    char list[100][100];
    double price[100];
    int pieces[100], n;
    
    printf("input list: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        printf("List %d: \n", (i+1));
        printf("item: ");
        scanf("%s", list[i]);
        printf("price: ");
        scanf("%lf", &price[i]);
        printf("pieces: ");
        scanf("%d", &pieces[i]);
    }
    
    double totalexpenses = expenses(n, price, pieces);
    
    printf("=============================\n");
    printf("Total expenses: %.2lf\n", totalexpenses);
    
    return 0;
    
}

double expenses(int n, double* price, int* pieces)
{
    double total = 0;
    
    for (int i = 0; i < n; i++)
    {
        total += price[i] * pieces[i];
    }
    
    return total;
}









