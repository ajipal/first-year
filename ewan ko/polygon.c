// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
#define PI 3.14159

typedef struct
{
    int sides;
    int length;
    int area;
}Polygon;

void Area(Polygon *a);

int main() 
{
    
    Polygon area;
    
    printf("Number of sides: ");
    scanf("%i", &area.sides);
    printf("length: ");
    scanf("%i", &area.length);
    
    Area(&area);
    
    printf("Area: %i", area.area);
    
    return 0;
}

void Area(Polygon *a)
{
    float numerator = a->sides * pow(a->length, 2);
    float denominator = 4 * tan(PI / a->sides);
    
    int area = round(numerator / denominator);

    a->area = area;
}