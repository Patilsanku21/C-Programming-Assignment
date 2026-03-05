#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0,Bills[5] = {},Zcnt = 0,Ecnt = 0,Ocnt = 0;

    printf("\n Enter A  5 Bills\n");

    for(i = 0;i < 5;i++)
    {
        printf("\n Enter a Bills Number %d:",( i + 1));
        scanf("%d",&Bills[i]);

        if(Bills[i] == 0)
    {
        Zcnt++;
    }
    else if(Bills[i] % 2 == 0)
    {
        Ecnt++;
    }
    else
    {
        Ocnt++;
    }
    }

    getch();
    printf("\n Zero count = %d",Zcnt);
    printf("\n Odd count = %d",Ocnt);
    printf("\n Even count = %d",Ecnt);

    getch();
    return 0;
}




