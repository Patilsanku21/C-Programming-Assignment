#include<stdio.h>
#include<conio.h>
int main()
{
    int  i = 0, N1 = 0,N2 =0;

    printf("\n Enter A First Number:");
    scanf("%d",&N1);

    printf("\n Enter A Second Number:");
    scanf("%d",&N2);

    printf("\n");

    for(i = 1; i<=N2 ; i++)
    {
        printf(" %d ",N1);

    }
        getch();
        return 0;
}
