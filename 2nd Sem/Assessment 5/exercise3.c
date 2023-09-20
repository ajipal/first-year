#include <stdio.h>
#include <string.h>

struct calendar{
    int numeric_form, num_days;
    char name[15];
};

int main()
{
    struct calendar month[12];
    int n;
    char a;

    printf("Enter the number of months: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the month in numeric form(1-12): ");
        scanf("%d", &month[i].numeric_form);
        scanf("%c", &a);
        printf("Enter the name of the month: ");
        gets(month[i].name);
        printf("Enter the number of days: ");
        scanf("%d", &month[i].num_days);
        scanf("%c", &a);
        printf("\n");
    }
    
    printf("Calendar:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d | %s | %d days\n", month[i].numeric_form, month[i].name, month[i].num_days);
    }
    
    return 0;
}