#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *fpointer;
    char file[100], text[100];

    printf("Input the file name to be opened: ");
    gets(file);

    fpointer = fopen(file, "r");

    printf("\nThe content of the file %s is:\n", file);

    int letter = 0, words = 0, inside_word = 0;

    while (!feof(fpointer))
    {
        fgets(text, sizeof(text), fpointer);
        text[strcspn(text, "\n")] = '\0';
        puts(text);

        for (int i = 0, n = strlen(text); i < n; i++)
        {
            if (isalnum(text[i]))
            {
                letter++;
                inside_word = 1;
            }
            else
            {   
                words++;
                inside_word = 0;
            }
        }
        if (inside_word)
        {
            words++;
            inside_word = 0;
        }
    }  
    
    printf("The number of words in the file %s are: %d\n", file, words);
    printf("The number of characters in the file %s are: %d", file, letter);

    fclose(fpointer);

    return 0;
}