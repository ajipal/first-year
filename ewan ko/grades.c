#include <stdio.h>

typedef struct {
    int paper[30];
    double ave;
} Students;

void calculate_ave(Students* g);

int main()
{
    Students grades;
    
    printf("Encode your grade: \n");
    
    for (int i = 0; i < 30; i++)
    {
        printf("student %d: ", (i + 1));
        scanf("%d", &grades.paper[i]);
    }
    
    calculate_ave(&grades);
    
    printf("Average grade of the class is %.2f", (grades.ave / 30));
    
    return 0;
}

void calculate_ave(Students* grades)
{
    for (int i = 0; i < 30; i++)
    {
        grades->ave += grades->paper[i];
    }
}