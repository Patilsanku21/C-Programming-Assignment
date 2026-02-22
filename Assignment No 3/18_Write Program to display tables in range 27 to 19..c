#include<stdio.h>
#include<conio.h>
int main()
{
     int  i = 0,j = 0;

    printf("\n Tables in 27 To 19:  \n ");

    for(i = 1;i<=10;i++)
    {
        for(j = 27;j>=19;j--)
        {
            printf(" %3d ",i * j );
        }
            printf("\n");
    }
        getch();
        return 0;

}
