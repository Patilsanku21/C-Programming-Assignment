#include<stdio.h>
#include<conio.h>
int main()
{
    char ch ='/0';
    int i = 0, j = 0, RC = 0;

    printf("\n Enter Row and Column Size:");
    scanf("%d",&RC);

    for(i = 1,ch ='A'; i <= RC; i++)
    {
        for(j = 1; j <= RC; j++)
        {
            if(i >= j)
            {
                printf(" %c ",ch);
                ch++;
            }
            else
            {
                printf("   ");
            }

        }
         printf("\n");
    }
    getch();
    return 0;
}
