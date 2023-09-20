#include <stdio.h>

int main ()
{
    int length, witdh, Area_Rectangle;

    //length
    printf("Enter length: ");
    scanf("%d", &length);

    //witdh
    printf("Enter witdth: ");
    scanf("%d", &witdh);
    
    //computation
    Area_Rectangle= length*witdh;
    printf("Area of a rectangle is %d", Area_Rectangle);
    
    return 0;
}