#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    int RollNo;
    char Name[30];
    long long int MobNo;
    float per;
};

int main()
{
     struct student s1={},s2 = {},s3 ={};

     printf("\n Student Details \n");

     printf("\n Enter Student Roll No:");
     scanf("%d",&s1.RollNo);

     fflush(stdin);

     printf("\n Enter Student Name:");
     gets(s1.Name);

     printf("\n Enter Student Mobile Number :");
     scanf("%lld",&s1.MobNo);

     printf("\n Enter Student Percentage:");
     scanf("%f",&s1.per);


     printf("\n Enter a 2nd Student Information :");

     printf("\n Enter a Student Roll No :");
     scanf("%d",&s2.RollNo);

      fflush(stdin);

     printf("\n Enter a student Name :");
     gets(s2.Name);

     printf("\n Enter a Mobile Number :");
     scanf("%lld",s2.MobNo);

     printf("\n Enter a Student Percentage :");
     scanf("%f",&s2.per);


     printf("\n Enter a 3rd Student Information :");

     printf("\n Enter a Student Roll No :");
     scanf("%d",&s3.RollNo);

      fflush(stdin);

     printf("\n Enter a student Name :");
     gets(s3.Name);

     printf("\n Enter a Mobile Number :");
     scanf("%lld",&s3.MobNo);

     printf("\n Enter a Student Percentage :");
     scanf("%f",&s3.per);

     printf("\n Enter Any key and See All Information");

     system("cls");

     printf("\n RollNo %d",s1.RollNo);
     printf("\n Name %c",s1.Name);
     printf("\n MobNo %lld",s1.MobNo);
     printf("\n Percentage %f",s1.per);

     printf("\n\n -----------*****-------------\n");

     printf("\n RollNo %d",s2.RollNo);
     printf("\n Name %c",s2.Name);
     printf("\n MobNo %lld",s2.MobNo);
     printf("\n Percentage %f",s2.per);

     printf("\n\n -----------*****-------------\n");


     printf("\n RollNo %d",s3.RollNo);
     printf("\n Name %c",s3.Name);
     printf("\n MobNo %lld",s3.MobNo);
     printf("\n Percentage %f",s3.per);

     printf("\n\n -----------*****-------------\n");

     getch();
     return 0;

}
