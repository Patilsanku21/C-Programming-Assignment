#include<stdio.h>
#include<conio.h>
int main()
{
    int  i = 0 ,No = 0 ,Sum = 0;

    for(i = 1; i<= 10; i++)
    {
        printf("\n Enter A Number %d :",i);
        scanf("%d",&No);
    }
    for(i = 1; i<= 10; i++)
    {
        Sum = Sum  + No ;
        Sum++;
    }
        printf("\n Additin Of Number is :%3d",Sum);

        printf("\n\n Thank You..!!");
        getch();
        return 0;

}
