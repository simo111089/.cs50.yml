#include <cs50.h>
#include <stdio.h>
#include <math.h>

int total, cents;
float n, one, five, dimes, quarters;
int main(void)
{ 
    do
    {
        n = get_float("change $:");
    }
    while (n < 0);
    cents = round(n * 100); //how many cents
    total = 0;

    for (quarters = cents; quarters >= 25; quarters = quarters - 25) //can i use 25c
    {
        cents = cents - 25;
        total = total + 1;
    }
    for (dimes = cents; dimes >= 10; dimes = dimes - 10) //can I use 10c
    {
        cents = cents - 10;
        total = total + 1;
    }
    for (five = cents; five >= 5; five = five - 5) //can I use 5c
    {
        cents = cents - 5;
        total = total + 1;
    }
    for (one = cents; one >= 1; one--) //use 1c for the rest
    {
        cents = cents - 1;
        total = total + 1;
    }
    printf("%d\n", total);
}

