#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,Temp = 0,Dcnt= 0,Dig = 0,Cnt = 0;

    printf("\n Enter A Number :");
    scanf("%d",&No);

    printf("\n Number Of Count :");
    scanf("%d",&Dcnt);

    Temp = No;

    while(Temp != 0)
    {
        Dig = Temp % 10;

      if( Dig == Dcnt )
      {
         Cnt++ ;
      }
      Temp /= 10;

    }

    printf("\nDigits count in Given Number %d = %d",No, Dcnt,Cnt );

    getch();
    return 0;
}
