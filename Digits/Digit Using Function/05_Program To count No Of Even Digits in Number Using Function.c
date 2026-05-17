#include<stdio.h>
#include<conio.h>

int E_Cnt(int);

int main()
{
    int No = 0 ,Ecnt = 0;

    printf("\n Enter A Number :");
    scanf("%d",&No);

    Ecnt = E_Cnt(No);

    printf("\n Display Given Number Of Even Count is %d",Ecnt);

    getch();

    return 0;

}
int E_Cnt(int Num)
{
    int Dig = 0, Ecnt = 0;
    while(Num != 0)
    {
        Dig = Num % 10 ;

        if(Dig %2 ==0)
        {
            Ecnt++;
        }
        Num /= 10;
    }
    return Ecnt;

}



