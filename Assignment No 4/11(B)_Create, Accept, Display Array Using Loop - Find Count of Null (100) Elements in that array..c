#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, Bills[7],cnt100 = 0;

    printf("\n Enter A 7 Bills Count");

    for(i = 0; i < 7 ; i++)
    {
        printf("\n Enter A Bill No %d :",(i + 1));
        scanf("%d",&Bills[i]);

        if(Bills[i] == 100)
        {
            cnt100++;
        }
    }
    printf("\n Enter cnt100 In Array :%d",cnt100);

    getch();
    return 0;

}
