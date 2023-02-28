/*Program is written for a Temperature is converted into Fahrenheit*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float cels,fahren;
    float cels1, fahren1;
    printf("\n Program is written for a Temperature is converted into Fahrenheit");
    printf(" Please Enter a Temperature in degree celsius to convert its respective Fahrenheit \n  ");
    scanf("%f",& cels);
    fahren=((cels*9)/5)+32;
    printf("The converted Fahrenheit is %f \n ", fahren);
    printf("------------------------------------------------------- \n ");
    printf("enter degree in Fahrenheit ");
    scanf("%f",&fahren1);
    cels1=((5.0/9.0)*(fahren1-32));
    printf("The converted celsius is %f \n ", cels1);
    getch();
}
