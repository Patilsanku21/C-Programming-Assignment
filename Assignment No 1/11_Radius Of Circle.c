#include<stdio.h>
#include<conio.h>

int main()
{
    float Rad = 0.0, Area;

    printf("\n Enter a Radius Of Circle :");
    scanf("%f",&Rad);

    Area = 3.14 * Rad *Rad ;

    printf("\n Radius Of Circle = %f",Area);

    getch();
    return 0;
}
