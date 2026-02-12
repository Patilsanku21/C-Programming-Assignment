#include<stdio.h>
#include<conio.h>
int main()
{
    int N1 = 0,N2 = 0,N3 = 0;

    printf("\n Enter a First Number:");
    scanf("%d",&N1);

    printf("\n Enter a Second Number:");
    scanf("%d",&N2);

    printf("\n Enter a Third Number :");
    scanf("%d",&N3);

    int Temp = N1;
    N1 = N2;
    N2 = N3;
    N3 = Temp;

    printf("\n\n After a swapping Value.");

    printf("\n First Number Is : %d",N1);
    printf("\n Second Number Is :%d",N2);
    printf("\n Third Number Is :%d",N3);

    printf("\n\n After a Swapping Value");

    getch();
    return 0;
}
