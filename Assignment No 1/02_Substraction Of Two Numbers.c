#include<stdio.h>
#include<conio.h>

int main()
{
    int N1 = 0,N2 = 0,sub ;

    printf("\n Enter First Number :");
    scanf("%d",&N1);

    printf("\n enter Second Number :");
    scanf("%d",&N2);

    sub = N1 - N2 ;

    printf("\n Substraction = %d - %d = %d.",N1,N2,sub);

    getch();
    return 0;
}
