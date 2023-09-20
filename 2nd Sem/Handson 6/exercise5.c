#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct node
    {
        int roll_num, age;
        char name[100];
        double GPA;
        struct node *next;
    }*student, *current, *head, *tail;

    int choice;
    char a[10];

    head = current = student = tail = NULL;

    while(1)
    {
        printf("Student Enrollment System:\n1. Add a new student\n2. Display enrolled students\n3. Search for a student by roll number\n4. Exit\n\nEnter your choice: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 1)
        {   
            current = (struct node*)malloc(sizeof(struct node));

            printf("\nEnter Roll Number: ");
            scanf("%d", &current->roll_num);
            getchar();

            printf("Enter Name: ");
            fgets(current->name, sizeof(current->name), stdin);
            current->name[strcspn(current->name, "\n")] = '\0';

            printf("Enter age: ");
            scanf("%d", &current->age);
            getchar();
            
            printf("Enter GPA: ");
            scanf("%lf", &current->GPA);
            getchar();

            current->next = NULL;

            if (head == NULL)
            {
                head = tail = current;
            }
            else
            {
                tail->next = current;
                tail = current;
            }

            printf("\n\nStudent added successfully!\n\n");
        }
        else if (choice == 2)
        {
            printf("Enrolled Students:\n");
            current = head;
            while (current != NULL)
            {
                printf("Roll Number: %d | Name: %s | Age: %d | GPA: %.1lf\n", current->roll_num, current->name, current->age, current->GPA);

                current = current->next;
            }
            printf("\n");
        }
        else if (choice == 3)
        {
            int roll;
            printf("Enter Roll Number to Search: ");
            scanf("%d", &roll);
            current = head;

            while (current != NULL)
            {
                if (roll == current->roll_num)
                {
                    printf("Roll Number: %d | Name: %s | Age: %d | GPA: %.1lf\n", current->roll_num, current->name, current->age, current->GPA);
                    break;
                }
                current = current->next;
            }
            if (current == NULL)
            {
                printf("\nStudent Not Found.\n");
            }
            
            printf("\n");
        }
        else if (choice == 4)
        {
            printf("Thank you for using the Student Enrollment System!\n");
            current = head;
            while (current != NULL)
            {
                struct node *tmp = current;
                current = current->next;
                free(tmp);
            }

            head = tail = NULL;
            return 1;
        }
        else
        {
            printf("\nInvalid input.\n");
        }
    }
    return 0;
}