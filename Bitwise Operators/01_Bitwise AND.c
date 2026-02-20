#include<stdio.h>
#include<conio.h>
int main()
{
    int N1 = 0,N2 = 0, Res = 0;

    printf("\n Enter a First Number:");
    scanf("%d",&N1);

    printf("\n Enter a Second Number:");
    scanf("%d",&N2);

    Res = N1 & N2;

    printf("\n Result is %d & %d = %d",N1,N2,Res);

    getch();
    return 0;
}
