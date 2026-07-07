///========*****====call By Address Using Function =====***=====

#include<stdio.h>
#include<conio.h>

int Addition(int*,int*);

int main()
{
    int N1 = 0,N2 = 0,Sum = 0;

    printf("\n Enter a First Number:");
    scanf("%d",&N1);

    printf("\n Enter a Second Number :");
    scanf("%d",&N2);

    Sum = Addition(&N1,&N2);

    printf("\n Addition of %d + %d = %d",N1,N2,Sum);

    getch();
    return 0;
}
int Addition(int *p1,int *p2)
{
    int Res = 0;

    Res = *p1 + *p2;

    return Res;
}
