#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0,No = 0, Min ;

    for(i = 1; i<=7; i++)
    {
        printf("\n Enter A Number :",i);
        scanf("%d",&No);

    if(No < Min)
    {
        Min = No;
    }
}
    printf("\n Minimum Number Is : %d",Min);

    getch();
    return 0;

}
