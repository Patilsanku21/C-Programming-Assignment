#include<stdio.h>
#include<conio.h>

int Z_Cnt(int No);

int main()
{
    int No = 0 ,Zcnt = 0,Dig = 0;

    printf("\n Enter A Number :");
    scanf("%d",&No);

    Zcnt = Z_Cnt(No);

    printf("\n Display Zero Count of Given Number is %d",Zcnt);

    getch();

    return 0;

}
int Z_Cnt(int Num)
{
     int Dig = 0,Zcnt = 0;

     while(Num != 0)
    {
        Dig = Num % 10 ;

        if(Dig == 0)
        {
            Zcnt++;
        }
        Num /= 10;
    }

    return Zcnt;

}
