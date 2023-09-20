#include <stdio.h>

int main()
{
    float PartTime_Salary, HourlyRate, HoursWorked;

    //Enter Hourly Rate
    printf("Enter Hourly Rate: ");
    scanf("%f", &HourlyRate);

    //Enter the number of hours worked
    printf("Enter the number of hours worked: ");
    scanf("%f", &HoursWorked);

    //computation to get the Salary of a part time worker
    PartTime_Salary = HourlyRate*HoursWorked;
    printf("Part time worker's salary is %.2f", PartTime_Salary);

    return 0;
}