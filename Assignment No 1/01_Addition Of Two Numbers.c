#include<stdio.h>
#include<conio.h>

int main()
{
    int N1 = 0,N2 = 0 ,sum = 0;

    printf("\n Enter 1st Number :");
    scanf("%d",&N1);

    printf("\n Enter 2nd Number :");
    scanf("%d",&N2);

    sum = N1 + N2;

    printf("\n Addition => %d + %d = %d.",N1,N2,sum);

    getch();
    return 0;

}
