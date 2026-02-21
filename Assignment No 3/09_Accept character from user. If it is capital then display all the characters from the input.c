#include<stdio.h>
#include<conio.h>
int main()
{
    char i = '/0', ch = '/0';

    printf("\n Enter A  Character:");
    scanf("%c",&ch);

    if((ch>= 'S') && (ch<='Z'))
    {
        for(i = 'ch'; ch <= 'Z';ch++)
        {
            printf(" %c ",ch);
        }

    }
    else if((ch <= 'k') && (ch>='a'))
    {
        for( i = 'ch'; ch >= 'a';ch--)
        {
            printf (" %c ",ch);
        }
    }
    else
    {
        printf("\n Invalid Character");
    }
    printf("\n\n Thnak You..!!");
    getch();
    return 0;
}
