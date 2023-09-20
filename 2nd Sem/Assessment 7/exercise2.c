#include <stdio.h>

int main()
{
    FILE *sentence;
    char file[100], text[100];

    printf("Input the file name to be opened: ");
    gets(file);

    sentence = fopen(file, "r");

    printf("\nThe content of the file %s is:\n", file);
    
    fgets(text, 100, sentence);
    printf("%s", text);

    fclose(sentence);

    return  0;
}