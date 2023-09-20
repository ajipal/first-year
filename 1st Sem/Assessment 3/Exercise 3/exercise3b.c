#include <stdio.h>

int main()
{
    int num_textmsg;
    float charge;

    printf("Please enter the number of text messages: ");
    scanf("%d", &num_textmsg);

    if (num_textmsg >= 0 && num_textmsg <= 200)
    {
        printf("The charge is zero", num_textmsg);
    }
    else if (num_textmsg > 200)
    {
        charge= (num_textmsg - 200) * 0.5;
        printf("Your charge is %.2f", charge);
    }
    else
    {
        printf("Invalid Input");
    }
    //ayaw gumana nung invalid input kung letter input
    return 0;
}