#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0,Value[7] = {};

    printf("\n Enter A 7 Elements \n");

    for(i = 0; i<7; i++)
    {
        printf("\n Enter Element No %d:",i+1);
        scanf("%d",&Value[i]);

    }
        printf("\n Enter Any Key And See All Value\n");

    for(i = 0; i < 7; i++)
    {
        printf("\n Value Of Element No %d = %d ", i + 1 ,Value[i]);
    }
    getch();
    return 0;
}
