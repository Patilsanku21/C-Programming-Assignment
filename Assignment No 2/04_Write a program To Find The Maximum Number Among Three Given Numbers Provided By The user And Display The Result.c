#include<stdio.h>
#include<conio.h>
int main()
{
    int N1 = 0,N2 = 0,N3 = 0;

    printf("\n Enter A First Number:");
    scanf("%d",&N1);

    printf("\n Enter A Second Number:");
    scanf("%d",&N2);

    printf("\n Enter A Third Number:");
    scanf("%d",&N3);

    if((N1 > N2) &&(N1 > N3))
    {
        printf("\n The First %d Is The Maximum Number",N1);
    }
    else if((N2 > N3) && (N2 > N1))
    {
        printf("\n The Second %d Is The Maximum Number",N2);
    }
    else
    {
        printf("\n The Third %d Is Maximum Number",N3);
    }
        printf("\n\n Thank You..!!");

        getch();
        return 0;
}
