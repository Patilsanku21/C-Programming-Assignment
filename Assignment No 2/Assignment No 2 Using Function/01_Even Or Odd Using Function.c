#include<stdio.h>
#include<conio.h>

int EvenOdd(int No)
{
    if(No %2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int No = 0;

    printf("\n Enter a Number :");
    scanf("%d",&No);

    if((EvenOdd(No)))
    {
        printf("\n Given Number is Even ");
    }
    else
    {
        printf("\n Given Number is Odd");
    }
    getch();

    return 0;
}



