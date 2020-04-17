#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int i;
bool b, p;
bool arealldigits(string a[1]);

int main(int argc, string argv[])
{
    int t, n;
    if (argc == 2)
    {
        if (arealldigits(argv) == true)
        {
            n = atoi(argv[1]);  //convert string into a number  // n is our argv[1] as int
            string s = get_string("plaintext: ");

            printf("ciphertext: ");
            int q;
            for (q = 0 ; q <= strlen(s) ; q++) //incript text
            {
                if (isalpha(s[q]) && islower(s[q])) //lower cases
                {
                    printf("%c", (((s[q] - 97) + n) % 26) + 97);
                }
                else if (isalpha(s[q]) && isupper(s[q])) // upper cases
                {
                    printf("%c", (((s[q] - 65) + n) % 26) + 65);
                }
                else // if its not alphabetic
                {
                    printf("%c", s[q]);
                }
            }
            printf("\n");
        }
        else
        {
            printf("./caesar + key\n");
        }
    }
    else
    {
        printf("./caesar + key\n");
    }

}


bool arealldigits(string a[1])
{
 for (i = 0; i < strlen(a[1]); i++)
        {
            if isdigit(a[1][i])  //check if each numer of argv1 is a digit
            {
                b = b + 0;
            }
            else
            {
                p = p + 1;
            }
        }
if (b + p == 0)
{
    return true;
}
else
{
    return false;
}
}
