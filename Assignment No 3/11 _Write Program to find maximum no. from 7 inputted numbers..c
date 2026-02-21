#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0,No = 0, Max = 0;

    for(i = 1; i<=7; i++)
    {
        printf("\n Enter A Number :",i);
        scanf("%d",&No);

    if(No > Max)
    {
        Max = No;
    }
}
    printf("\n Maximum Number Is : %d",Max);

    printf("\n\n Thank You..!!");

    getch();
    return 0;

}
