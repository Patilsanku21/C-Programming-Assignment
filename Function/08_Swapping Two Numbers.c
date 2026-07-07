///Call By Value Using Function

#include<stdio.h>
#include<conio.h>

void swap(int,int);

int main()
{
    int N1 = 0,N2 = 0;

    printf("\n Enter a First Number :");
    scanf("%d",&N1);

    printf("\n Enter a Second Number :");
    scanf("%d",&N2);

    printf("\n Before swap Number 1 and Number 2 =%d",N1,N2);

    swap(N1 ,N2);

    printf("\n After Swap Number1 and Number2 = %d",N1,N2);

    getch();

    return 0;
}
void swap(int No1,int No2)
{
    int Temp = 0;

    printf("\n Inside Swap Function :");

    Temp = No1;
    No1 = No2;
    No2 = Temp;
}
