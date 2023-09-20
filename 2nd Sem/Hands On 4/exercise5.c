#include <stdio.h>
#include <string.h>

int main()
{
    struct record
    {
        int id, age, marks[5];
        char name[100], grade[100];
    }student[100];

    int choice, num = 0;
    char a;

    while (1)
    {
        printf("\nMenu:\n\n1. Add a student\n2. Search for a student\n3. Display all students\n4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nEnter student ID: ");
            scanf("%d", &student[num].id);
            scanf("%c", &a);
            printf("Enter student name: ");
            gets(student[num].name);
            printf("Enter student age: ");
            scanf("%d", &student[num].age);
            scanf("%c", &a);
            printf("Enter the student grade: ");
            gets(student[num].grade);
            
            printf("\n\nEnter marks for 5 subjects:\n");

            for (int i = 0; i < 5; i++)
            {
                printf("Subject %d: ", i+1);
                scanf("%d", &student[num].marks[i]);
                scanf("%c", &a);
            }

            printf("\n\nStudent added successfully!\n\n");
            num++;
        }

        if (choice == 2)
        {
            int id;

            printf("\nEnter student ID to search: ");
            scanf("%d", &id);

            for (int i = 0; i < num; i++)
            {
                if (id == student[i].id)
                {
                    printf("\nStudent Details:\n");
                    printf("ID: %d\n", student[i].id);
                    printf("Name: %s\n", student[i].name);
                    printf("Age: %d\n", student[i].age);
                    printf("Grade: %s\n", student[i].grade);
                    printf("Marks: ");
                    for (int j = 0; j < 5; j++)
                    {
                        printf("%d ", student[i].marks[j]);
                    }
                    printf("\n");
                }
            }
        }

        if (choice == 3)
        {
            printf("\nStudent Details:\n");

            for (int i = 0; i < num; i++)
            {
                printf("ID: %d\n", student[i].id);
                printf("Name: %s\n", student[i].name);
                printf("Age: %d\n", student[i].age);
                printf("Grade: %s\n", student[i].grade);
                printf("Marks: ");
                
                for (int j = 0; j < 5; j++)
                {
                    printf("%d ", student[i].marks[j]);
                }
                printf("\n\n");
            }
        }

        if (choice == 4)
        {
            printf("Exiting the program...");
            return 1;
        }
    }

    return 0;
}