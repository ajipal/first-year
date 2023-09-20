#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node *next;
    }*current, *head, *tail;

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
        
        //to assign the head and tail to the value of current
        //to let head holds the value of the first current
        if (head == NULL)
        {
            head = tail = current;
        }
        //to assign the tail to the value of current
        else
        {
            tail->next = current;
            tail = current;
        }

    }

    printf("========================\nData entered in the list:\n");

    current = head;

    while(current != NULL)
    {
        printf("Data = %d\n", current->data);
        struct node *tmp = current;
        current = current->next;
        free(tmp);
    }

    return 0;
}