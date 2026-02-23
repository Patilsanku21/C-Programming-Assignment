#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0,Res = 0;

    printf("\n Enter a First Number :");
    scanf("%d",&No);

    Res = ~ No ;

    printf("\n Result Is ~%d = %d",No,Res);

    getch();
    return 0;
}
