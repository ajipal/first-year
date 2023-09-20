#include <stdio.h>
#include <math.h>

int main()
{
    int day, weekday, weekend, hour_start, min_start;
    float bill, duration;

    printf("1 - Monday \n2 - Tuesday \n3 - Wednesday \n4 - Thursday \n5 - Friday \n6 - Saturday \n7 - Sunday\n");
    printf("Good day, Enter the day of the call was made(in numeric form): ");
    scanf("%d", &day);

    printf("Please enter the time the call was made (in 24 time format)\n");
    printf("hour: ");
    scanf("%d", &hour_start);
    printf("minute: ");
    scanf("%d", &min_start);

    printf("Enter the duration of the call(min.sec): ");
    scanf("%f", &duration);

    //days of a week
    if (day >= 1 && day <= 5)
    {
        if(day == 1)
        {
            printf("The call was made on Monday\n");
        }
        else if (day == 2)
        {
            printf("The call was made on Tuesday\n");
        }
        else if (day == 3)
        {
            printf("The call was made on Wednesday\n");
        }
        else if (day == 4)
        {
            printf("The call was made on Thursday\n");
        }
        else
        {
            printf("The call was made on Friday\n");
        }

        //Time started, duration, and bill
        if (hour_start >= 6 && hour_start <= 18)
        {
            printf("Time Started: %d:%d o'clock\n", hour_start,min_start);
            printf("Duration of time: %.0f minute\n", ceil(duration));
            bill = ceil(duration) * 2.50;
            printf("bill: %.2f pesos", bill);
        }
        else
        {
            printf("Time Started: %d:%d o'clock\n", hour_start,min_start);
            printf("Duration of time: %.0f minute\n", ceil(duration));
            bill = ceil(duration) * 2;
            printf("bill: %.2f pesos", bill);
        }
    }
    else if ((day >=6 && day <=7))
    {
       if (day == 6)
        {
            printf("The call was made on Saturday\n");
        }
        else
        {
            printf("The call was made on Sunday\n");
        }
        printf("Time Started: %d:%d o'clock\n", hour_start,min_start);
        printf("Duration of time: %.0f minute\n", ceil(duration));
        bill = ceil(duration) * 1.50;
        printf("bill: %.2f pesos", bill);
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}

/*
    #include <stdio.h>
#include <math.h>

int main()
{
   int days, rnd;
   float duration, hour;
   
   printf("Good day, This is Telephone company!\n");
   printf("To inquire your charges\n");
   printf("Please remember the following:\n");
   printf("\n");
   printf("1= Monday, 2=Tuesday... 7=Sunday\n");
   printf("24 hour format [e.g., 600= 6:00am 1400 = 1:00pm]\n");
   printf("Duration of time [min.sec]\n");
   printf("==================================\n");
   
    printf("Input day in numeric form: ");
    scanf("%d", &days);
    
    printf("Input time the call started: ");
    scanf("%f", &hour);
    
    printf("Input the duration of time: ");
    scanf("%f", &duration);
    
    rnd = ceil(duration);
    
    if (days >=1 && days <=5)
    {
        if(hour >= 600 && hour <= 1800)
        {
            printf("Bill: %.2f", rnd * 2.50);   //charge is 2.50
        }
        else
        {
            printf("Bill: %.2f", rnd * 2.00);   //charge is 2.00
        }
    }
    else if (days >= 6 && days <= 7)
    {
        printf("Bill: %.2f", rnd * 1.50);       //charge 1.50
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}
*/