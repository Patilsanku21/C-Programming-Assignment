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
    else
    {
        printf("\n Number Is Not Divisible By 7");
    }

        printf("\n\n Thnaks For Visiting..!!");

        getch();
        return 0;
}
