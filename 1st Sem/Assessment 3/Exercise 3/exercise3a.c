#include <stdio.h>

int main()
{
    int week;
    printf("1 - Monday \n2 - Tuesday \n3 - Wednesday \n4 - Thursday \n5 - Friday \n6 - Saturday \n7 - Sunday\n");
    printf("Enter day in numeric form: ");
    scanf("%d", &week);

    if (week == 1)
    {
        printf("That day is Monday \nI rest on this day");
    }
    else if (week == 2)
    {
        printf("That day is Tuesday \nI have ITC subject on this day");
    }
     else if (week == 3)
    {
        printf("That day is Wednesday \nI have Comprog subject on this day");
    }
     else if (week == 4)
    {
        printf("That day is Thursday \nI rest on this day");
    }
    else if (week == 5)
    {
        printf("That day is Friday \nI have ITC subject on this day");
    }
    else if (week == 6)
    {
        printf("That day is Saturday \nI have Filipino subject on this day");
    }
    else if (week == 7)
    {
        printf("That day is Sunday \nI rest on this day");
    }
    else 
    {
        printf("INVALID INPUT");
    }
    return 0;
}