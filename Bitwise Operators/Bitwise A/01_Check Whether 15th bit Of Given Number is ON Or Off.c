#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0;

    printf("\n Enter a Number:");
    scanf("%d",&No);

    if((No >> 14) & 1)
    {
        printf("\n 15th Bit Of Given No is %d ON",No);

    }
    else
    {
        printf("\n 15th Bit of Given No is %d OFF ",No);

    }

    getch();
    return 0;

}
