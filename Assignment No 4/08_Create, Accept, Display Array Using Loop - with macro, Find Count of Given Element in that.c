#include<stdio.h>
#include<conio.h>
#define size 5
int main()
{
    int i = 0,Arr[size]={},Cnt = 0;

    for(i = 1; i < size; i++)
    {
        printf("\n Enter value of %d index :",i);
        scanf("%d",&Arr[i]);
    }
    getch();
    printf("\n\n");

    for(i = 1; i < size;i++,Cnt++)
    {
        printf("\n value Of %d index is :%d\n",i,Arr[i]);
    }
    getch();
    return 0;


}
