/*Write a C program to split a linked list into two separate lists, with the first list containing odd elements
and the second list containing even elements. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int number;
        struct node *next;
    }*head, *current, *tail, *even, *odd, *even_head, *even_tail, *odd_head, *odd_tail;

    int n;
    printf("Enter the maximum number of integers: ");
    scanf("%d", &n);

    head = current = tail = even = odd = even_head = even_tail = odd_head = odd_tail = NULL;

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

    current = head;

    while (current != NULL)
    {
        if (current->number % 2 == 0)
        {
            if (even_head == NULL)
            {
                even_head = even_tail = current;
            }
            else
            {
                even_tail->next = current;
                even_tail = current;
            }
        }
        else
        {
            if (odd_head == NULL)
            {
                odd_head = odd_tail = current;
            }
            else
            {
                odd_tail->next = current;
                odd_tail = current;
            }
        }
        current = current->next;
    }

    even_tail->next = odd_tail->next = NULL;

    printf("\nEven elements:\n");

    current = even_head;

    while (current != NULL)
    {
        printf("%d ", current->number);
        current = current->next;
    }
    
    printf("\nOdd elements:\n");

    current = odd_head;

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