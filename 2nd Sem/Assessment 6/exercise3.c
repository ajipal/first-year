#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node *next;
    }*head, *current, *tail;

    int n;

    printf("Input the number of nodes: ");
    scanf("%d", &n);

    head = NULL;

    for (int i = 0; i < n; i++)
    {
        current = (struct node*)malloc(sizeof(struct node));

        printf("Input data for node %d: ", i+1);
        scanf("%d", &current->data);
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
    }

    printf("============================\nData entered in the list are:\n");

    current = head;
    int count = 0;

    while (current != NULL)
    {
        printf("Data: %d\n", current->data);
        struct node *tmp = current;
        current = current->next;
        free(tmp);

        count++;
    }

    printf("\nTotal number of nodes: %d", count);

    return 0;
}   