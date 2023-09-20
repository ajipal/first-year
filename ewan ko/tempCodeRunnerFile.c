// Online C compiler to run C program online
#include <stdio.h>

void cal_mn(float *temp);
float cal_yr(float *temp);

int main() {
    
    float temperature[12];
    
    printf("Input the temperature of each month: ");
    
    for (int i = 0; i < 12; i++)
    {
        if (i == 0)
        {
            printf("January: ");
            scanf("%f", &temperature[i]);
        }
        else if (i == 1)
        {
            printf("February: ");
            scanf("%f", &temperature[i]);
        }    
        else if (i == 2)
        {
            printf("March: ");
            scanf("%f", &temperature[i]);
        } 
        else if (i == 3)
        {
            printf("April: ");
            scanf("%f", &temperature[i]);
        }
        else if (i == 4)
        {
            printf("May: ");
            scanf("%f", &temperature[i]);
        } 
        else if (i == 5)
        {
            printf("June: ");
            scanf("%f", &temperature[i]);
        }
        else if (i == 6)
        {
            printf("July: ");
            scanf("%f", &temperature[i]);
        }
        else if (i == 7)
        {
            printf("August: ");
            scanf("%f", temperature[i]);
        }
        else if (i == 8)
        {
            printf("September: ");
            scanf("%f", &temperature[i]);
        }
        else if (i == 9)
        {
            printf("October: ");
            scanf("%f", &temperature[i]);
        }
        else if (i == 10)
        {
            printf("November: ");
            scanf("%f", &temperature[i]);
        }
        else 
        {
            printf("December: ");
            scanf("%f", &temperature[i]);
        }
    }
    
    printf("==========================\n");
    
    printf("Average temperature per month\n");
    float mn = cal_mn(temperature);
    
    printf("Average temperature for the entire year\n");
    float res = cal_yr(&temperature);
    printf("Overall average temperature: %.2f", res);
    
    return 0;
}

float cal_yr(float temp)
{
    float res = 0;
    
    for (int i = 0; i < 12; i++)
    {
        res += temp[i];
    }
        
    return (res / 12);
}

void cal_mn(float *temp)
{
    for (int i = 0; i < 12; i++)
    {
        if (i == 0)
        {
            printf("January: %.2f", temp[i] / 12);
        }
        else if (i == 1)
        {
            printf("February: %.2f", temp[i] / 12);
        }    
        else if (i == 2)
        {
            printf("March: %.2f", temp[i] / 12);
        } 
        else if (i == 3)
        {
            printf("April: %.2f", temp[i] / 12);
        }
        else if (i == 4)
        {
            printf("May: %.2f", temp[i] / 12);
        } 
        else if (i == 5)
        {
            printf("June: %.2f", temp[i] / 12);
        }
        else if (i == 6)
        {
            printf("July: %.2f", temp[i] / 12);
        }
        else if (i == 7)
        {
            printf("August: %.2f", temp[i] / 12);
        }
        else if (i == 8)
        {
            printf("September: %.2f", temp[i] / 12);
        }
        else if (i == 9)
        {
            printf("October: %.2f", temp[i] / 12);
        }
        else if (i == 10)
        {
            printf("November: %.2f", temp[i] / 12);
        }
        else 
        {
            printf("December: %.2f", temp[i] / 12);
        }
    }
}
