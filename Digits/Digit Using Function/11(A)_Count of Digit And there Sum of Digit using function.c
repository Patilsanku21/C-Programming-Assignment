#include<stdio.h>
#include<conio.h>
#include "fork.h"

short int Dig_Cnt( short int);

long long int D_sum( long long int);

int main()
{
     long long int No = 0;
     short int Cnt = 0,Dsum = 0;

    printf("\n Enter A  Valid Mobile Number :");
    scanf("%lld",&No);

   Cnt = Dig_Cnt(No);
    Dsum = D_sum(No);

    if(Dsum %2 == 0)
        {
            printf("\n Given Number of Sum is Even :");

        }

        else
    {
        printf("\n Given Number of Sum is Odd :");

    }

     getch();

     return 0;
}





