#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, Bills[7]={},Ocount = 0;

    printf("\n Enter A 7 Bills Count");

    for(i = 0; i<7 ; i++)
    {
        printf("\n Enter A Bill No %d :",(i + 1));
        scanf("%d",&Bills[i]);

        if(Bills[i] % 2 == 1)
        {
            Ocount++;
        }
    }
    printf("\n Enter A Odd Count In Array :%d",Ocount);

    getch();
    return 0;

}
