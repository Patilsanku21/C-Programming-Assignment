#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Product
{
    int P_Id;
    char P_Name[20];
    float P_P_Price;
    float P_S_Price;
};

int main()
{
    struct Product Prod1 = {};

    printf("\n Enter a Product Details:\n");

    printf("\n Enter Product Id:");
    scanf("%d",&Prod1.P_Id);

    fflush(stdin);

    printf("\n Enter Product Name:");
    gets(Prod1.P_Name);

    printf("\n Enter Purchase Price:");
    scanf("%f",&Prod1.P_P_Price);

    printf("\n Enter a Sales Price:");
    scanf("%f",&Prod1.P_S_Price);

    printf("\n Enter a Any Key And Display Given Product Details");
    getch();

    system("cls");
    printf("\n Display Product Details");

    printf("\n Product Information");
    printf("\n Product Id: %d",Prod1.P_Id);
    printf("\n Product Name:%s",Prod1.P_Name);
    printf("\n Product Purchase price:%0.2f",Prod1.P_P_Price);
    printf("\n Product Sales Price:%0.2f",Prod1.P_S_Price);

    getch();
    return 0;
}
