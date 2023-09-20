#include <stdio.h>

void intersecting_lines();
void parallel_lines();
void base();
void house();

int main()
{
    house();

    return 0;
}

void intersecting_lines()
{
    printf("     /\\   \n");
    printf("    /  \\   \n");
    printf("   /    \\   \n");
    printf("  /      \\   \n");
    printf(" /        \\   \n");
}

void parallel_lines()
{
    printf(" |        | \n");
    printf(" |        | \n");
    printf(" |        | \n");
}

void base()
{
    printf(" ---------- \n");
}

void house()
{
    intersecting_lines();
    base();
    parallel_lines();
    base();
}