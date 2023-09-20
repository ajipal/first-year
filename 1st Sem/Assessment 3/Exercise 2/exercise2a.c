#include <stdio.h>

int main()
{
    int week;
    printf("1 - Monday \n2 - Tuesday \n3 - Wednesday \n4 - Thursday \n5 - Friday \n6 - Saturday \n7 - Sunday\n");
    printf("Enter day in numeric form: ");
    scanf("%d", &week);

    if (week >= 1 && week <=5 )
    {
        printf("WEEKDAY"); 
    }
    else
    {
        printf("WEEKEND"); 
    }
    return 0;
}