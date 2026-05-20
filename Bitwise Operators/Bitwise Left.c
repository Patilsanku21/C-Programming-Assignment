#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0,Res = 0;

    printf("\n Enter A First Number:");
    scanf("%d",&No);

    Res = No << 9;

    printf(" Result %d << 9 = %d",No,Res);

    getch();
    return 0;
}
