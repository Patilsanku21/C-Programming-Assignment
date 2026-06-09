#include<stdio.h>
#include<conio.h>

int MaxNo(int N1,int N2)
{
    if(N1 == N2)
    {
        printf("\n Both are equal");
    }
    else if(N1 > N2)
    {
        printf("\n First Number is Grater than Second",N1);
    }
    else
    {
        printf("\n Second Number is Grater than first",N2);
    }
    return 0;
}
int main()
{
    int N1 = 0,N2 = 0;

    printf("\n Enter a First
           Number :");
    scanf("%d",&N1);

    printf("\n Enter a Second Number :");
    scanf("%d",&N2);

    MaxNo(N1,N2);

    getch();
    return 0;
}
