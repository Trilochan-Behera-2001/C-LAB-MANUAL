/*swapping two numbers using third variables*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3;
    printf("\n swapping two numbers using third variables");
    printf("\n Enter Two numbers for Swapping :");
    scanf("%d %d",&num1, &num2);
    printf("\n Before Swapping num1=%d, num2=%d", num1, num2);
    num3=num1;
    num1=num2;
    num2=num3;
    printf("\n After Swapping num1=%d, num2=%d", num1, num2);
    getch();

}
