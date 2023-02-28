/*Write a program to find the number of and sum of all integers greater than 100 and less
than 200 that are divisible by 7.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int sum=0,count=0, i;
    printf("\n This Program find the number and Sum of all integer greater than 100 and less than 200 that are divisible by 7");

    for (i=100;i<=200;i++)
    {
        if(i%7==0)
            {

                count=count+1;
                sum=sum+i;
            }

    }
    printf("\n \n  The number of integer which are divisible by 7 is :%d",count);
    printf("\n \n  the sum of this Integer which are divisible by 7 from 100 to 200 is :%d \n \n ",sum);
}


