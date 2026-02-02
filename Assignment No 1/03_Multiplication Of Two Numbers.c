#include<stdio.h>
#include<conio.h>

int main()
{
    int N1 = 0,N2 = 0,Mul ;

    printf("\n Enter First Number :");
    scanf("%d",&N1);

    printf("\n Enter Second Number :");
    scanf("%d",&N2);

    Mul = N1 * N2 ;

    printf("\n Multiplication = %d * %d =%d .",N1,N2,Mul);

    getch();
    return 0;
}
