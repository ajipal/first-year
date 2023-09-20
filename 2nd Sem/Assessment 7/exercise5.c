#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char file_name[100];

    printf("Input the file name to be opened: ");
    fgets(file_name, sizeof(file_name), stdin);
    file_name[strcspn(file_name, "\n")] = '\0';


    file = fopen(file_name, "a");

    int num_lines;
    printf("Input the number of lines to be written: ");
    scanf("%d", &num_lines);
    getchar();

    char written_lines[100], current_lines[100];

    printf("The lines are:\n");

    for (int i = 0; i < num_lines; i++)
    {
        fgets(written_lines, sizeof(written_lines), stdin);
        written_lines[strcspn(written_lines, "\n")] = '\0';
        fputc('\n', file);
        fputs(written_lines, file);
    }

    fclose(file);

    file = fopen(file_name, "r");

    printf("\nThe content of the file %s is:\n", file);

    while(fgets(current_lines, sizeof(current_lines), file) != NULL)
    {
        printf("%s", current_lines);
    }

    fclose(file);

    return 0;
}