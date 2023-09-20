#include <stdio.h>

int main()
{
    double n, m, sum, ave, grade[100][100];

    printf("Enter the number of students: ");
    scanf("%lf", &n);
    printf("Enter the number of subjects: ");
    scanf("%lf", &m);

    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i+1);

        for (int j = 0; j < m; j++)
        {
            printf("Enter the grade for subject %d: ", j+1);
            scanf("%lf", &grade[i][j]);
        }
    }

    printf("\nStudent grades:\n");

    for (int i = 0; i < n; i++)
    {
        printf("Student %d: ", i+1);

        for (int j = 0; j < m; j++)
        {
            printf("%.0lf ", grade[i][j]);
        }
        printf("\n");
    }

    //average
    printf("\nAverage grades:\n");

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        ave = 0;

        printf("Student %d: ", i+1);

        for (int j = 0; j < m; j++)
        {
            sum += grade[i][j];
        }

        ave = sum / m;

        printf("%.2lf", ave);
        printf("\n");
    }

    return 0;
}