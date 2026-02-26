#include<stdio.h>
#include<conio.h>
int main()
{
    int value[7] ={};

    printf("\n\n Enter A All Element:\n");

    printf("\n Enter A First value:");
    scanf("%d",&value[0]);

    printf("\n Enter A Second value:");
    scanf("%d",&value[1]);

    printf("\n Enter A Third value:");
    scanf("%d",&value[2]);

    printf("\n Enter A Fourth value:");
    scanf("%d",&value[3]);

    printf("\n Enter A Fifth value:");
    scanf("%d",&value[4]);

    printf("\n Enter A Sixth value :");
    scanf("%d",&value[5]);

    printf("\n Enter A Seventh value:");
    scanf("%d",&value[6]);

    printf("\n Enter Any Key And See A All value:\n");

    printf("\n Value Of First Element = %d",value[0]);
    printf("\n value Of Second Element = %d",value[1]);
    printf("\n value Of Third Element = %d",value[2]);
    printf("\n value Of fourth Element = %d",value[3]);
    printf("\n value Of fifth Element = %d",value[4]);
    printf("\n value Of sixth Element = %d",value[5]);
    printf("\n value Of Seventh Element = %d",value[6]);

    getch();
    return 0;
}
