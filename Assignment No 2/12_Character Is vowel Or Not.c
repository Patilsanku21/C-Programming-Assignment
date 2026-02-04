#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '0';
    printf("\n Enter a Character :");
    scanf("%c",&ch);

    if(ch >='A' ||ch <='a' || ch >='E' || ch <='e' || ch >='I' || ch <='i '|| ch >='O'|| ch <='o' || ch >= 'U '|| ch <='u')
    {
        printf("\n Given Character Is Vowel");
    }
    else
    {
        printf("\n Given Character Is Not Vowel");
    }
        printf("\n \n Thanks For Visiting ...!!");
        getch();
        return 0;
}
