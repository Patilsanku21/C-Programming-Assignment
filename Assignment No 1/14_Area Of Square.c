#include<stdio.h>
#include<conio.h>

int main()
{
    float Side = 0.0, Area = 0.0;

    printf("\n Enter a Area Of Square :");
    scanf("%f",&Side);

    Area = Side * Side ;

    printf("\n Area Of Square = %f",Area );

    getch();
    return 0;
}
