#include <stdio.h>

int main() 
{
    int n, num[100], i, j, k, dup = 0;
    
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    
    //user's input of elements that is stored in the num[i]
    printf("Input %d elements in the array\n", n);
    
    for (i = 0; i < n; i++)
    {
        printf("element %d: ", i);
        scanf("%d", &num[i]);
    }

    /*
    The loop for comparing the indices to each other (num1[i] and num1[j]) puts conditionals that if i = j,
    then the duplicate will add up, 
    while num1[j] is equal to -1 to mark that the index place is already counted as duplicated. 
    In the if conditional, num1[i] will not be read anymore if it is equal to -1.
    */
    for (i = 0; i < n; i++)
    {
        dup=0;
        for (j = i+1; j < n; j++)
        {
            if (num[i] == num[j] && num[i] != -1)
            {
                dup++;
                num[j]=-1; //marked the duplicates index
            }
        }
        if (dup > 0)
        {
            k++;
        }
    }

    printf("Total number of duplicate elements found in the array is: ");
    printf("%d", k);
    return 0;
}