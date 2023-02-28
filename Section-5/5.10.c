/*Write a program that takes an integer ‘n’ as input and prints the Fibonacci series up to
‘n’. (Hint: Fibonacci series: 1 1 2 3 5 8 13 21 …)*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,num1=0,num2=1,num3=0;
    printf("\n This Program Take a Input as Range and Find the Fibonacci series up to this ");
    printf("\n Enter a Integer Number :");
    scanf("%d",&n);

    printf("\n %d %d",num1,num2);
    for(int i=2;i<=n;i++)
    {
        num3=num1+num2;
        printf(" %d",num3);
        num1=num2;
        num2=num3;
    }

    getch();
}

