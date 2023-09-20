#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fpointer, *temp;
    char file[100], tempfile[100];

   printf("Input the file name to be opened: ");
   fgets(file, 100, stdin);
   file[strcspn(file, "\n")] = '\0';

    fpointer = fopen(file, "r");

    char new_line[100];
    printf("Input the content of the new line: ");
    fgets(new_line, sizeof(new_line), stdin);
    new_line[strcspn(new_line, "\n")] = '\0';
    
    int num_line, current_line = 1;
    printf("Input the line number you want to replace: ");
    scanf("%d", &num_line);
    getchar();

    strcpy(tempfile, "temp.txt");
    temp = fopen(tempfile, "w");

    if (temp == NULL)
    {
        fclose(fpointer);
        return 1;
    }

    char line[100];
    while (fgets(line,sizeof(line), fpointer) != NULL)
    {
        if(current_line == num_line)
        {
            fputs(new_line, temp);
            fputc('\n', temp);
        }
        else
        {
            fputs(line, temp);
        }

        current_line++;
    }

    fclose(fpointer);
    fclose(temp);

    remove(file);
    rename(tempfile, file);
    
    printf("The file has been updated successfully.\n");

    return 0;
}