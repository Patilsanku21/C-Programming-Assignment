#include<stdio.h>
#include<conio.h>

void print_Message10();

int main()
{
    printf("\n inside Function\n");

        print_Message10();

    printf("\n outside function \n");

    getch();
    return 0;
}

    void print_Message10()
    {
        int i = 0;

        for(i = 1 ;i <= 10; i++)
        {
            printf("\n WELCOME \n");
        }
    }
