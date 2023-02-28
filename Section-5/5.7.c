/* Write a program to input a number and check whether it is palindrome or not (a
palindrome number is a number that remains the same when its digits are reversed, e.g., 16461)*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,reverse=0,remender,temp=0;
    printf("\n This Program Take a Integer and Check whether the number is palindrome or not");
    printf("\n Enter a Integer Number :");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        remender=num%10;
        reverse=reverse*10+remender;
        num=num/10;
    }
    if(temp==reverse)
    {
        printf("\n The number is in Palindrome");
    }
    else
    {
        printf("\n The number is not in Palindrome");
    }
    getch();
}
