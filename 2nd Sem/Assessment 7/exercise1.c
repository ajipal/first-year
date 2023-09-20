#include <stdio.h>

int main()
{
    FILE *sentence;
    sentence = fopen("test.txt", "w");

    char text[100];

    printf("Enter a sentence for the file: ");
    fgets(text, 100, stdin);

    fprintf(sentence, "%s", text);
    
    printf("The file test.txt created successfully...!! ");

    fclose(sentence);
    
    return 0;
}