#include<stdio.h>
#include<conio.h>

int main()
{
    char ch ='/0';

    printf("\n Enter charactar Or Digit :");
    scanf("%c",&ch);

    if((ch >= 'A')&& (ch <= 'Z'))
    {
        printf("\n Given Character Is Uppercase ");
    }
    else if((ch >='a') && (ch <='z'))
    {
        printf("\n Given Character Is Lowercase ");
    }
    else if((ch >='0') && (ch <='9'))
    {
        printf("\n Given Character Is Digit ");
    }
    else
    {
        printf("\n Given Letter Is Symbol ");
    }
        printf("\n\nThanks For Visiting..!!");

    getch();
    return 0;
}
