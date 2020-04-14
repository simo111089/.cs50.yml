#include <cs50.h>
#include <stdio.h>

int n, x, y, i;
int main(void)
{
    do //ask for number
    {
        printf("Welcome to mario, please enter a number between 1 and 8\n");
        n = get_int("height:");
    }
    while ((n < 1) || (n > 8));
    for (x = 1; x <= n ; x++)
    {
        for (y = n - x; y > 0 ; y--) //create spaces
        {
            printf(" ");
        }
        for (i = 1; i <= x ; i++) //create blocks
        {
            printf("#");
        }
        printf("  ");   
        for (i = 1; i <= x ; i++)
        {
            printf("#");
        }
        printf("\n");   
    }

}
