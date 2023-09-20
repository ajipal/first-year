/*You have a linked list of integers. Write a C program to remove all duplicate elements from the list, so that
each element appears only once.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct node
    {
        int number;
        struct node* next;
    }*head, *current, *tail, *duplicate;

    int n;

    printf("Enter the maximum number of integers: ");
    scanf("%d", &n);
    
    head = current = tail = duplicate = NULL;

    for (int i = 0; i < n; i++)
    {
        current = (struct node*)malloc(sizeof(struct node));

        printf("enter an integer: ");
        scanf("%d", &current->number);

        current->next = NULL;

        if (i == 0)
        {
            head = tail = duplicate = current;
        }
        else{
            tail->next = current;
            tail = current;
        }
    }

    printf("\nDisplay all integers:\n");
    current = head;

    while (current != NULL)
    {
        printf("%d ", current->number);
        current = current->next;
    }

    printf("\nWithout duplicate:\n");

    current = head;

    while (current != NULL && current->next != NULL)
    {
        duplicate  = current;

        while (duplicate->next != NULL)
        {
            if (duplicate->next->number == current->number)
            {
                struct node *tmp = duplicate->next;
                duplicate->next = duplicate->next->next;
                free(tmp);
            }
            else
            {
                duplicate = duplicate->next;
            }
        }
        current = current->next;
    }

    current = head;
    while (current != NULL)
    {
        printf("%d ", current->number);
        current = current->next;
    }

    current = head;

    while (current != NULL)
    {
        struct node *tmp = current;
        current = current->next;
        free(tmp);
    }
    return 0;
}
