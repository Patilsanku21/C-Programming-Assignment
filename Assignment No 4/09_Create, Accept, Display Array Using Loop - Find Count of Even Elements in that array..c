#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, Bills[7]={},Ecount = 0;

    printf("\n Enter A 7 Bills Count");

    for(i = 0; i<7 ; i++)
    {
        printf("\n Enter A Bill No %d :",(i + 1));
        scanf("%d",&Bills[i]);

        if(Bills[i] % 2 == 0)
        {
            Ecount++;
        }
    }
    printf("\n Enter A Even Count In Array :%d",Ecount);

    getch();
    return 0;

}
