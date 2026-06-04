#include<stdio.h>
#include<conio.h>

 float Area_of_circle(float);  //function declration

 int main()  //entry controlled function
 {
    float Rad = 0.0, Area = 0.0;   // function defination

    printf("\n Enter  a Radius :");
    scanf("%f",&Rad);

    Area = Area_of_circle(Rad);   //function call

    printf("\n Area Of Circle With Radius %0.2f = %0.2f",Rad,Area);

    printf("\n\n Thank you \n");

    getch();
    return 0;
 }
    float Area_of_circle(float R)
    {
        float A = 0.0;

        A = 3.14 * R * R;

        return A; //return type


    }

