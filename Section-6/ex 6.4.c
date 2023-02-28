/*Write a program to read ‘n’ real numbers and then insert a new real number at a given
position (after insertion, the array size should increase by 1)*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i,pos,value;
   printf("Enter size of array\n");
   scanf("%d",&n);
   int a[n];
   printf("Enter the value of array:\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("printing the array:\n");
   for(i=0;i<n;i++)
   {
       printf("%d\t",a[i]);
   }
   printf("\n");
   printf("Enter the location where you insert a new element:\n");
   scanf("%d",&pos);
   printf("Enter the value to be inserted:\n");
   scanf("%d",&value);
   for(i=n-1;i>=pos-1;i--)
   {
       a[i+1]=a[i];
   }
   a[pos-1]=value;
   printf("printing the resultant array:\n");
   for(i=0;i<=n;i++)
   {
       printf("%d\t",a[i]);
   }
   getch();
}
