
#include<stdio.h>
#include<conio.h>

int main()
{
    int Year = 0;

    printf("\n Enter a Year :");
    scanf("%d",&Year);

    if (Year % 4 == 0)
    {
        printf("\n %d Is Leap Year",Year);
    }
    else
    {
        printf("\n %d Is Not Leap Year",Year);
    }

        printf("\n\n Thanks For Visiting..!!");

    getch();
    return 0;
}
