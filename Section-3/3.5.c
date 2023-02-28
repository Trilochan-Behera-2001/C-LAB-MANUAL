/*Write a program to read a four-digit integer and print the sum of its digits*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int number,remender,sum=0;
    printf("\n This Program Illustrate that, take a 4 digit Integer number and print the sum of its digits \n");
    printf("\n Enter a 4 digit integer number from Keyboard \n");
    scanf("%4d", &number);

    remender=number%10;
    sum=sum+remender;
    number=number/10;

    remender=number%10;
    sum=sum+remender;
    number=number/10;

    remender=number%10;
    sum=sum+remender;
    number=number/10;

    remender=number%10;
    sum=sum+remender;
    number=number/10;

    printf("The sum of 4 digit integer is : %d \n", sum);
    getch();
}
