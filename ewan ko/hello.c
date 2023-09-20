#include <stdio.h>

int main()
{
    int n = 0, k = 0, duplicate = 1;
    int i, j;
    int num1[100], num2[100], num3[100];

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array: \n", n);

    for (i = 0; i < n; i++)
      {
        printf("element - %d: ", i);
        scanf("%d", &num1[i]);
      }
    
		for (i = 0; i < n; i++)
      {
		    num2[i] = num1[i];
		    num3[i] = 0;
      }

	  for (i = 0; i < n; i++)
      {
		    for (j = 0; j < n; j++)
			    {
				    if (num1[i] == num2[j])
				      {
				        num3[j] = duplicate;
				        duplicate++;
				      }
			    }
			    duplicate = 1;
      }		

   for (i = 0; i < n; i++)
    {
      if(num3[i] == 2)
      { 
        k++;
      }  
    }
      printf("The total number of duplicate elements found in the array is: %d \n", k);

    return 0;
}