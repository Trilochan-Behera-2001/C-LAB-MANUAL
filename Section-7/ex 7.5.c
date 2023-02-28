/* Write a menu-based program that takes two matrixes A and B as input and displays the
results of the following operations based on user’s choice.
1. A + B
2. A - B
3. B - A
4. A × B*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,choice;
    printf("Enter value of matrix A:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Printing matrix A:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter value of matrix B:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Printing matrix B:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("1:A+B\n");
    printf("2:A-B\n");
    printf("3:B-A\n");
    printf("4:A*B\n");

    printf("Please enter above choice:\n");
    scanf("%d",&choice);


    switch(choice)
  {
    case 1:
         printf("You choice ADDITION from A and B");
         for(i=0;i<3;i++)
        {
           for(j=0;j<3;j++)
          {
             c[i][j]=a[i][j]+b[i][j];
          }
        }
        printf("Sum of A+B:\n");
         for(i=0;i<3;i++)
        {
           for(j=0;j<3;j++)
          {
             printf("%d\t",c[i][j]);
          }
        }
        break;
    case 2:
        printf("You choice SUBTRACTION from A TO B");
         for(i=0;i<3;i++)
        {
           for(j=0;j<3;j++)
          {
             c[i][j]=a[i][j]-b[i][j];
          }
          printf("\n");
        }

        printf("Subtraction of A-B is :\n");
         for(i=0;i<3;i++)
        {
           for(j=0;j<3;j++)
          {
             printf("%d\t",c[i][j]);
          }
          printf("\n");
        }
        break;
    case 3:
         printf("You choice SUBTRACTION from B TO A");
         for(i=0;i<3;i++)
        {
           for(j=0;j<3;j++)
          {
             c[i][j]=b[i][j]-a[i][j];
          }
          printf("\n");
        }
        printf("Subtraction of B-A:\n");
         for(i=0;i<3;i++)
        {
           for(j=0;j<3;j++)
          {
             printf("%d\t",c[i][j]);
          }
          printf("\n");
        }
        break;
    case 4:
         printf("You choice MULTIPLICATION of A and B");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           c[i][j]=0;
           for(k=0;k<3;k++)
           {
               c[i][j]=c[i][j]+a[i][k]*b[k][j];
           }
        }
    }
    printf("Multiplication of matrix A and B :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    break;
    default:
        printf("Invalid option ");
        printf("Please choose between 1 to 4\n");
  }
     getch();

}



