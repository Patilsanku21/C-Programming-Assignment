#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    int RNo;
    char Name[40];
    long long int MobNo;
    float per;
};
int main()
{
    struct student s1 ={};

    printf("\n Enter Student Information \n");

    printf("\n Enter student Roll Number:");
    scanf("%d",&s1.RNo);

    fflush(stdin);

    printf("\n Enter student Name:");
    gets(s1.Name);

    printf("\n Enter student Mobile Number:");
    scanf("%lld",&s1.MobNo);

    printf("\n Enter student percentage:");
    scanf("%f",&s1.per);


    printf("\n Enter any Key And See All Student Inforamtion:\n");

    printf("\n -----****-----***------*****-------\n");

    printf("\n RNo :%d",s1.RNo);
    printf("\n Name :%s",s1.Name);
    printf("\n Mobile Number:%lld",s1.MobNo);
    printf("\n Percentage :%f",s1.per);

    getch();
    return 0;
}
