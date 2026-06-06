#include<stdio.h>
#include<conio.h>

int Square(int);

int main()
{
    int No = 0,Squ = 0;

    printf("\n Enter a Number :");
    scanf("%d",&No);

    Squ = Square(No);

    printf("\n Square of Given Number is %d * %d = %d",No,No,Squ);

    getch();
    return 0;
}

int Square(int Num)
{
    int Square1;

    Square1 = Num * Num;

    return Square1;

}
