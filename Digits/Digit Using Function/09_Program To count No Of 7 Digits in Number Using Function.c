#include<stdio.h>
#include<conio.h>

int Cnt_seven(int No);


int main()
{
    int No = 0 ,Cnt_of_7 = 0,Temp = 0,Dig = 0;

    printf("\n Enter A Number :");
    scanf("%d",&No);

    Cnt_of_7 = Cnt_seven(No);

    printf("\n Display Digit of Seven Count is %d",Cnt_of_7);

    getch();

    return 0;
}

int Cnt_seven(Num)
{
    int Dig = 0,Cnt_of_7 = 0;

    while(Num != 0)
    {
        Dig = Num % 10 ;

        if(Dig == 7)
        {
            Cnt_of_7++;
        }
        Num  /= 10;
    }

    return Cnt_of_7;

}




