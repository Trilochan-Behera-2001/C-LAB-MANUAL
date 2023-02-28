/*find the area  of Triangle by using its base and height */
#include<stdio.h>
#include<conio.h>
void main()
{
    float base, height, area;
    printf("\n ****find the area  of Triangle by using its base and height****");
    printf("\n Enter the Base and Height of a Triangle :");
    scanf("%f %f", &base, &height);
    area=0.5*base*height;
    printf("\n The Area of the Triangle is :%g",area);
    getch();
}
