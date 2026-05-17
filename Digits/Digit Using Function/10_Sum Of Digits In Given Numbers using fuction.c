#include<stdio.h>
#include<conio.h>

int D_sum(int No);

int main()
{
    int No = 0, Dsum = 0;

    printf("\n Enter A Number :");
    scanf("%d",&No);

    Dsum = D_Sum(No);

    printf("\n Addition of Digit count is %d",Dsum);

    getch();
    return 0;

}
int D_Sum(int No)
{
    int Dig_Sum = 0;

    while(No != 0)
    {

        Dig_Sum = Dig_Sum + (No % 10) ;
        No /= 10;
    }
     return Dig_Sum;
}


