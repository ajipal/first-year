#include <stdio.h>
#include <stdlib.h>

int Work_Hour(int);

int main()
{
    int employee;
    
    printf("Enter the number of employee/s: ");
    scanf("%d", &employee);
    
    printf("Enter the hours worked and hourly pay rates of %d employees.\n", employee);
    
    Work_Hour(employee);
    
    return 0;
}

int Work_Hour(int x)
{
    // the x pertains about the no of employees
    float worked[x], pay[x];
    float gross_pay[x];
    
    /*
        - this loop ask for the hour and pay rate
        - it is plus + 1 since we only need to change the value of the displayed i and not the process
    */ 
    for(int i= 0; i < x; i++)
    {
        printf("Hourly worked by employee #%d: ", i+1);
        scanf("%f", &worked[i]);
        printf("Hourly pay rate for employee #%d: ", i+1);
        scanf("%f", &pay[i]);
    }
    
    /*
        -after that loop, another loop wherein the work times pay is stored in another array which is the gross_pay
        - since i is set to 0, it will only check the value in the 0 place as i increase
    */
    for (int i=0; i < x; i++)
    {
        gross_pay[i]= worked[i]*pay[i];
    }

    printf("==========================================================");
    printf("\nHere is the gross pay for each employee:\n");
    
    /*
        -This loop is where we output the value of each employee
        - since i is set to 0, it will firstly output the value in 0 place which is for the employee 1
        - we only + 1 in the printf since we only need it to display the no 1 for employee #1 since i is already set to 0
    */
    for( int i= 0; i < x; i++)
    {
        printf("Employee #%d: $%.2f\n", i+1, gross_pay[i]);
    }
    
    return *gross_pay;
}

