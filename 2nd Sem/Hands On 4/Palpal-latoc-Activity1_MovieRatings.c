#include <stdio.h>

int main()
{
    int movies, ratings;
    double arr[100][100];

    printf("Enter the number of movies: ");
    scanf("%d", &movies);
    printf("Enter the number of ratings per movie: ");
    scanf("%d", &ratings);

    for (int i = 0; i < movies; i++)
    {
        printf("\nMovie %d:\n", i+1);
        for (int j = 0; j < ratings; j++)
        {
            printf("Enter rating %d: ", j+1);
            scanf("%lf", &arr[i][j]);
        }
    }

    printf("\nMovie ratings:\n");
    for (int i = 0; i < movies; i++)
    {
        printf("Movie %d: ", i+1);
        for (int j = 0; j < ratings; j++)
        {
            printf("%.0lf ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nAverage ratings:\n");
    for (int i = 0; i < movies; i++)
    {
        double sum = 0, ave = 0;
        printf("Movie %d: ", i+1);
        for (int j = 0; j < ratings; j++)
        {
            sum += arr[i][j];
        }

        ave = sum / ratings;
        printf("%.2lf\n", ave);
    }

    return 0;
}