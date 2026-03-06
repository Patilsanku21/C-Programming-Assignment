#include<stdio.h>
#include<conio.h>
#define Size 7
 int main()
{
    int Bills[Size],i = 0,MaxBills = 0;

    printf("\n Enter All Bills \n");

    for( i = 0; i < Size ; i++)
    {
        printf("\n Enter a Bills: ");
        scanf("%d",&Bills[i]);
    }
    for(i = 0; i < Size ; i++)
    {
        if((i == 0 || Bills[i] > MaxBills))
        {
            MaxBills = Bills[i];
        }
    }
    printf("\n\n Maximum Bills = %d",MaxBills);

    printf("\n\n Thnaks For Visiting..!!");
    getch();
    return 0;


}
