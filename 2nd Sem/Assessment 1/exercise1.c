#include <stdio.h>

void print_h();
void print_i();
void print_m();
void print_o();
 

int main(void)
{
    print_h();
    print_i();
    printf("\n\n\n");
    print_m();
    print_o();
    print_m();  
    return (0); 
}

void print_i()
{
    printf("=========\n");
    printf("    ||   \n");
    printf("    ||   \n");
    printf("    ||   \n");
    printf("    ||   \n");
    printf("    ||   \n");
    printf("=========\n");
}

void print_h()
{
    printf("||     ||\n");
    printf("||     ||\n");
    printf("||     ||\n");
    printf("||=====||\n");
    printf("||     ||\n");
    printf("||     ||\n");
    printf("||     ||\n");
}

void print_m()
{
    printf("||\\\\           //||\n");
    printf("|| \\\\        //  ||\n");
    printf("||   \\\\     //   ||\n");
    printf("||      \\\\ //    ||\n");
    printf("||               ||\n");
    printf("||               ||\n");
    printf("||               ||\n");
    
}

void print_o()
{
    printf("//=====\\\\\n");
    printf("||     ||\n");
    printf("||     ||\n");
    printf("||     ||\n");
    printf("||     ||\n");
    printf("||     ||\n");
    printf("\\\\=====//\n");
}