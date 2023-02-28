/*Write a program to input ‘n’ numbers and print the 2nd largest and 2nd Smallest*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,temp;
    temp=0;
    printf(" \n Enter size of array: ");
    scanf("%d",&n);

    int arr[n];

    printf("\n Enter values of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n printing values of array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
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
    printf("\n second largest no is:%d",arr[1]);
    printf("\n second smallest no is:%d",arr[n-2]);
    getch();
}

