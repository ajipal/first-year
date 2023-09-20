#include <stdio.h>

int large(int arr[], int x)
{
  int large = arr[0];
  
  // compare each elements
  for (int i = 0; i < x; i++)            
  {
    //large holds the largest elements when being compared... it changes when arr holds the largest elements
    if (arr[i] > large)
    {
      large = arr[i];
    }
  }
  return large;
}

int main()
{
  int num;
  int arr[100];

  printf("Input the number of elements to be stored in the array: ");
  scanf("%d", &num);

  printf("Input %d elements in the array: \n", num);

  for (int i = 0; i < num; i++)
  {
    printf("element %d: ", i);
    scanf("%d", &arr[i]);
  }
  printf("The largest element in array is %d",large(arr, num));

  return 0;
}

