#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, j = 0, No = 0;

    printf("\n Enter A Number :");
    scanf("%d",&No);

    for(i = 1;i<=10;i++)
    {
        for(j = 7; j<=13 ;j++)
        {
            printf("% 4d",i * j);
        }
        printf("\n");
    }
    getch();
    return 0;
}
