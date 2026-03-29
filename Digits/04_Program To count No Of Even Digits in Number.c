#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 ,Ecnt = 0,Temp = 0,Dig = 0;

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
        Temp = Temp / 10;
    }

    printf("\n Event Count  in Given Number %d =%d",No ,Ecnt);

    getch();
    return 0;

    }
