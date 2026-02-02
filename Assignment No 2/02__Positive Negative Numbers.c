#include<stdio.h>
#include<conio.h>

int mai()
{
    int No = 0;

    printf("\n Enter a Number :");
    scanf("%d",&No);

    if(No==0)
    {
        printf("\n Zero is a Nutral Number");
    }
    else if(No >0)
    {
        printf("\n Given Number Is Positive ");
    }
    else
    {
        printf("\n Given Number Is Negative ");
    }
        printf("\n\n Thanks For Visiting..!!");
        getch();
        return 0;
}
