/* Write a menu-based program that takes two linear arrays A and B as input and displays
the results of the following operations based on user’s choice.
1. Traverse A.
2. Traverse B.
3. Insert a new element in A (after insertion, the size of A should increase by 1).
4. Insert a new element in B (after insertion, the size of B should increase by 1).
5. Delete an element from A.
6. Delete an element from B.
7. Search an element in A.
8. Search an element in B.
9. Sort A (in ascending order).
10. Sort B (in ascending order).
11. Merge A and B to form a new array B*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int n,m,p,i,j,k,l,pos,value,choice,temp;
   l=0;
   printf("Enter size of array 1\n");
   scanf("%d",&n);
   int a[n];
   printf("Enter the value of array 1:\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   //second array
   printf("Enter size of array 2\n");
   scanf("%d",&m);
   int b[m];
   printf("Enter the value of array 2:\n");
   for(i=0;i<m;i++)
   {
       scanf("%d",&b[i]);
   }
   p=n+m;
   //Declare 3rd array
   int c[p];
   //menu is given

   printf("1:Traverse A----\n");
   printf("2:Traverse B----\n");
   printf("3:Insert a new element in array A----\n");
   printf("4:Insert a new element in array B----\n");
   printf("5:Delete an element from A----\n");
   printf("6:Delete an element from B----\n");
   printf("7:Search an element in A----\n");
   printf("8:Search an element in B----\n");
   printf("9:Sort A in ascending order----\n");
   printf("10:Sort B in ascending order----\n");
   printf("11:Merge A and B to form a new array C----\n");

   printf("To perform above operation select your choice:");
   scanf("%d",&choice);
   switch(choice)
   {
       case 1:
           printf("printing the array A:\n");
           for(i=0;i<n;i++)
           {
             printf("%d\t",a[i]);
           }
           break;
       case 2:
          printf("printing the array B:\n");
          for(i=0;i<m;i++)
          {
            printf("%d\t",b[i]);
          }
          break;
       case 3:
         printf("Enter the location where you insert a new element in array A:\n");
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
        break;
       case 4:
         printf("Enter the location where you insert a new element in array B:\n");
          scanf("%d",&pos);
          printf("Enter the value to be inserted:\n");
         scanf("%d",&value);
        for(i=m-1;i>=pos-1;i--)
        {
          b[i+1]=b[i];
         }
        b[pos-1]=value;
        printf("printing the resultant array:\n");
        for(i=0;i<=m;i++)
         {
           printf("%d\t",b[i]);
         }
         break;
       case 5:
        printf("Enter the location of array A to be deleted:\n");
        scanf("%d",&pos);
        for(i=pos-1;i<n-1;i++)
         {
          a[i]=a[i+1];
         }
        printf("printing the resultant array:\n");
        for(i=0;i<n-1;i++)
        {
         printf("%d\t",a[i]);
        }
        break;
       case 6:
        printf("Enter the location of array B to be deleted:\n");
        scanf("%d",&pos);
        for(i=pos-1;i<m-1;i++)
        {
          b[i]=b[i+1];
        }
       printf("printing the resultant array:\n");
       for(i=0;i<m-1;i++)
       {
         printf("%d\t",b[i]);
       }
       break;
      case 7:
           printf("Which element you want to search in array A:\n");
           scanf("%d\n",&value);
           for(i=0;i<n;i++)
            {
             if(a[i]==value)
             {
               printf("Value found at index %d\n",i);
             }
            }
            break;
      case 8:
         printf("Which element you want to search in array B:\n");
         scanf("%d\n",&value);
          for(i=0;i<m;i++)
           {
             if(a[i]==value)
             {
               printf("Value found at index %d\n",i);
             }
          }
          break;
      case 9:
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
        printf("array in ascending order:");
        for(i=0;i<n;i++)
        {
          printf("%d",a[i]);
        }
        break;
      case 10:
           for(i=0;i<m;i++)
         {
           for(j=i+1;j<m;j++)
          {
            if(b[i]<b[j])
            {
              temp=b[i];
              b[i]=b[j];
              b[j]=temp;
            }
          }
         }
         printf("array in ascending order:");
         for(i=0;i<m;i++)
           {
           printf("%d",b[i]);
           }
           break;
      case 11:
       //storing 1st and 2nd array in 3rd array
        for(k=0;k<p;k++)
         {
           if(k<n)
           {
             c[k]=a[k];
           }
           else
           {
            c[k]=b[l];
            l++;
           }
         }
        printf("printing the array C:\n");
        for(k=0;k<p;k++)
        {
          printf("%d\t",c[k]);
        }
        break;
      default:
        printf("please enter valid choice:\n");
        break;
   }

}




