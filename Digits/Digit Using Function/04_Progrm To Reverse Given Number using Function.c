#include<stdio.h>
#include<conio.h>

int Rev_Number(int);

int main()
{
    int No = 0,Rev = 0;

    printf("\n Enter A Number :");
    scanf("%d",&No);

    Rev = Rev_Number(No);

    printf("\n Display Reverse of Digit Count is %d",Rev);

    getch();

    return 0;
}
int Rev_Number(int Num )
{
    int Dig = 0,Rev = 0;

    while(Num != 0)
    {
        Dig = Num % 10 ;

        Rev = (Rev * 10) + Dig;

        Num /= 10;
    }
    return Rev;
}


