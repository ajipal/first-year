#include <stdio.h>

int sorting(int ,int *);


int main()
{
    int num[100];
    int n;

    printf("Input the number of elements to store in the array:");
    scanf("%d", &n);

    printf("Input %d number of th elements in the array:\n", n);
    
    for (int i = 0; i < n; i++)
    {
        printf("element - %d: ", (i + 1));
        scanf("%d", &num[i]);
    }

    sorting(n, num);

    printf("========================================\n");
    printf("The elements in the array after sorting:\n");

    for (int i = 0; i < n; i++)
    {
        printf("element - %d: %d\n", (i + 1), *(num + i));
    }

    return 0;
}

int sorting(int n, int *num)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(num + j) < *(num + i))
            {
                int temp = *(num + j);
                *(num + j) = *(num + i);
                *(num + i) = temp;
            }
        }
    }
}