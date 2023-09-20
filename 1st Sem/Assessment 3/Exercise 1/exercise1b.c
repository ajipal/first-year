#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Enter first integer: ", n1);
    scanf("%d", &n1);
    printf("Enter second integer: ", n2);
    scanf("%d", &n2);

    if (n1 < n2) {
        printf("NUMBER1 IS SMALLER");
    }
    if (n1 > n2) {
        printf("NUMBER2 IS SMALLER");
    }
    if (n1 == n2) {
        printf("NUMBER1 AND NUMBER2 ARE EQUAL");
    }
    return 0;
}