
/*Write a program to input a square matrix (a matrix of order n × n) and check whether it is
symmetric or not (A matrix A = (aij) is symmetric if aij = aji, for all i and j)*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],b[3][3],i,j,flag=1;

    printf("Enter value of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\t \t ..Transpose of matrix.. \n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    printf("printing transpose of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("\t \t ..checking matrix is symmetric or not...\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          if(a[i][j]!=b[i][j])
          {
           flag=flag+1;;
          }
        }
    }
    if(flag==1)
    {
        printf("Entered Matrix is symmetric");
    }
    else
    {
         printf("Entered Matrix is not symmetric ");
    }
    getch();
}

