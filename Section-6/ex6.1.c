/* Write a program to input ‘n’ numbers and sort them in descending order.*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,temp;
    temp=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter values of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("printing values of array:");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
      {
        if(arr[i]<arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
      }
    }
    printf("array in descending order:");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    getch();
}
