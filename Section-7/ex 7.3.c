/*Write a program that finds the sum of each row and sum of each column of a matrix.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int mat[3][3],i,j,rowsum,colsum;

    printf("Enter value of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Printing matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    printf("Printing  sum of each row and column of a matrix:\n");
    for(i=0;i<3;i++)
    {
        rowsum=0;
        colsum=0;
        for(j=0;j<3;j++)
        {
            rowsum=rowsum+mat[i][j];
            colsum=colsum+mat[j][i];
        }
        printf("----------------------------------------\n");
        printf("Sum of row %d is %d\n",i+1,rowsum);
        printf("----------------------------------------\n");
        printf("Sum of column %d is %d\n",i+1,colsum);
    }
    getch();
}
