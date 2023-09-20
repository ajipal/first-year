#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char sentence[100];
    int alpha = 0, digit = 0, special_char = 0;
    printf("Input the string: ");
    gets(sentence);

    for (int i = 0, n = strlen(sentence); i < n; i++)
    {
        if (isalpha(sentence[i]))
        {
            alpha++;
        }
        else if(isdigit(sentence[i]))
        {
            digit++;
        }
        else
        {
            special_char++;
        }
    }

    printf("Number of Alphabets in the string is: %d\n", alpha);
    printf("Number of Digits in the string is: %d\n", digit);
    printf("Number of Special characters in the string is: %d", special_char);

    return 0;
}