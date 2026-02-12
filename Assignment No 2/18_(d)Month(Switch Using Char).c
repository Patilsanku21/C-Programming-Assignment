#include<stdio.h>
#include<conio.h>
int main()
{
    char ch = '/0';

    printf("\n Enter a character:");
    scanf("%c",&ch);

    switch(ch)
    {
        case '1':

            printf("\n Month Is January");
            break;

        case '2':

            printf("\n Month Is February");
            break;

        case '3':

            printf("\n Month Is March ");
            break;

        case '4':

            printf("\n Month Is April");
            break;

        case'5':

            printf("\n Month Is May ");
            break;

        case '6':

            printf("\n Month Is June ");
            break;

        case '7':

            printf("\n Month Is July ");
            break;

        case '8':

            printf("\n Month Is August ");
            break;

        case '9':

            printf("\n Month Is September ");
            break;

        case '10':

            printf("\n Month Is Octomber");
            break;

        case '11':

            printf("\n Month Is November");
            break;

        case '12':

            printf("\n Month Is December ");
            break;

            default :

                printf("\n Invalid Month ");
                break;
    }
            printf("\n\n Thank You..!!");

            getch();
            return 0;
}
