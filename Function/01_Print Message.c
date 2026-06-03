#include<stdio.h>
#include<conio.h>

void print_Message();

int main()
{
    printf("\n Inside function \n");

    print_Message();

    printf("\n outside function \n");

    getch();
    return 0;

}

void print_Message()
{
    printf("\n ...WELCOME... \n");

}
