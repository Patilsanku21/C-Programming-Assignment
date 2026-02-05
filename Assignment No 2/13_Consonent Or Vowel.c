#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='/0';

    printf("\n Enter The Character:");
    scanf("%c",&ch);

    if(ch =='A' ||ch =='a' || ch =='E' || ch =='e' || ch =='I' || ch =='i '|| ch =='O'|| ch =='o' || ch == 'U '|| ch =='u')
    {
        printf("\n Given Character Is Vowel");
    }
    else if(((ch >= 'A') && (ch<='Z'))||((ch >='a')&& (ch <='z')))
    {
        printf("\n Given Character Is consonant");
    }
    else
    {
        printf("\n Given Character Is Invalid ");
    }

    getch();
    return 0;
}
