#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct node
    {
        char name[100];
        int score;
        struct node *next;
    }*student, *current, *head, *tail;

    int count = 0;
    int choice;
    char a[10];

    student = current = head = tail = NULL;

    while(1)
    {
        printf("Menu:\n1.Add a student\n2.Find the highest score\n3.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            current = (struct node*)malloc(sizeof(struct node));
            printf("\nEnter name: ");
            getchar();
            fgets(current->name, sizeof(current->name), stdin);
            current->name[strcspn(current->name, "\n")] = '\0';
            
            
            printf("Enter score: ");
            scanf("%d", &current->score);

            current->next = NULL;

            if (count == 0)
            {
                student = head = tail = current;
            }
            else
            {
                tail->next = current;
                tail = current;
            }

            count++;
            printf("\nStudent added successfully!\n\n");
        }
        else if(choice == 2)
        {
            student = head;
            struct node *highest = head->next;

            while (highest != NULL)
            {
                if (highest > student)
                {
                    struct node *tmp = student;
                    student = highest;
                }
                highest = highest->next;
            }

            printf("\nStudent Details:\n");
            printf("Name: %s\n", student->name);
            printf("Highest score: %d\n", student->score);

            printf("\n");
        }
        else if (choice == 3)
        {
            printf("Exiting the program...");

            current = head;

            while (current != NULL)
            {
                struct node *tmp = current;
                current = current->next;
                free(tmp);
            }
            return 1;
        }
        else
        {
            printf("Invalid Input.\n");
            continue;
        }
    }
    return 0;
}