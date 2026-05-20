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
    struct Product Prod1 = {21,"Keyborad+Mouse combo",350,300};

    printf("\n Display Product Details :\n");

    printf("\n Product Information :\n");
    printf("\n Product Id : %d",Prod1.P_Id);
    printf("\n Product Name :%s",Prod1.P_Name);
    printf("\n Product Purchase Price:%0.2f",Prod1.P_P_Price);
    printf("\n Product sales Price :%0.2f",Prod1.P_S_Price);

    getch();
    return 0;
}
