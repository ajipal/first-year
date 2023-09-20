#include <stdio.h>
#include <string.h>

int main()
{
    struct record
    {
        int id, salary;
        char name[100];
    }employee[100];

    int choice, num = 0;

    while (1)
    {
        printf("\nMenu:\n\n1. Add an employee\n2. Display employee details\n3. Calculate average salary\n4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        char a;

        if (choice == 1)
        {
            printf("\nEnter employee ID: ");
            scanf("%d", &employee[num].id);
            scanf("%c", &a);
            printf("Enter employee name: ");
            gets(employee[num].name);
            printf("Enter employee salary: ");
            scanf("%d", &employee[num].salary);
            num++;
        }
        if (choice == 2)
        {
            printf("\nEmployee Details:\n");

            for (int i = 0; i < num; i++)
            {
                printf("\nID: %d\n", employee[i].id);
                printf("Name: %s\n", employee[i].name);
                printf("Salary: %d\n", employee[i].salary);
            }
        }
        if (choice == 3)
        {
            int n = employee[0].salary;

            for (int i = 1; i < num; i++)
            {
                n += employee[i].salary;
            }

            int ave = n / num;

            printf("\nAverage salary: %d\n", ave);
        }
        if (choice == 4)
        {
            printf("Exiting the program...");
            return 1;
        }
    }
    
    return 0;
}