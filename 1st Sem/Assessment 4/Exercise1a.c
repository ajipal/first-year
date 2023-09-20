#include <stdio.h>

int main()
{
    int start, end, step;

    printf("Please enter three integers(start,end,step).\n");

    printf("start: ");
    scanf("%d", &start);

    printf("end: ");
    scanf("%d", &end);

    printf("step: ");
    scanf("%d", &step);
 
    if(start<end && step>0)
    {
        while(start<end)
        {
            printf("%d\n", start);
            start+=step;
        }   
    }
    else
    {
        printf("Invalid Input");
    }
}