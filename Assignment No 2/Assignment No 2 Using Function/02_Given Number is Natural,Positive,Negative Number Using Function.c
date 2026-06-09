#include<stdio.h>
#include<conio.h>

int Maxmin(int No)
{
    if(No == 0)
    {
        printf("\n Given Number is Natural ");
    }
    else if(No > 0)
    {
        printf("\n Given Number is Positive");
    }
    else
    {
        printf("\n Given Number is Negative");
    }
    return 0;
}
int main()
{
    int No =0;

    printf("\n Enter a Number: ");
    scanf("%d",&No);

    Maxmin(No);

    getch();
    return 0;
}
