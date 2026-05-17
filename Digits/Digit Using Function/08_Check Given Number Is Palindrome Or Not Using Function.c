#include<stdio.h>
#include<conio.h>

int Rev_Pallindrom(int No);

int main()

{
    int No = 0 ,Rev = 0;

    printf("\n Enter A Number :");
    scanf("%d",&No);

   Rev = Rev_Pallindrom(No);

    if(No == Rev)
        {
            printf("\n Given Number %d Is Palindrom",No);
        }
        else
        {
            printf("\n Given Number %d Is  Not Palindrom",No);
        }

   getch();

   return 0;
}

int Rev_Pallindrom(int Num)

{
    int  Rev = 0,Dig = 0;

    while(Num != 0)
    {
        Dig = Num % 10;

        Rev = (Rev * 10)+ Dig;

        Num /= 10;
    }

        return Rev;
}





