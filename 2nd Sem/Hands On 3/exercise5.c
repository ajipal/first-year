#include <stdio.h>

int average(int *);

int main()
{
    int data[10];
    
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("element %d: ", i+1);
        scanf("%d", &data[i]);
    }
    
    int res = average(data);
    
    printf("Average: %d", res);
}

int average(int *arr)
{
    int res = 0;
    for (int i = 0; i < 10; i++)
    {
        res += *arr;
        arr++;
    }
    
    return res / 10;
}