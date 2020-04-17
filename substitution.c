#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

//functions
bool checkargcis(int a); //use function to check if argc is 2
bool checknumber(string b[1]); //check if 26 characters
bool isalphabet(string s[1]); //check if it contains all alphabet
string encrypttext(string gotten, string subs[1]); //encrypt text
//declarations in functions
char c = 'a' - 1;
char d = 'A' - 1;
int i, e, f, g, w;
char encriptmin, keep;


int main(int argc, string argv[])
{
    if (checkargcis(argc) != true) //use function to check if argc is 2
    {
        printf("Enter 'substitution.c' + alphabet\n");
        return 1;
    }
    //check that argv[1] is 26 characters
    if (checknumber(argv) != true)
    {
        printf("key must be 26 characters\n");
        return 1;
    }
    //check that argv[1] is alphabet
    if (isalphabet(argv) != true)
    {
        printf("key must be 26 different alphabetic characters\n");
        return 1;
    }
    string data = get_string("plaintext: ");
    //encrypt text
    printf("cybertext: ");
    encrypttext(data, argv);
    printf("\n");
    return 0;
}





bool checkargcis(int a)  //check if argc is 2
{
    if (a == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool checknumber(string b[1])  //check if 26 characters
{
    if (strlen(b[1]) == 26)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isalphabet(string s[1]) //check if it contains all alphabet
{
    for (i = 0; i < 26 ; i++)
    {
        c = c + 1;
        d = d + 1;
        if ((strchr(s[1], c) != NULL))
        {
            e = e + 1;
        }
        else if ((strchr(s[1], d) != NULL))
        {
            f = f + 1;
        }
    }
    g = e + f;
    if (g != 26)
    {
        return false;
    }
    return true;
}

//encrypt text lower then upper
string encrypttext(string gotten, string subs[1])
{
    for (w = 0; w < strlen(gotten); w++)
    {
        if (islower(gotten[w]))
        {
            int value = (int)gotten[w] - 97;
            encriptmin = subs[1][value];
            if (islower(encriptmin))
            {
                printf("%c", encriptmin);
            }
            else
            {
                printf("%c", encriptmin + 32);
            }
        }
        else if (isupper(gotten[w]))
        {
            int value = (int)gotten[w] - 65;
            encriptmin = subs[1][value];
            if (isupper(encriptmin))
            {
                printf("%c", encriptmin);
            }
            else
            {
                printf("%c", encriptmin - 32);
            }
        }
        else
        {
            printf("%c", gotten[w]);
        }
    }
    return false;
}