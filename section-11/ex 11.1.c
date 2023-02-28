/*Write a program using Structure to create data for 'N' number of Students
and find the total mark of each student and average mark of all Students*/
#include"stdio.h"
#include"conio.h"
#define subject 3
typedef struct
{
    int rollno;
    char name[30];
    float marks[subject];
}student;
void main()
{
    int n,i,j;
    float avg=0;
    float sum=0;
    printf("\nHow many student data you want to store:\n");
    scanf("%d",&n);
   student s[n];
   for(i=0;i<n;i++)
   {
       printf("\nEnter information for student %d\n",i+1);

       printf("\nEnter roll no of student %d\n",i+1);
       scanf("%d",&s[i].rollno);
       printf("Enter name of student %d\n",i+1);
       scanf("%s",s[i].name);
       for(j=0;j<subject;j++)
       {
          printf("\nEnter the marks of sub%d of student %d\n",j+1,i+1);
          scanf("%f",&s[i].marks[j]);
       }
   }
    for(i=0;i<n;i++)
    {
        printf("details of student %d\n",i+1);
        printf("roll no of student is %d\n",s[i].rollno);
        puts("name of student is:");
        printf("%s",s[i].name);
         for(j=0;j<subject;j++)
       {
          printf("marks of sub%d of student %d is %.2f\n",j+1,i+1,s[i].marks[j]);
       }
       //calculating total marks
       float total=0;
       for(j=0;j<subject;j++)
       {
           total=total+s[i].marks[j];
       }
       printf("total marks of student %d is %.2f:\n",i+1,total);
       sum=sum+total;
    }
     //calculating average marks of all student
    avg=sum/n;
    printf("sum=%f",sum);
    printf("Average marks of %d student is %.2f\n",n,avg);
    getch();

}

