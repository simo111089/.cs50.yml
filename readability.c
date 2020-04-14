#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string s = get_string("Text:  ");
    int n = 0;
    //count letters(string s)
    for (int i = 0; i < strlen(s); i++)
    {
        if ((s[i] >= 'a' && (int)s[i] <= 'z') || (s[i] >= 'A' && (int)s[i] <= 'Z'))
        {
            n = n + 1;
        }
    }
//number of letters is 'n'
    //count words
    int x = 1;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
        {
            if ((s[i + 1]) != ' ')
            {
                x = x + 1;
            }
        }
    }
//number of words is 'x'
    //count sentences
    int c = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if ((s[i] == '.') || (s[i] == '!') || (s[i] == '?'))
        {
            c = c + 1;
        }
    }
//number of sentences is 'c'
//calculate formula
//L = Letters ÷ Words *100
    float l = ((float)n / (float)x) * 100;
//S = Sentences ÷ Words × 100
    float w = ((float)c / (float)x) * 100;
//index = 0.0588 * L - 0.296 * S - 15.8
    float index = (0.0588 * l) - (0.296 * w) - 15.8;
    int grade = round(index); // grade is Grade
    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade <= 1)
    {
        printf("Before Grade 1\n");
    }
    else 
    {
        printf("Grade %i\n", grade);
    }
}

