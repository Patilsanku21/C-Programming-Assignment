#include<stdio.h>
#include<conio.h>
int main()
{
    char ch = '0' ;

    printf("\n Enter a character:");
    scanf("%c",&ch);

    switch(ch)
    {
        case '1':

            printf("\n Day In The Week Monday");
            break;

        case '2':

            printf("\n Day In The Week Tuesday");
            break;

        case '3':

            printf("\n Day In The Week Wednesay");
            break;

        case '4':

            printf("\n Day In The Week Thursday");
            break;

        case '5':

            printf("\n Day In The Week Friday");
            break;

        case '6':

            printf("\n Day In The Week Saturday");
            break;

        case '7':

            printf("\n Day In The Week Sunday");
            break;

        default:

            printf("\n Invalid Day");
            break;
        }
            printf("\n\n Thank You..!!");
         getch();
         return 0;

    }

