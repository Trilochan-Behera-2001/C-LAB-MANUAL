/*find the simple interest and compound interest */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float principal,time,rateOfInterest;
    float simpleInterest,compundInteger;

    printf("\n This program find the simple interest and compound interest");

    printf("Enter the Principal amount: ");
    scanf("%f",&principal);
    printf("Enter the Rate of Interest: ");
    scanf("%f",&rateOfInterest);
    printf("Enter the Time: ");
    scanf("%f",&time);
    simpleInterest=(principal*time*rateOfInterest)/100;
    compundInteger=principal*(pow((1+rateOfInterest/100),time))-principal;
    printf("\n Simple Interest is :%f",simpleInterest);
    printf("\n Compound Interest is :%f",compundInteger);
    getch();
}
