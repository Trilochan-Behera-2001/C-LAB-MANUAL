/*Write a program that finds the sum of diagonal elements of a square matrix*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int mat[3][3],i,j,sum;
    sum=0;
    printf("Enter value of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Printing the Entered matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    printf("\t \t  ...Printing  sum of daigonal element of a matrix.....\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+mat[i][j];
            }
        }
    }
    printf("Sum of all daigonal element is %d",sum);
    getch();
}
