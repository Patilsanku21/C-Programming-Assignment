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
    struct Product Prod;

    Prod.P_Id = 19;
    strcpy(Prod.P_Name,"Laptop");
    Prod.P_P_Price = 200.20;
    Prod.P_S_Price = 1000.15;

    printf("\n Display Product details\n");

    printf("\n Product Id :%d",Prod.P_Id);
    printf("\n Product Name: %s",Prod.P_Name);
    printf("\n Purchase Price :%0.2f",Prod.P_P_Price);
    printf("\n Sales Price :%0.2f",Prod.P_S_Price);

    getch();
    return 0;
}
