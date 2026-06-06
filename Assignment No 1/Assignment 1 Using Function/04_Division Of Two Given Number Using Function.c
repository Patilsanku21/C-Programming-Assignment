#include<stdio.h>
#include<conio.h>

int Division(int,int)

int main()
{
    int N1 = 0,N2 = 0,Div = 0;

    printf("\n Enter a First Number :");
    scanf("%d",&N1);

    printf("\n Enter a Second Number :");
    scanf("%d",&N2);

    Div = Division(N1,N2);

    printf("\n Division Of Given Number is %d And %d is %d",N1,N2,Div);

    getch();
    return 0;
}
int Division(int Num1,int Num2)
{
    int Div1 ;

    Div1 = Num1 / Num2;

    return Div1;
}
