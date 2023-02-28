/* Write a program to input a number and check whether it is prefect or not (A number is
called perfect if the sum of its divisors is equal to the number itself. For example, 28 is a perfect number
since 1+2+4+7+14=28)*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int num,sum=0,temp=0;
    printf("\n This Program Take a Integer and Check whether the number is Perfect or not");
    printf("\n Enter a Integer Number :");
    scanf("%d",&num);
    temp=num;
        for(int i=1;i<num;i++)
        {
            if(num%i==0)
            {
                sum=sum+i;
            }
        }
    printf("%d",sum);
    if(temp==sum)
    {
        printf("\n The Number is perfect Number");
    }
    else
    {
        printf("\n The Number is not perfect Number");
    }

    getch();
}

