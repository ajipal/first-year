#include <stdio.h>
#include <string.h>

int main()
{
    char input[100], pan[100];

    printf("Enter a string: ");
    gets(input);

    strcpy(pan, input);
    
    for (int i = 0, n = strlen(input); i < n; i++)
    {
        for (int j = i+1, n = strlen(input); j < n; j++)
        {
            char temp = pan[i];
            pan[i] = pan[j];
            pan[j] = temp;
        }
    }

    if (strcmp(input, pan) == 0)
    {
        printf("total of %d\n", strlen(pan));
        printf("%s is a Palindrome", pan);
    }
    else
    {
        printf("total of %d\n", strlen(input));
        printf("%s is not a palindrome", input);
    }

    return 0;
}  
