#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, Bills[7],Zcnt = 0;

    printf("\n Enter A 7 Bills Count");

    for(i = 0; i < 7 ; i++)
    {
        printf("\n Enter A Bill No %d :",(i + 1));
        scanf("%d",&Bills[i]);

        if(Bills[i] == 0)
        {
            Zcnt++;
        }
    }
    printf("\n Enter Zero Count  In Array :%d",Zcnt);

    getch();
    return 0;

}
