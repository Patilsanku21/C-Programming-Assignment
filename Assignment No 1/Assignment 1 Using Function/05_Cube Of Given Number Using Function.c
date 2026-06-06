#include<stdio.h>
#include<conio.h>

int Cube(int);

int main()
{
    int No = 0,Cube1 = 0;

    printf("\n Enter a Number :");
    scanf("%d",&No);

    Cube1 = Cube(No);

    printf("\n Cube %d * %d * %d = %d",No,No,No,Cube1);

    getch();
    return 0;
}
int Cube(int Num)
{
    int Cube11;

    Cube11 = Num * Num * Num;

    return Cube11;
}
