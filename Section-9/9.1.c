
/*Write a program using pointers to read an array of integers and print its elements in
reverse order.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a[4][5];
    printf("Enter the Value of an array :");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",(*(a+i)+j));
        }
    }
    printf("\n Entered array :");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
           printf("a[%d][%d] %u %d ",i,j,(*(a+i)+j),*(*(a+i)+j));
        }
        printf("\n");
    }
}

