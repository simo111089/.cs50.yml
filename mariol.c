#include <cs50.h>
#include <stdio.h>

int n; //value entered by user
int j; //create raws and column
int h; //create empty spaces
int x; //create #
int main(void)
{ 
    do
    {
        printf("Welcome to mario, please enter a number between 1 and 8\n");
        n = get_int("height:");
    }
    while ((n < 1) || (n > 8));

    for (j = 1 ; j <= n; j++)
    {
        for (h = n - j ; h > 0 ; h--)
        {
            printf(" ");
        }
        for (x = 1 ; x <= j ; x++)
        {
            printf("#");
        }
        printf("\n");
    }
}
