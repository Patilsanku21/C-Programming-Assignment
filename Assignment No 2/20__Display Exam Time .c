#include<stdio.h>
#include<conio.h>
int main()
{
    char ch = '0';

    printf("\n Enter a Division :");
    scanf("%c",&ch);

    switch(ch)
    {
        case'A':

            printf("\n Exam Of Division A at 10 AM");
        case'a':
          printf("\n Exam Of Dividion a at 10 AM ");
            break;

        case 'B':

           printf("\n Exam Of Division B at 10:30 AM");
        case'b':
           printf("\n Exam Of Division b at 10 :30AM");
           break;

        case 'C':

            printf("\n Exam Of Division C at 1 PM");
        case 'c':
            printf("\n Exam Of Division c at 1 PM");
            break;

        case 'D':

            printf("\n Exam Of Division D at 1:30 PM");
        case 'd':
            printf("\n Exam Of Division d at 1:30 PM");
            break;

        default:

            printf("\n Invalid");
            break;

    }

        printf("\n\n Thank You..!!");

        getch();
        return 0;
}
