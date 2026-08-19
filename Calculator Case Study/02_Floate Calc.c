#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

float Add(float, float);
float Sub(float, float);
float Mult(float, float);
float Div(float, float);

int main()
{
    char operator = '\0';
    float N1 = 0, N2 = 0;

    printf("\n\n Enter a Operator : ");
    scanf("%c",&operator);

    fflush(stdin);

    printf("\n Enter first Number = ");
    scanf("%f",&N1);
    printf("\n Enter Second Number = ");
    scanf("%f",&N2);

    switch(operator)
    {
        case '+':
                printf("\n Addition : %f + %f : %f",N1, N2, Add(N1, N2));
                break;

        case '-':
                printf("\n Subtraction : %f - %f : %f",N1, N2, Sub(N1, N2));
                break;

        case '*':
                printf("\n Multiplication :%f * %f : %f",N1, N2, Mult(N1, N2));
                break;

        case '/':
                printf("\n Division : %f / %f : %f",N1, N2, Div(N1, N2));
                break;

        default:
                printf("\n Invalid Symbol or Operation..");
                break;
    }

    printf("\n\n Thanks For Using Calculator..!!");

    getch();
    return 0;
}

float Add(float N1, float N2)
{
    float  Res = 0;

    Res = N1 + N2;

    return  Res;
}

float Sub(float N1, float N2)
{
    float  Res = 0;

    Res = N1 - N2;

    return  Res;
}

float Mult(float N1, float N2)
{
    float  Res = 0;

    Res = N1 * N2;

    return  Res;
}

float Div(float N1, float N2)
{
    float  Res = 0;

    Res = N1 / N2;

    return  Res;
}
