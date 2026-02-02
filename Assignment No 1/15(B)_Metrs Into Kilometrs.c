#include<stdio.h>
#include<conio.h>

int main()
{
    float Mtrs = 0.0, Kilo = 0.0;

    printf("\n Enter Distance In Metrs:");
    scanf("%f",&Mtrs);

    Kilo = Mtrs / 1000;

    printf("\n Metrs =%f Kilometrs",Mtrs,Kilo);

    getch();
    return 0;

}
