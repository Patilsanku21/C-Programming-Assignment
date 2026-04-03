#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 ,Cnt_of_7 = 0,Temp = 0,Dig = 0;

    printf("\n Enter A Number :");
    scanf("%d",&No);

    Temp = No;

    while(Temp > 0)
    {
        Dig = Temp % 10 ;

        if(Dig ==7)
        {
            Cnt_of_7++;
        }
        Temp = Temp / 10;
    }

    printf("\n  Count of 7 in Given Number %d =%d",No ,Cnt_of_7);

    getch();
    return 0;

    }
