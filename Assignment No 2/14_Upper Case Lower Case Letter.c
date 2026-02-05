#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='0/';

    printf("\n Enter a Character :");
    scanf("%c",&ch);

    if(ch >='A' && ch <='Z')
    {
        printf("\n Given Letter is Upper case");
    }
    else if(ch >='a' && ch <='z')
    {
        printf("\n Given Letter is Lowercase");
    }
    else
    {
        printf("\n Given Letter Is Not Invalid");
    }

    getch();
    return 0;
}
