/*Admission to Professional course, if a Student is Satisfy any one of this two Condition, The Student can Admitted*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float mathematics, physics, chemistry;
    float total=0;
    printf("\n This Program Illustrate that, Take three Subjects Marks and Check the Student get Admission or Not");
    printf("\n Enter your Mathematics mark :");
    scanf("%f",&mathematics);
    printf("\n Enter your Physics mark :");
    scanf("%f",&physics);
    printf("\n Enter your Chemistry mark :");
    scanf("%f",&chemistry);

    total=mathematics+physics+chemistry;

    if(mathematics>=60 && physics>=50 && chemistry>=40 || total>=200)
    {
          printf("Admitted");
    }
    else
    {
        printf("Not Admitted");
    }
    getch();
}
