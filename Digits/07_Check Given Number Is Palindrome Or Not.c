#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 ,Rev = 0,Temp = 0,Dig = 0;

    printf("\n Enter A Number :");
    scanf("%d",&No);

    Temp = No;

    while(Temp > 0)
    {
        Dig = Temp % 10;

        Rev = (Rev * 10)+ Dig;

        Temp = Temp / 10;
    }

        if(No == Rev)
        {
            printf("\n Given Number %d Is Palindrom",No);
        }
        else
        {
            printf("\n Given Number %d Is  Not Palindrom",No);
        }

        getch();
        return 0;


    }
