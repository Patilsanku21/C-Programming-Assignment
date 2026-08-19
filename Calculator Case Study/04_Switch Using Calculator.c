#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Add(int,int);
int Sub(int,int);
int Mul(int,int);
int Div(int ,int);
int Mod(int,int);

int main()
{
        char choice = '\0';

        int N1 = 0,N2 = 0;

        printf("\n**************This Is My Calculator*****************\n");

        printf("\n Choice");
        printf("\n 1 .Addition ");
        printf("\n 2 .Substraction ");
        printf("\n 3 . Multipication ");
        printf("\n 4 . Division ");
        printf("\n 5 . Remainder ");
        printf("\n 6 . Exit ");

        printf("\n Enter Your Choice :");
        scanf("%c",&choice);

        fflush(stdin);

        switch(choice)
        {
                case '1':
                        printf("\n Enter a First Number :");
                        scanf("%d",&N1);

                        printf("\n Enter a Second Number :");
                        scanf("%d",&N2);

                        printf("\n Addition = %d + %d = %d",N1,N2,Add(N1,N2));

                        break;

                case '2':
                        printf("\n Enter a First Number :");
                        scanf("%d",&N1);

                        printf("\n Enter a Second Number :");
                        scanf("%d",&N2);

                        printf("\n substraction = %d - %d = %d",N1,N2,Sub(N1,N2));

                        break;


                case '3':
                        printf("\n Enter a First Number :");
                        scanf("%d",&N1);

                        printf("\n Enter a Second Number :");
                        scanf("%d",&N2);

                        printf("\n Multiplication = %d * %d = %d",N1,N2,Mul(N1,N2));

                        break;

                case '4':
                        printf("\n Enter a First Number :");
                        scanf("%d",&N1);

                        printf("\n Enter a Second Number :");
                        scanf("%d",&N2);

                        printf("\n Division = %d / %d = %d",N1,N2,Div(N1,N2));

                        break;

                case '5':
                        printf("\n Enter a First Number :");
                        scanf("%d",&N1);

                        printf("\n Enter a Second Number :");
                        scanf("%d",&N2);

                        printf("\n  Remainder = %d % %d = %d",N1,N2,Mod(N1,N2));

                        break;

                case'6':
                        printf("\n Thank You,Have a Good Day");
                        break;

                default:
                            printf("\n Invalid Choice...");
                            break;
        }

                printf("\n Thank You Use My Calculator...!!");

                getch();

                return 0;

}
int Add(int N1,int N2)
{
        int Res = 0;

        Res = N1 + N2;

        return Res;
}
int Sub(int N1, int N2)
{
        int Res = 0;

        Res = N1 - N2;

        return Res;


}
int Mul(int N1,int N2)
{
            int Res = 0;

            Res = N1 * N2;

            return Res;
}
int Div(int N1,int N2)
{
            int Res = 0;

            Res = N1 / N2;

            return Res;
}
int Mod(int N1,int N2)
{
        int Res = 0;

        Res = N1 % N2;

        return Res;
}
