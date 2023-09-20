/*You are given a linked list of integers. Write a C program to find the middle element of the linked list. If the
list has an even number of elements, consider the second middle element as the result. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct node
    {
        int number;
        struct node* next;
    }*head, *current, *tail, *middle;

    int n;
    printf("Enter the maximum number of integers: ");
    scanf("%d", &n);

    head = current = tail = middle = NULL;
    for (int i = 0; i < n; i++)
    {
        current = (struct node*)malloc(sizeof(struct node));

        printf("enter an integer: ");
        scanf("%d", &current->number);
        
        current->next = NULL;

        if (i == 0)
        {
            head = tail = current;
        }
        else 
        {
            tail->next = current;
            tail = current;
        }
    }   

    middle = current = head;

    while (current != NULL && current->next != NULL)
    {
        middle = middle->next;
        current = current->next->next;
    }


    printf("The middle number is: %d", middle->number);
    

    current = head;
    while (current != NULL)
    {
        struct node *tmp = current;
        current = current->next;
        free(tmp);
    }
    return 0;
}