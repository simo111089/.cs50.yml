#include <cs50.h>
#include <stdio.h>
#include <math.h>

long long n,m,k,h,n1;
int numb,digits,j,z,add,add2,total,q,add3,n2;
int main(void)
{
    do //prompt input
    {
        printf("enter the credit card numbers in the program to check if its a valid credit card\n");
       n = get_long_long("number:");
        }
    while(n<0) ;
       m = n;
        numb = 0;
        k = n;
        h = n;
        n1 = n;
        while(m!=0)//count numbers
        {
            m=m/10;
            numb=numb +1;
        }
        if (numb!=15 && numb!=16 && numb!=13)  //check numbers with cc possib number
        {
            printf("credit card invalid\n");
        }
       if(numb==15 || numb==16 || numb==13)
{
            for(j=0;j<=(numb/2);j++)
            {
                add= add+ k%10;
                k=k/100;
            }
            h=h/10;
             for(z=0;z<=(numb/2);z++)
            {
                q=(h%10)*2;
                h=h/100;
                if(q<10)
                {
                    add2=add2+q;
                }
                else
                {
                    add3=1+add3+q%10;
                }
            }
            total= add+add2+add3;
            if (total%10!=0)
            {
                printf("INVALID\n");
            }
}
else
{
    printf("INVALID\n");
}
while (n1 >= 100)
       {
           n1 = n1/ 10;
        }
        n2 = n1/10;
if(numb==15 && total%10==0 && (n1==34 || n1==37))
{
  printf("AMEX\n");
}
else if(numb==16 && total%10==0 && (n1==51 || n1==52 || n1==53||n1==54||n1==55))
{
    printf("MASTERCARD\n");
}
else if(numb==16 && total%10==0 && n2==4)
{
    printf("VISA\n");
}
else if(numb==13 && total%10==0 && n2==4 )
{
    printf("VISA\n");
}
else
{
    printf("INVALID\n");
}
        
}
