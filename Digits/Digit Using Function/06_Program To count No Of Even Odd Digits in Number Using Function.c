#include<stdio.h>
#include<conio.h>

int Odd_Digit(int );

int main()
{
    int No = 0 ,Ocnt = 0,Dig = 0;

    printf("\n Enter A Number :");
    scanf("%d",&No);

    Ocnt = Odd_Digit(No);

    printf("\n Display Given Number of Digit is %d",Ocnt);

    getch();

    return 0;
}
int Odd_Digit(int Num )
{
    int Ocnt = 0,Dig = 0;

    while(Num != 0)
    {
        Dig = Num % 10 ;

        if(Dig %2 == 1)
        {
            Ocnt++;
        }
        Num /= 10;
    }

    return Ocnt;

}




