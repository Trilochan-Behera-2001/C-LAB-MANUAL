/*Write a program to count the number of digits in a number.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int number,count=0;
    printf("\n This Program take a Integer Number from user and count the digits of this Number");
    printf("\n Enter a Integer Number :");
    scanf("%d",&number);
    while(number!=0)
    {
        number=number/10;
        count=count+1;
    }
    printf("Total Number of Digits Present in the number is : %d", count);
}
