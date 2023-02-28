/*Write a program to read ‘n’ numbers and find the frequency of occurrence of each number*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i,j,count,temp,index;
   count=1;
   printf("Enter size of array\n");
   scanf("%d",&n);
   int a[n];
   printf("Enter the value of array:\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   //sorting the array
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
       }
   }
   for(i=0;i<n;)
   {

       for(j=i+1;j<n;j++)
       {

           if(a[i]==a[j])
           {
               count++;
           }
       }
       index=i;
       i=i+count;
       printf("%d represent %d times\n",a[index],count);
       count=1;
   }
   getch();
}
