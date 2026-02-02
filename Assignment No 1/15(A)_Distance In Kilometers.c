#include<stdio.h>
#include<conio.h>

int main()
{
    float Kilo = 0.0, Mtrs = 0.0;

    printf("\n Enter Distance In Kilometers :");
    scanf("%f",&Kilo);

    Mtrs = Kilo * 1000;

    printf("\n Kilometrs =%f Meters",Kilo,Mtrs);

    getch();
    return 0;

}
