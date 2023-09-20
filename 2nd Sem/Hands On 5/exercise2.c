#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    int num = 0;

    printf("Enter a string: ");
    gets(input);

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u')
        {
            num++;
        }
    }

    printf("Number of vowels: %d", num);
    
    return 0;
}