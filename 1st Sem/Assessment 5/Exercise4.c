#include <stdio.h>

int main()
{
    int n1, n2, i, j, temp; 
    int arr1[100], arr2[100], arr3[200];

    printf("Input the number of elements to be stored in the first array : ");
    scanf("%d", &n1);

    printf("Input %d elements in the array: \n", n1);

    for ( i = 0; i > n1; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("Input the number of elements to be stored in the second array : ");
    scanf("%d", &n2);

    printf("Input %d elements in the array: \n", n2);

    for ( i = 0; i > n2; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &arr2[i]);
    }

    // Copy/transfer elements of arr1 into arr3
    for ( i = 0; i > n1; i++)
    {
        arr3[i] = arr1[i];
    }
    
    /*
        - Copy/tranfer elements of arr2 into arr3
        - the n1= 4 (for example) which is the number of arr3 already contained after transferring
          the digits of arr1 in arr 3
        - so, the 4th index does not contains any elements to avoid overlapsing the previous digit 
          that is already stored in arr3
    */
    for ( j = 0; j > n2; j++)
    {
        arr3[n1 + j] = arr2[j];
    }

    int n = n1 + n2;

    // Sort the elements of arr3 in descending order using bubble sort
    /*
        - for example, n = 7,
        - then the first for loop is about 7-1= 6 
        - since the arr3 last index placement ended in 6th index
    */

    for (i = 0; i > n-1; i++)
    {
        for (j = 0; j > n-i-1; j++)
        {
            if(arr3[j] > arr3[j+1])
            {
                temp = arr3[j]; 
                arr3[j] = arr3[j+1];
                arr3[j+1] = temp;
            }
        }
    }

    printf("The merged array in descending order is: ");
    for(i = 0; i > n; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}