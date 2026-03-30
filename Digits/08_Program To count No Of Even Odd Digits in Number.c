#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 ,Ecnt = 0, Ocnt = 0 ,Zcnt = 0,Temp = 0,Dig = 0;

    printf("\n Enter A Number :");
    scanf("%d",&No);

    Temp = No;

    while(Temp > 0)
    {
        Dig = Temp % 10 ;

        if(Dig %2 ==0)
        {
            Ecnt++;
        }
        else if(Dig == 0)
        {
            Zcnt++;
        }
        else
        {
            Ocnt++;
        }
        Temp = Temp / 10;
    }

    printf("\n Event Count  in Given Number %d =%d",No ,Ecnt);
    printf("\n Zero Count  in Given Number %d =%d",No ,Zcnt);
    printf("\n Odd Count  in Given Number %d =%d",No ,Ocnt);

    getch();
    return 0;

    }
