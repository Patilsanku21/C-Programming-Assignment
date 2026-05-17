#include<stdio.h>
#include<conio.h>

short int Dsum(int No);

int main()
{
        short int Cnt = 0;
        int No = 0;

        printf("\n Enter A Number :");
        scanf("%d",&No);

        Cnt = Dsum(No);

        printf("\n Addition Of Given Number is %d",Cnt);

        getch();

        return 0;
}

        short int Dsum(int No)
{


         short int dCnt = 0;

         while(No != 0)
         {
            dCnt++;

            No /= 10;
         }

         return dCnt;

}
