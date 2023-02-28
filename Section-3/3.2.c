/*Find the even and odd by using ternary operator not using "if-else" condition*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1;
    printf("\n This program illustrate that, find the number is even or odd ");
    printf("\n Enter a Number :");
    scanf("%d",&num1);
    ((num1%2==0) ? printf("\n Number is Even") : printf("\n Number is Odd"));
    getch();
}
