/*Write a program to input a number and check whether it is Armstrong or not (An
Armstrong number is an integer such that the sum of the cubes of its digits is equal to the number itself. For
example, 371 is an Armstrong number since 33 + 73 + 13 = 371*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,result=0,remender,temp=0;
    printf("\n This Program Take a Integer and Check whether the number is Armstrong or not");
    printf("\n Enter a Integer Number :");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        remender=num%10;
        result=result+remender*remender*remender;
        num=num/10;
    }
    if(temp==result)
    {
        printf("\n The number is in Armstrong");
    }
    else
    {
        printf("\n The number is not in Armstrong");
    }
    getch();
}
