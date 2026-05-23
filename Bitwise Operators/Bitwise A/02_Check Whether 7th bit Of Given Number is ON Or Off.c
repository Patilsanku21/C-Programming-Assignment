#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0;

    printf("\n Enter a Number :");
    scanf("%d",&No);

    if((No >> 6)& 1)
    {
        printf("\n 7th Bit Of Given Number is %d ON",No);
    }
    else
    {
        printf("\n 7th Bit of Given Number is %d OFF",No);
    }
    getch();

    return 0;
}
