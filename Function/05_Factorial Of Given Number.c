#include<stdio.h>
#include<conio.h>

int Factorial(int);

int main()
{
    int No = 0,Fact = 0;

    printf("\n Enter a Number :");
    scanf("%d",&No);

    Fact = Factorial(No);

    printf("\n Factorial of Given Number is %d is %d",No,Fact);

    getch();
    return 0;

}
int Factorial(int Num)
{
    int Fact = 1;

    while(Num != 0)
    {
        Num--;
    }
    return Fact;
}
