// Online C compiler to run C program online
#include <stdio.h>

// struct combines the two variable that I need in calculating the cost in function item_cost
struct Item
{
    float cost;
    char name[100];
};

int room_size(int, int);

float item_cost(struct Item[], int);

int main() 
{
    
    int room, wid, len, sqr_meter, data;
    float total;
    
    printf("House Renovation\n");

    printf("How many room/s: ");
    scanf("%d", &room);
    
    printf("length: ");
    scanf("%d", &len);
    
    printf("width: ");
    scanf("%d", &wid);
    
    sqr_meter = room_size(len, wid);
    
    //I initialized items into 100 arrays
    struct Item items[100];
    
    printf("Enter number of items per room: ");
    scanf("%d", &data);

    //by using struct, the structure of for loop became clean since you only need to call the items[i].(variable)

    for (int i = 0; i < data; i++)
    {
        printf("item %d: ", i + 1);
        scanf("%s", &items[i].name);
        printf("cost: ");
        scanf("%f", &items[i].cost);
    }
    
    // you only put items in the actual parameter since it is the defined struct name
    total = item_cost(items, data);
    
    printf("=====================================\n");

    printf("Total of House Renovation: %.2f", total);
    
    return 0;
}


int room_size(int len, int wid)
{
    return len * wid;
}

float item_cost(struct Item items[], int data)
{
    // we initialized result to 0 so that it will not get an error
    float result = 0.0;
    
    for (int i = 0; i < data; i++)
    {
        result += items[i].cost;
    }
    
    return result;
}



/* #include <stdio.h>
#include <stdlib.h>

int* element(int);
int largest(int, int *);

int main()
{
    int n, num, *temp;
    
    printf("input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    
    temp = element(n);
    
    printf("The largest array is: %d", largest(n, temp));
    
    free(temp);

    return 0;
}

int* element(int x)
{
    int *res = malloc(sizeof(int) * x);
    
    for ( int i = 0; i < x; i++)
    {
        printf("element %d: ", i);
        scanf("%d", &res[i]);
    }
    
    return res;
}

int largest(int x, int *temp)
{
    int large = temp[0];
    
    for ( int i = 0; i < x; i++)
    {
        if (temp[i] > large)
        {
            large = temp[i];
        }
    }
    
    return large;
}
/*

*/












/*
    //Solution:
#include <stdio.h> 
  
int main() 
{ 
    int arr[] = {1, 2, 3, 1, 3, 6, 6, 6}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
  
    printf("The repeating elements are: \n"); 
    for (int i = 0; i < size; i++) { 
        for (int j = i + 1; j < size; j++) { 
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]); 
            }
        } 
    } 

    return 0; 
}
*/
























/*
#include <stdio.h>
#include <strings.h>

int main()
{
    char name[30];

    printf("What's your name? ");
    scanf("%s", &name);
    printf("Hello, %s", name);
}
*/

/*
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
            bill = duration * 2.50;
            printf("bill: %.2f pesos", bill);
        }
        else
        {
            printf("Time Started: %d:%d o'clock\n", hour_start,min_start);
            printf("Duration of time: %.0f minute\n", ceil(duration));
            bill = duration * 2;
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
            bill = duration * 1.50;
            printf("bill: %.2f pesos", bill);
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}

/*
int myFunction(char name[], int y)
{
    return name and y ;
}

int main() 
{
    printf("Your name is %s, So you are %d",  myFunction("Alfred", 2));

    return 0;
}
*/

/*
     int soldT = 92, totalT = 23, Percent;

    Percent = soldT/totalT;

    printf("The Percentage of Child Ticket Sold: %.2d"), Percent;

    return 0;
    */