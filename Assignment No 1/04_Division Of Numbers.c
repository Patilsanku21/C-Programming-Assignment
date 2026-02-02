#include<stdio.h>
#include<conio.h>

int main()
{
    int N1 = 0, N2 = 0, Div;

    printf("\n Enter First Number :");
    scanf("%d",&N1);

    printf("\n Enter Second Number :");
    scanf("%d",&N2);

    Div = N1 / N2 ;

    printf("\n Division = %d / %d = %d.",N1 ,N2 , Div);

    getch();
    return 0;
}
