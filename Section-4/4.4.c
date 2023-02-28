/*WRITE A PROGRAM THAT WILL READ THE VALUE OF X AND EVALUATE THE A  FUNCTION*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    printf("\n This Program Evaluate the value of y by read the value of x");
    printf("\n Please Enter The value of x :");
    scanf("%d",&x);

    if(x>0)
    {
        printf("\n The Value of y is 1");
    }
    else if(x==0)
    {
        printf("\n The Value of y is 0");
    }
    else
    {
        printf("\n The Value of y is -1");
    }
    getch();
}

