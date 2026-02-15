#include<stdio.h>
#include<conio.h>
int main()
{
    char ch = '0';
    printf("\n Enter a Alphabet  From (A To Z):");
    scanf("%c",&ch);

    if((ch >='A') && (ch <= 'Z'))
    {
        printf("\n Given Alphabet Is True",ch);
    }
    else
    {
        printf("\n Given Alphabet Is False",ch);
    }
        printf("\n\n Thank You..!!");
        getch();
        return 0;
}
