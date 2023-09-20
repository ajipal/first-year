#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    char letter;
    int add;

    printf("Enter a string: ");
    gets(input);

    printf("Enter a specific character you want to count in the string: ");
    scanf("%c", &letter);

    for (int i = 0; i < strlen(input); i++)
    {
        if (letter == input[i])
        {
            add++;
        }
    }

    printf("the total number of %c is %d.", letter, add);

    return 0;
}