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
    
  // this copies the value from num1 to num2 and sets all those values to num 3 into 0
	for (i = 0; i < n; i++)
    {
		  num2[i] = num1[i];
		  num3[i] = 0;
    }

  /*
    this loop check if each elements of num1 is equal to num 2, then if there is similar element, it will be stored in num3 and the duplicate will be equal to value 2
  */ 
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

  /*
    This loop checks if the num3 has a value 2(which indicates in the duplicate loop 2) then if so, it will be printed
  */
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