/*Write a program to find out the HCF and LCM of two numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,min,gcd,lcm;
    printf("\n This Program Take Two Integer and find gcd and lcm ");
    printf("\n Enter a Two Integer Number :");
    scanf("%d %d",&num1,&num2);
    min=(num1<num2)?num1:num2;
        for(int i=1;i<=min;i++)
        {
           if(num1%i==0 && num2%i==0)
           {
               gcd=i;
           }
        }
        lcm=(num1*num2)/gcd;
        printf("%d %d",gcd,lcm);
}
