/* Write a program using function to input a m x n matrix (of integers) and then transpose
it.*/
#include"stdio.h"
#include"conio.h"
void transpose(int row2,int col2,int [][col2]);       //Function Declaration

void main()                  //main function
{
    int row,col,i,j;
    printf("Enter size of row\n");
    scanf("%d",&row);
    printf("Enter size of column\n");
    scanf("%d",&col);
    int matrix[row][col];           //Declaration of matrix
    printf("Enter value of matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("value of matrix is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    transpose(row,col,matrix);            //calling to the transpose()
    getch();
}
void transpose(int row2,int col2,int matrix2[][col2])     //Function Definition
{
    int p,q;
    printf("transpose of matrix is:\n");
     for(p=0;p<col2;p++)
    {
        for(q=0;q<row2;q++)
        {
            printf("%d\t",matrix2[q][p]);
        }
        printf("\n");
    }

}
