#include<stdio.h>
#include<conio.h>
#define size 7
int main()
{
    int Bills[size],i = 0,MinBills  =0;

    printf("\n Enter A All Bills Count \n");

    for(i = 0; i < size ; i++)
    {
        printf("\n Enter a Bills count :");
        scanf("%d",&Bills[i]);
    }
    for(i = 0; i < size ; i++)
    {
        if((i == 0) || (Bills[i]) < MinBills)
        {
            MinBills = Bills[i];
        }
    }
    printf("\n Minimum Bills = %d",MinBills);

    printf("\n\nThnaks For Visiting..!!");
    getch();
    return 0;
}
