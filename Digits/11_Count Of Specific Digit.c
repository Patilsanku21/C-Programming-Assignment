#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0,Temp = 0,Dig_cnt = 0,Cnt = 0,Dig = 0;

    printf("\n Enter A Number :");
    scanf("%d",&No);

    printf("\n Given Number Of Count :");
    scanf("%d",&Dig_cnt);

    Temp = No;

    while(Temp != 0)
    {
        Dig = Temp % 10;

        if(Dig == Dig_cnt)
        {
            Cnt++;
        }
        Temp /= 10;
    }

    printf("\n Count of %d is Number of %d is %d",Dig_cnt, No,Cnt);

    printf("\n Thank You...!! \n");

    getch();
    return 0;
}
