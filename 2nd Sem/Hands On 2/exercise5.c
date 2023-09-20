#include <stdio.h>
#include <ctype.h>

char checker(char);

int main()
{
    char letter;

    printf("Enter a character: ");
    scanf("%c", &letter);

    char res = checker(letter);

    if (res == 'v')
    {
        printf("The entered character is a vowel.");
    }
    else if (res == 'c')
    {
        printf("The entered character is a consonant.");
    }
    else
    {
        return 1;
    }
    return 0;
}

char checker(char l)
{
    if (isalpha(l))
    {
        if (l == 'a' || l == 'A' || l == 'e' || l == 'E'|| l == 'i' || l == 'I'|| l == 'o' || l == 'O'|| l == 'u' || l == 'U')
        {
            return 'v';
        }
        else
        {
            return 'c';
        }
    }
    else
    {
        printf("Invalid Input");
        return 1;
    }
}