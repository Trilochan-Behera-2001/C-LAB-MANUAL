/*Write a program using pointers to read an array of integers and print its elements in
reverse order.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    printf("\n Enter the size of an array :");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Value of an array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }
    printf("\n Entered array :");
    for(i=0;i<n;i++)
    {
        printf("%d ",(*(a+i)));
    }
   // printf("\n");
    printf("\n Reverse of the Entered array :");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",(*(a+i)));
    }
    printf("\n");
    getch();

}
