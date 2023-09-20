#include <stdio.h>

void drawParallel();
void drawBase();
void drawRectangle();

int main()
{
    drawRectangle();

    return 0;
}

void drawParallel()
{
    printf("|             | \n");
    printf("|             | \n");
    printf("|             | \n");
}

void drawBase()
{
    printf("---------------\n");
}

void drawRectangle()
{
    drawBase();
    drawParallel();
    drawBase();
}