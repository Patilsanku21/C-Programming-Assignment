#include<stdio.h>
#include<conio.h>

int D_Cnt(int);

int main()
{
    int No = 0,Dcnt = 0;

    printf("\n Enter A Number :");
    scanf("%d",&No);

    Dcnt = D_Cnt(No);

    printf("\n Display Given Digit Of Count is %d",Dcnt);

    getch();

    return 0;
}
int D_Cnt(int Num)
{
    int Dcnt = 0;

    while(Num != 0)
    {
        Num /= 10;

        Dcnt++;

     }

  return Dcnt;
}
