#include<stdio.h>
#include<conio.h>

int main()
{
    int N1 = 0,N2 = 0;

    printf("\n Enter a  First Maximum Number :");
    scanf("%d",&N1);

    printf("\n Enetr a Second Maximum Number :");
    scanf("%d",&N2);

    if(N1==N2)
    {
        printf("\n Both are Equal");
    }
    else if(N1 > N2)
    {
        printf("\n First Number Is Grater Than Second");
    }
    else
    {
        printf("\n Second Number Is Grater Than First");
    }
        printf("\n\n Thanks For Visiting...!!");
        getch();
        return 0;
}
