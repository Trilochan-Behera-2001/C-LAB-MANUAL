/*Write a Program to input Three Numbers and find out Smallest among Three Number*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("\n This Program Illustrate that, Take three Numbers and find Smallest among");
    printf("\n Enter Three Integer from Keyboard :");
    scanf("%d %d %d",&a,&b,&c);

    if(a<b && a<c)
    {
        printf("a is Smallest among Three \n");
    }
    else if(b<a && b<c)
    {
        printf("b is smallest among Three \n ");

    }
    else
    {
        printf("c is Smallest among Three");
    }
    getch();
}
