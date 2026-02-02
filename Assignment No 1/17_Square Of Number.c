#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Square = 0;

    printf(" \n Enter Square Of Number :");
    scanf("%d",&No);

    Square = No * No ;

    printf("\n Square = %d * %d = %d.", No , No , Square);

    getch();
    return 0;
}
