#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0,Bills[7],Billsum = 0;

    printf("\n Enter A 7 Bills Numbers ");

    for(i = 0; i < 7; i++)
    {
        printf("\n Enter A Bill No %d :",(i + 1));
        scanf("%d",&Bills[i]);

        Billsum += Bills[i];
    }
        printf("\n\n Biils Count In Array :%d ",Billsum);

        getch();
        return 0;
}
