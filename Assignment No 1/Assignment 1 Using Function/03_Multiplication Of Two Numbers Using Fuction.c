#include<stdio.h>
#include<conio.h>

int Multiplication(int,int);//function Delacartion

int main()
{
    int N1 = 0,N2 = 0,Mul =0;

    printf("\n Enter a First Number :");
    scanf("%d",&N1);

    printf("\n Enter a Second Number :");
    scanf("%d",&N2);

    Mul = Multiplication(N1,N2);//Function Call

    printf("\n Multiplication of Two Number is %d and %d is %d",N1,N2,Mul);

    getch();

    return 0;
}
int Multiplication(int Num1,int Num2)//Function defination
{
    int Multi;

    Multi = Num1 * Num2;

    return Multi;

}
