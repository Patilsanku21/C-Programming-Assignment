#include<stdio.h>
#include<conio.h>
int main()
{
    int N1 = 0,N2 = 0;

    printf("\n Enter a First Number :");
    scanf("%d",&N1);

    printf("\n Enter a Second Number :");
    scanf("%d",&N2);

    printf("\n\n Before Swapping %d,%d.",N1,N2);

    N1 = N1 + N2;
    N2 = N1 - N2;
    N1 = N1 - N2;

    printf("\n\n After Swapping %d, %d.",N1,N2);

    getch();
    return 0;
}
