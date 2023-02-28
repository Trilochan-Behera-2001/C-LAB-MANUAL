/*WRITE A PROGRAM TO INPUT A NUMBER AND "ODD" if the number us odd and "EVEN" if the number is even*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("\n This Program Illustrate that, Take a Numbers and find The Number is Even or Odd");
    printf("\n Enter a Integer from Keyboard :");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf(" \n The Number is EVEN");
    }
    else
    {
        printf(" \n The Number is ODD");
    }
    getch();

}
