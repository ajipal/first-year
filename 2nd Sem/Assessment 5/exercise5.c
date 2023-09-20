#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[100];

    printf("Input the string: ");
    gets(sentence);

    for (int i = 0, n = strlen(sentence); i < n; i++)
    {
        for (int j = i+1, n = strlen(sentence); j < n; j++)
        {
            if (sentence[j] < sentence[i])
            {
                char temp = sentence[i];
                sentence[i] = sentence[j];
                sentence[j] = temp;
            }
        }
    }

    printf("After sorting the string appears like: ");
    puts(sentence);
}