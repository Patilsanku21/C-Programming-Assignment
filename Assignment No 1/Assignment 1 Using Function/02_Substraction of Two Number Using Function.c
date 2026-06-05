#include<stdio.h>
#include<conio.h>

 int Substraction(int,int);

 int main()
 {
    int N1 = 0,N2 = 0,Sub = 0;

    printf("\n Enter a First Number :");
    scanf("%d",&N1);

    printf("\n Enter a Second Number:");
    scanf("%d",&N2);

    Sub = Substraction(N1,N2);

    printf("\n Substraction Of Given Number is %d & %d is %d",N1,N2,Sub);

    getch();
    return 0;
 }

 int Substratcion(int Num1,int Num2)
 {
    int Subst;

    subst = Num1 + Num2;

    return Subst;
 }
