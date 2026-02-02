#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , Cube = 0 ;

    printf("\n Cube Of Number :");
    scanf("%d",&No);

    Cube = No * No * No ;

    printf("\n Cube : %d * %d * %d = %d", No,No,No,Cube);

    getch();
    return 0;
}
