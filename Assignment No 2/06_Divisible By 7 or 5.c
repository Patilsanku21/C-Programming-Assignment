#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter a Number :");
    scanf("%d",&No);

    if(No % 7 == 0)
    {
        printf("\n Number Is Divisible By 7");
    }
    else if(No % 5 == 0)
    {
        printf("\n Number Is Divisible By 5");
    }
    else
    {
        printf("\n Both Are Divisible by 7 Or 5");

        printf("\n Both Are  Not Divisile By 7 Or 5");
    }
        printf("\n\n Thnaks For visiting..!!");

        getch();
        return 0;
}
