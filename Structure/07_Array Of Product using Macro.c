#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define Pcnt 4

struct Product
{
    int P_Id;
    char P_Name[20];
    float P_P_Price;
    float P_S_Price;

};

int main()
{
    int i = 0;
    struct Product prod[Pcnt]={};

    for(i=0;i<Pcnt;i++)
    {
        printf("\n Enter Product Details %d :\n",i+1);

        printf("\n Enter Product Id :");
        scanf("%d",&Prod[i].P_Id);

        fflush(stdin);
        printf("\n Enter Product Name :");
        gets(prod[i].P_Name);

        printf("\n Enter A Purchase Price:");
        scanf("%f",&Prod[i].P_P_Price);

        printf("\n Enter Sales Price :");
        scanf("%f",&Prod[i].P_S_Price);

    }
    printf("\n Enter A Any Key And Display All Product details");

    getch();
    system("cls");
    printf("\n Display Product Details :\n");

    for(i=0;i<Pcnt;i++)
    {
        printf("\n\n %d Product Information :i+1");

        printf("\n Product Id :%d",Prod[i].P_Id);
        printf("\n Product Name:%s",Prod[i].P_Name);
        printf("\n Product Purchase Price:%0.2f",Prod[i].P_P_Price);
        printf("\n Product Sales Price :%0.2f",Prod[i].P_S_Price);

    }
    getch();
    return 0;
}
