/*find the area and perimeter of circle by using radius */
#include<stdio.h>
#include<conio.h>
#define PI 3.141
char main()
{
    float rad;
    float area,perimeter;
    printf("\n This program find the area and perimeter of circle by using radius");
    printf("\n Enter The Radius of a Circle :");
    scanf("%f",&rad);
    area=(float)rad*rad*PI;
    printf(" \n The Area of the circle is :%f",area);
    printf("\n------------------------------------------");
    perimeter=(float)rad*2*PI;
    printf("\n The Perimeter of the circle is :%f  ",perimeter);
    getch();
    return 'a';
}
