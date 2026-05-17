#include<stdio.h>
#include<conio.h>

int E_Cnt(int No);

int O_Cnt(int No);

int Z_Cnt(int No);

int main()
{
    int No = 0 ,Ecnt = 0, Ocnt = 0 ,Zcnt = 0;

    printf("\n Enter A Number :");
    scanf("%d",&No);

    Ecnt = E_Cnt(No);

    Ocnt = O_Cnt(No);

    Zcnt = Z_Cnt(No);

    printf("\n Event Count  in Given Number %d =%d",No ,Ecnt);
    printf("\n Zero Count  in Given Number %d =%d",No ,Zcnt);
    printf("\n Odd Count  in Given Number %d =%d",No ,Ocnt);

getch();

return 0;

}
int E_Cnt(int Num)
{
    int Dig = 0,Ecnt = 0;

while(Num != 0)
    {
        Dig = Num % 10 ;

        if(Dig %2 ==0)
        {
            Ecnt++;
        }
        Num /= 10;
    }
    return Ecnt;
}
int O_Cnt(int Num)
{
      int Dig = 0,Ocnt = 0;

while(Num != 0)
    {
        Dig = Num % 10 ;

        if(Dig %2 ==1)
        {
            Ocnt++;
        }
        Num /= 10;
    }
    return Ocnt;
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







