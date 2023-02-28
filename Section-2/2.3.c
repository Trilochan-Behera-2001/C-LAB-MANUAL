/*division of two float Numbers and Print its result with two float numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float num1,num2,res;
    printf("\n Division of two float Numbers and Print its result with two float numbers");
    printf("\n Please enter two Float numbers: ");
    scanf("%f %f", &num1, &num2);
    res=num1/num2;
    printf("\n Division of %g and %g is : %g", num1, num2,res);
    getch();
}

