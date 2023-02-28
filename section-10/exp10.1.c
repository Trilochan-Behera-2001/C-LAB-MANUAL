/* program using function to determine whether a year is leap year or not*/
#include<stdio.h>
#include<conio.h>

int leap(int yr);

void main()
{
    int year,i;
    printf("give a year");
    scanf("%d",&year);
    i=leap(year);
    if(i==1)
    {
        printf("the given year %d is leap year",year);
    }
    else
    {
        printf("the given year %d is not a leap year",year);
    }

}
int leap(int yr)
{
    if((yr%4==0&&yr%100!=0)||yr%400==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
