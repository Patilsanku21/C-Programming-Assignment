#include<stdio.h>
#include<conio.h>

float AreaCircle(float);

int main()
{
    float Rad = 0.0,Area = 0.0;

    printf("\n Enter Radius of circle :");
    scanf("%f",&Rad);

    Area = AreaCircle(Rad);

    printf("\n Area Of Circle %f",Area);

    getch();
    return 0;
}
float AreaCircle(float R)
{
    float A;

    A = 3.14 * R * R;

    return A;
}
