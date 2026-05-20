#include<stdio.h>
#include<conio.h>
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
    struct Product Prod1,Prod2,Prod3;

    Prod1.P_Id = 20;
    strcpy(Prod1.P_Name,"Laptop");
    Prod1.P_P_Price = 900.10;
    Prod1.P_S_Price = 2000.15;

    Prod2.P_Id = 21;
    strcpy(Prod2.P_Name,"Cap");
    Prod2.P_P_Price = 100.15;
    Prod2.P_S_Price = 3000.14;

    Prod3.P_Id = 19;
    strcpy(Prod3.P_Name,"Bag");
    Prod3.P_P_Price = 200;
    Prod3.P_S_Price = 2001;

    printf("\n Display Product Details\n");

    printf("\n 1st Product information :\n");
    printf("\n Product Id :%d",Prod1.P_Id);
    printf("\n Product Name:%s",Prod1.P_Name);
    printf("\n Product Purchase Price:%0.2f",Prod1.P_P_Price);
    printf("\n Product Sales Price:%0.2f\n",Prod1.P_S_Price);

    printf("\n 2nd Product Information :\n");
    printf("\n Proudct Id :%d",Prod2.P_Id);
    printf("\n Product Name :%s",Prod2.P_Name);
    printf("\n Product Purchase Price: %0.2f",Prod2.P_P_Price);
    printf("\n Product Sales Price :%0.2f\n",Prod2.P_S_Price);

    printf("\n 3rd Product Information :\n");
    printf("\n Product Id :%d",Prod3.P_Id);
    printf("\n Product Name :%s",Prod3.P_Name);
    printf("\n Product Purchase Price :%0.2f",Prod3.P_P_Price);
    printf("\n Product Sales Price :%0.2f",Prod3.P_S_Price);

    getch();
    return 0;
}



