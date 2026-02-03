#include<stdio.h>
#include<conio.h>

int main()
{
    int Day = 0;

    printf("\n Enter a Day Number :");
    scanf("%d",&Day);

    if(Day == 1 )
    {
        printf("\n Day Is The Week Monday");

    }

    else if(Day == 2)
    {
        printf("\n Day In the Week  Tuesday");
    }

    else if(Day == 3)
    {
        printf("\n Day In The Week Wensday");
    }
    else if(Day == 4)
    {
        printf("\n Day In The Week Thrsday");
    }
    else if(Day == 5)
    {
        printf("\n Day In Week Friday ");
    }
    else if(Day == 6)
    {
        printf("\n Day In The Week Saturday");
    }
    else if(Day == 7)
    {
        printf("\n Day In The Week Sunday");
    }
    else
    {
        printf("\n Day Is Not Valid");
    }
        printf("\n\n Thanks For Visiting..!!");

        getch();
        return 0;


}
