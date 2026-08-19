#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Add(int,int);
int Sub(int,int);
int Mul(int,int);
int Div(int, int);
int Mod(int ,int);

int main()
{
    int N1 = 0, N2 = 0;

    printf("\n Enter a First Number :");
    scanf("%d",&N1);

    printf("\n Enter a Second Number :");
    scanf("%d",&N2);

    printf("\n\n Result After Arithmetic Operator is Given Numbers \n");

    printf("\n Addition       =    %d + %d = %d",N1,N2,Add(N1,N2));
    printf("\n Substraction   =   %d - %d  = %d",N1,N2 , Sub(N1,N2));
    printf("\n Multiplication  =  %d * %d  = %d",N1,N2,Mul(N1,N2));
    printf("\n Division         = %d / %d  = %d",N1,N2,Div(N1,N2));
    printf("\n Moduls           = %d %% %d  = %d",N1,N2,Mod(N1,N2));

    getch();
    return 0;

}
int Add(int N1, int N2)
{
        int Res = 0;

        Res = N1 + N2;

        return Res;
}
int Sub(int N1 ,int N2)
{
        int Res = 0;

        Res = N1 - N2;

        return Res;
}
int Mul(int N1,int N2)
{
        int Res = 0;

        Res = N1 * N2;

        return 0;
}
int Div(int N1,int N2)
{
        int Res = 0;

        Res = N1 / N2;

        return 0;
}
int Mod(int N1 , int N2)
{
        int Res = 0;

        Res = N1 % N2;

        return Res;
}
