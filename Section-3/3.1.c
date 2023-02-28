/*Write a program to compute the area of a triangle given its three sides*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float side1,side2,side3;
    float s=0,area=0;
    printf("\n This program illustrate that, find the area of triangle by using their three sides ");
    printf("\n Enter the First side of a Triangle  :");
    scanf("%f",&side1);
    printf("\n Enter the Second side of a Triangle :");
    scanf("%f",&side2);
    printf("\n Enter the Third side of a Triangle :");
    scanf("%f",&side3);
    s=(side1+side2+side3)/2;
    area=sqrt((s*(s-side1)*(s-side2)*(s-side3)));
    printf("Area of the Triangle is : %f\n ",area);
    getch();
}
