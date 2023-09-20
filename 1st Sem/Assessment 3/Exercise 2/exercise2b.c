#include <stdio.h>

int main()
{
    char letter;

    printf("Enter a letter: ");
    scanf("%c", &letter);

    if (letter >= 'a' && letter <= 'z')
    {
        printf("LOWER CASE");
    }
    else
    {
        printf("UPPER CASE");
    }

    return 0;
}