#include<stdio.h>
#include<conio.h>

short int D_cnt(short int No);
long long int D_Sum(long long int No);

int main()
{
    long long int No = 0;
    short int Cnt = 0,Dsum = 0;

    printf("\n Enter a valid Mobile  Number :");
    scanf("%lld",&No);

    Cnt = D_cnt(No);
    Dsum = D_Sum(No);

    if(Cnt %2 == 0)
    {
        printf("\n Given Number Of Digit Count is Even");

    }
    else
    {
        printf("\n Given Number Of Digit Count is Odd");
    }

    getch();

    return 0;
}
short int D_cnt(short int No)
{

     int Dcnt = 0,Num = 0;

     while(Num != 0)
     {
         Dcnt++;

         Num = Num / 10;
     }

     return Dcnt ;
}
long long int D_Sum(long long int Num)
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






