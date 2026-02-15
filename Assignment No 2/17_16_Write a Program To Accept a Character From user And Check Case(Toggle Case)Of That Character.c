#include<stdio.h>
#include<conio.h>
int main()
{
    char ch ='0';

    printf("\n Enter a Character:");
    scanf("%c",&ch);

    if(( ch >='A') && (ch <= 'Z'))
    {
        ch = ch + 32;
    }
    else if(( ch >='a') && (ch <= 'z'))
    {
        ch = ch - 32;
    }
        printf("\n Character After Toggle :%c",ch);

        printf("\n\n Thank You..!!");

        getch();
        return 0;
}
