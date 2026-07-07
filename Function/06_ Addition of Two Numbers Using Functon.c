//Call By Value

#include<stdio.h>
#include<conio.h>

int Addition(int,int);

int main()
{
    int N1 = 0,N2 = 0,Sum = 0;

    printf("\n Enter first Number :");
    scanf("%d",&N1);

    printf("\n Enter Second Number :");
    scanf("%d",&N2);

    Sum = Addition(N1,N2);

    printf("\n Addition of %d = %d = %d",N1,N2,Sum);

    getch();

    return 0;
}
int Addition(int No1,int No2)
{
    int Res = 0;

    Res = No1 + No2 ;

    return Res;
}
