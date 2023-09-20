#include <stdio.h>

int main()
{
    float m = 300;
    float fx = 300.600006;
    char cht = 'z';
    float *pm;
    float *pfx;
    char *pcht;


    printf("Pointer: Demonstrate the use of & and * operator:\n");
    printf("--------------------------\n");
    printf("m = %.0f\n", m);
    printf("fx = %f\n", fx);
    printf("cht = %c\n", cht);

    printf("\nUsing & operator:\n");
    printf("--------------------------\n");
    printf("address of m = %x\n", &m);
    printf("address of fx = %x\n", &fx);
    printf("address of cht = %x\n", &cht);

    pm = &m;
    pfx = &fx;
    pcht = &cht;

    printf("\nUsing & and * operator\n");
    printf("--------------------------\n");
    printf("value at address of m = %.0f\n", *&m);
    printf("value at address of fx = %f\n", *&fx);
    printf("value at address of cht = %c\n", *&cht);

    printf("\nUsing only pointer variable\n");
    printf("--------------------------\n");
    printf("address of m = %x\n", pm);
    printf("address of fx = %x\n", pfx);
    printf("address of cht = %x\n", pcht);

    printf("\nUsing only pointer operator\n");
    printf("--------------------------\n");
    printf("value at address of m = %.0f\n", *pm);
    printf("value at address of fx = %f\n", *pfx);
    printf("value at address of cht = %c\n", *pcht);

    return 0;
}