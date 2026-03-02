#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, j = 0, RC = 0,Num = 1;

    printf("\n Enter Row and Column Size:");
    scanf("%d",&RC);

    for(i = 1 ,Num =1; i <= RC; i++)
    {
        for(j = 1; j <= RC; j++)
        {
            if(i <= j)
            {
                printf(" %2d",Num);
                Num++;
            }
            else
            {
                printf("  ");
            }
                printf("\n");
        }

    }
    getch();
    return 0;
}
