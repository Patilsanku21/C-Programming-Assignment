#include<stdio.h>
#include<conio.h>

int main()
{
    float Width = 0.0, Height = 0.0,Area = 0.0;

    printf("\n Enter a Width Of Rectangle :");
    scanf("%f",&Width);

    printf("\n Enter a Height Of Rectangle :");
    scanf("%f",&Height);

    Area = Width * Height ;

    printf("\n Area Of Rectangle = %f",Area);

    getch();
    return 0;
}
