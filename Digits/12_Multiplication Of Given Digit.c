#include<stdio.h>
#include<conio.h>
int main()
{
    short int Mul =1;

    int No = 0,Temp = 0;

    printf("\n Enter a Number :");
    scanf("%d",&No);

    Temp = No ;

    while(Temp != 0)
    {
        Mul = Mul *(Temp % 10);

        Temp /= 10;

    }
    printf("\n Multiplication of Given Digit %d is %d",No,Mul);

    printf("\n\n Thank You ..!!");

    getch();

    return 0;
}
