#include<stdio.h>
#include<conio.h>
#include<string.h>

    struct student
    {
        int RollNo;
        char Name;
        long long int MobNo;
        float per;
    };

int main()
{
    struct student s1;

    printf("\n Student Details \n");

    printf("\n RollNo  : %d",s1.RollNo);
    printf("\n Name     :%c",s1.Name);
    printf("\n MobNo    :%lld",s1.MobNo);
    printf("\n Percentage: %f",s1.per);

    getch();
    return 0;
}

