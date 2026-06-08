#include<stdio.h>
#include<conio.h>

float Circumference(float);

int main()
{
      float Rad = 0.0 ,Circum = 0.0;

     printf("\n Enter Circumference Of Circle :");
     scanf("%f",&Rad);

     Circum = Circumference(Rad);

     printf("\n Circumference is %f",Circum);

     getch();
     return 0;
}
float Circumference(float R)
{
    float C;

    C = 2* 3.14 * R;

    return C;
}
