#include<stdio.h>
#include<conio.h>

int main()
{
    int Phy = 0, Chem = 0, Sci = 0, Tot = 0;
    float Per = 0.0;

    printf("\n Enter a Physics Marks :");
    scanf("%d",&Phy);

    printf("\n Enter a Chemistry Marks :");
    scanf("%d",&Chem);

    printf("\n Enter a Science Marks :");
    scanf("%d",&Sci);

    Tot = Phy + Chem + Sci ;
    Per = (Tot/3)*100 ;

    printf("\n Total Of Three Subjects = %d",Tot);
    printf("\n Percentage Of Three Subjects = %2f",Per);

    getch();
    return 0 ;
}
