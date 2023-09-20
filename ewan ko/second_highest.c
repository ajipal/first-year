#include <stdio.h>

int main()
{
    int n;
    
    printf("enter the number of elements: ");
    scanf("%d", &n);
    
    int  num[n];
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(num[j] > num[i])
            {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    
    printf("The largest element is %d\n", num[0]);
    printf("The second largest element is %d", num[1]);
    
    return 0;
}
