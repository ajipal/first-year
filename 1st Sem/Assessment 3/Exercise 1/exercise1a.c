#include <stdio.h>

int main()
{
    double value;
    printf("Enter a number: ");
    scanf("%lf", &value);

    if (value <= 0) {
        printf("NEGATIVE\n");
    }
    if (value >= 0) {
        printf("POSITIVE");
    }
    return 0;
}