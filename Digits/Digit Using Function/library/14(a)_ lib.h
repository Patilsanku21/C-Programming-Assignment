#include<stdio.h>
#include<conio.h>

short int Dig_Cnt( short int);

long long int D_sum( long long int);

short int Dig_Cnt( short int Num)

{
    int dCnt = 0;
        while(Num != 0)
    {
        dCnt++;

        Num = Num /10;
    }

    return dCnt;
}
long long int D_sum(long long int Num)
{
    int sum = 0 ,Cnt = 0;

    if( Cnt  == 10)
    {

        while(Num != 0)
        {
            sum = sum + (Num % 10);

            Num /= 10;

        }

        }
    else
    {
     printf("\n Invalid Mobile Number :");
     }
     return sum;
}






