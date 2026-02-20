#include<stdio.h>
#include<conio.h>
int main()
{
    char ch = '\0';

    printf("\n Enter Letters In H to N..");
    scanf("%c",&ch);

    for( ch ='H'; ch<='N'; ch++)
    {
        printf("\n %c",ch);
    }
        getch();
        return 0;
}
